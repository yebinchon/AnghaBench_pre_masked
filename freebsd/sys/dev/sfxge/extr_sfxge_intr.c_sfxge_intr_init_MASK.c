
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {scalar_t__ state; int status; } ;
struct sfxge_softc {struct sfxge_intr intr; int dev; } ;
typedef int efsys_mem_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sfxge_softc*,int ,int *) ;
 int FUNC_3 (struct sfxge_softc*) ;
 int FUNC_4 (struct sfxge_softc*) ;
 int FUNC_5 (struct sfxge_softc*) ;

int
FUNC_6(struct sfxge_softc *VAR_4)
{
 device_t VAR_5;
 struct sfxge_intr *VAR_6;
 efsys_mem_t *VAR_7;
 int VAR_8;

 VAR_5 = VAR_4->dev;
 VAR_6 = &VAR_4->intr;
 VAR_7 = &VAR_6->status;

 FUNC_0(VAR_6->state == VAR_3,
     ("Interrupts already initialized"));


 if ((VAR_8 = FUNC_5(VAR_4)) == 0)
  FUNC_1(VAR_5, "Using MSI-X interrupts\n");
 else if ((VAR_8 = FUNC_4(VAR_4)) == 0)
  FUNC_1(VAR_5, "Using MSI interrupts\n");
 else if ((VAR_8 = FUNC_3(VAR_4)) == 0) {
  FUNC_1(VAR_5, "Using fixed interrupts\n");
 } else {
  FUNC_1(VAR_5, "Couldn't setup interrupts\n");
  return (VAR_1);
 }


 if ((VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_7)) != 0)
  return (VAR_1);

 VAR_6->state = VAR_2;

 return (0);
}
