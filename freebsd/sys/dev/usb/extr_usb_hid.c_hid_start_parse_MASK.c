
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_size_t ;
typedef int uint8_t ;
struct hid_data {int kindset; int const* end; void const* p; void const* start; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hid_data* FUNC_1 (int,int ,int) ;

struct hid_data *
FUNC_2(const void *VAR_3, usb_size_t VAR_4, int VAR_5)
{
 struct hid_data *VAR_6;

 if ((VAR_5-1) & VAR_5) {
  FUNC_0(0, "Only one bit can be "
      "set in the kindset\n");
  return (((void*)0));
 }

 VAR_6 = FUNC_1(sizeof *VAR_6, VAR_0, VAR_1 | VAR_2);
 VAR_6->start = VAR_6->p = VAR_3;
 VAR_6->end = ((const uint8_t *)VAR_3) + VAR_4;
 VAR_6->kindset = VAR_5;
 return (VAR_6);
}
