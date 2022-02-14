
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pccard_softc {scalar_t__ cis_open; int * cis; int dev; } ;
struct cdev {struct pccard_softc* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int **,int*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{
 device_t VAR_9, VAR_10;
 device_t *VAR_11;
 int VAR_12, VAR_13;
 struct pccard_softc *VAR_14;

 VAR_14 = VAR_5->si_drv1;
 if (VAR_14->cis_open)
  return (VAR_0);
 VAR_9 = VAR_14->dev;
 VAR_13 = FUNC_0(VAR_9, &VAR_11, &VAR_12);
 if (VAR_13)
  return VAR_13;
 if (VAR_12 == 0) {
  FUNC_1(VAR_11, VAR_1);
  VAR_14->cis_open++;
  VAR_14->cis = ((void*)0);
  return (0);
 }
 VAR_10 = VAR_11[0];
 FUNC_1(VAR_11, VAR_1);
 VAR_14->cis = FUNC_2(sizeof(*VAR_14->cis), VAR_1, VAR_3 | VAR_2);
 VAR_13 = FUNC_3(VAR_9, VAR_10, VAR_4, VAR_14->cis);
 if (VAR_13) {
  FUNC_1(VAR_14->cis, VAR_1);
  VAR_14->cis = ((void*)0);
  return (VAR_13);
 }
 VAR_14->cis_open++;
 return (0);
}
