
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {struct ustorage_fs_lun* currlun; } ;
struct ustorage_fs_softc {TYPE_1__ sc_transfer; } ;
struct ustorage_fs_lun {int sense_data; } ;


 int VAR_0 ;

__attribute__((used)) static uint8_t
FUNC_0(struct ustorage_fs_softc *VAR_1)
{
 struct ustorage_fs_lun *VAR_2 = VAR_1->sc_transfer.currlun;


 VAR_2->sense_data = VAR_0;
 return (1);
}
