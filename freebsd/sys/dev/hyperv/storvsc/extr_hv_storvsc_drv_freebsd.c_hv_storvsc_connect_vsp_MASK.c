
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmstor_chan_props {int dummy; } ;
struct storvsc_softc {TYPE_1__* hs_drv_props; int hs_chan; } ;
struct TYPE_2__ {int drv_ringbuffer_size; } ;


 int FUNC_0 (struct storvsc_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct vmstor_chan_props*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,void*,int,int ,struct storvsc_softc*) ;

__attribute__((used)) static int
FUNC_4(struct storvsc_softc *VAR_1)
{
 int VAR_2 = 0;
 struct vmstor_chan_props VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(struct vmstor_chan_props));




 FUNC_2(VAR_1->hs_chan);
 VAR_2 = FUNC_3(
  VAR_1->hs_chan,
  VAR_1->hs_drv_props->drv_ringbuffer_size,
  VAR_1->hs_drv_props->drv_ringbuffer_size,
  (void *)&VAR_3,
  sizeof(struct vmstor_chan_props),
  VAR_0, VAR_1);

 if (VAR_2 != 0) {
  return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_1);
 return (VAR_2);
}
