
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_quirk_entry {int vid; int pid; int lo_rev; int hi_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 struct usb_quirk_entry* VAR_3 ;

__attribute__((used)) static struct usb_quirk_entry *
FUNC_1(uint16_t VAR_4, uint16_t VAR_5,
    uint16_t VAR_6, uint16_t VAR_7, uint8_t VAR_8)
{
 uint16_t VAR_9;

 FUNC_0(&VAR_2, VAR_0);

 if ((VAR_4 | VAR_5 | VAR_6 | VAR_7) == 0) {

  return (VAR_3 + VAR_1 - 1);
 }

 for (VAR_9 = 0; VAR_9 != VAR_1; VAR_9++) {

  if ((VAR_3[VAR_9].vid != VAR_4) ||
      (VAR_3[VAR_9].pid != VAR_5) ||
      (VAR_3[VAR_9].lo_rev != VAR_6) ||
      (VAR_3[VAR_9].hi_rev != VAR_7)) {
   continue;
  }
  return (VAR_3 + VAR_9);
 }

 if (VAR_8 == 0) {

  return (((void*)0));
 }

 for (VAR_9 = 0; VAR_9 != VAR_1; VAR_9++) {

  if ((VAR_3[VAR_9].vid |
      VAR_3[VAR_9].pid |
      VAR_3[VAR_9].lo_rev |
      VAR_3[VAR_9].hi_rev) != 0) {
   continue;
  }
  VAR_3[VAR_9].vid = VAR_4;
  VAR_3[VAR_9].pid = VAR_5;
  VAR_3[VAR_9].lo_rev = VAR_6;
  VAR_3[VAR_9].hi_rev = VAR_7;

  return (VAR_3 + VAR_9);
 }


 return (((void*)0));
}
