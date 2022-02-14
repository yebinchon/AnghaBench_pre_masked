
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct uio {int uio_resid; scalar_t__ uio_rw; } ;
struct cdev {struct beri_softc* si_drv1; } ;
struct beri_softc {int data_size; scalar_t__ bsh; scalar_t__ data_read; scalar_t__ data_write; int dev; } ;
struct TYPE_5__ {int in; int out; } ;
typedef TYPE_1__ control_reg_t ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__ FUNC_1 (struct beri_softc*,int) ;
 int FUNC_2 (struct beri_softc*,int,TYPE_1__*) ;
 int FUNC_3 (struct beri_softc*,int,TYPE_1__*) ;
 int FUNC_4 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_0, struct uio *VAR_1, int VAR_2)
{
 struct beri_softc *VAR_3;
 uint32_t VAR_4;
 control_reg_t VAR_5;
 uint16_t *VAR_6;
 uint8_t *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_3 = VAR_0->si_drv1;

 VAR_9 = VAR_1->uio_rw ? 1 : 0;

 VAR_5 = FUNC_1(VAR_3, VAR_9);
 VAR_8 = FUNC_2(VAR_3, VAR_9, &VAR_5);
 if (VAR_8 < VAR_1->uio_resid) {
  FUNC_0(VAR_3->dev, "Err: no data/space available\n");
  return (1);
 }

 VAR_10 = VAR_1->uio_resid;
 VAR_6 = VAR_9 ? &VAR_5.in : &VAR_5.out;
 VAR_11 = (VAR_3->data_size - *VAR_6);

 VAR_4 = VAR_9 ? VAR_3->data_write : VAR_3->data_read;
 VAR_7 = (uint8_t *)(VAR_3->bsh + VAR_4);

 if (VAR_10 <= VAR_11) {
  FUNC_4(VAR_7 + *VAR_6, VAR_10, VAR_1);
 } else {
  FUNC_4(VAR_7 + *VAR_6, VAR_11, VAR_1);
  FUNC_4(VAR_7, (VAR_10 - VAR_11), VAR_1);
 }

 *VAR_6 = (*VAR_6 + VAR_10) % VAR_3->data_size;
 FUNC_3(VAR_3, VAR_9, &VAR_5);

 return (0);
}
