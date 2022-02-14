
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int twe_dev; } ;
struct twe_drive {int td_twe_unit; int td_type; int td_state; int * td_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct twe_drive*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int,char*,char*) ;
 char* FUNC_7 (int ,int) ;
 int FUNC_8 (struct twe_softc*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_9(struct twe_softc *VAR_5, struct twe_drive *VAR_6)
{
    char VAR_7[80];
    int VAR_8;

    FUNC_4(&VAR_1);
    VAR_6->td_disk = FUNC_0(VAR_5->twe_dev, ((void*)0), -1);
    if (VAR_6->td_disk == ((void*)0)) {
 FUNC_5(&VAR_1);
 FUNC_8(VAR_5, "Cannot add unit\n");
 return (VAR_0);
    }
    FUNC_3(VAR_6->td_disk, VAR_6);





    FUNC_6(VAR_7, "Unit %d, %s, %s",
     VAR_6->td_twe_unit,
     FUNC_7(VAR_4, VAR_6->td_type),
     FUNC_7(VAR_3, VAR_6->td_state & VAR_2));
    FUNC_2(VAR_6->td_disk, VAR_7);

    VAR_8 = FUNC_1(VAR_6->td_disk);
    FUNC_5(&VAR_1);
    if (VAR_8 != 0) {
 FUNC_8(VAR_5, "Cannot attach unit to controller. error = %d\n", VAR_8);
 return (VAR_0);
    }
    return (0);
}
