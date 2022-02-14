
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_string_descriptor {int bLength; int * bString; } ;


 char FUNC_0 (int ) ;

void
FUNC_1(struct usb_string_descriptor *VAR_0, char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 if (VAR_0->bLength < 2) {
  VAR_1[0] = '\0';
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2 - 1 && VAR_3 < (VAR_0->bLength / 2) - 1; VAR_3++)
  VAR_1[VAR_3] = FUNC_0(VAR_0->bString[VAR_3]);

 VAR_1[VAR_3] = '\0';
}
