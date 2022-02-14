
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct twed_softc {TYPE_1__* twed_drive; scalar_t__ twed_controller; } ;
struct twe_softc {int dummy; } ;
struct disk {scalar_t__ d_drv1; } ;
typedef size_t off_t ;
struct TYPE_2__ {int td_twe_unit; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct twe_softc*,int ,size_t,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, void *VAR_3, vm_offset_t VAR_4, off_t VAR_5, size_t VAR_6)
{
    struct twed_softc *VAR_7;
    struct twe_softc *VAR_8;
    int VAR_9;
    struct disk *VAR_10;

    VAR_10 = VAR_2;
    VAR_7 = (struct twed_softc *)VAR_10->d_drv1;
    if (VAR_7 == ((void*)0))
 return(VAR_0);
    VAR_8 = (struct twe_softc *)VAR_7->twed_controller;

    if (VAR_6 > 0) {
 if ((VAR_9 = FUNC_0(VAR_8, VAR_7->twed_drive->td_twe_unit, VAR_5 / VAR_1, VAR_3, VAR_6 / VAR_1)) != 0)
     return(VAR_9);
    }
    return(0);
}
