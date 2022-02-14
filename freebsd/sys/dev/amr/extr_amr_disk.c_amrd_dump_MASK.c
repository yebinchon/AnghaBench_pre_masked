
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct disk {scalar_t__ d_drv1; } ;
struct amrd_softc {int amrd_drive; scalar_t__ amrd_controller; } ;
struct amr_softc {int amr_drive; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amr_softc*,int,int,void*,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, void *VAR_3, vm_offset_t VAR_4, off_t VAR_5, size_t VAR_6)
{

    struct amrd_softc *VAR_7;
    struct amr_softc *VAR_8;
    int VAR_9;
    struct disk *VAR_10;

    VAR_10 = VAR_2;
    VAR_7 = (struct amrd_softc *)VAR_10->d_drv1;
    if (VAR_7 == ((void*)0))
 return(VAR_1);
    VAR_8 = (struct amr_softc *)VAR_7->amrd_controller;

    if (VAR_6 > 0) {
 int VAR_11 = VAR_7->amrd_drive - VAR_8->amr_drive;
 if ((VAR_9 = FUNC_0(VAR_8,VAR_11,VAR_5 / VAR_0 ,(void *)VAR_3,(int) VAR_6 / VAR_0 )) != 0)
      return(VAR_9);

    }
    return(0);
}
