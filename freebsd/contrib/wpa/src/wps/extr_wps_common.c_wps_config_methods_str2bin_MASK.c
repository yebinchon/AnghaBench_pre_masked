
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

u16 FUNC_1(const char *VAR_13)
{
 u16 VAR_14 = 0;

 if (VAR_13 == ((void*)0) || VAR_13[0] == '\0') {

  VAR_14 |= VAR_0 | VAR_4;
  VAR_14 |= VAR_11;






 } else {
  if (FUNC_0(VAR_13, "ethernet"))
   VAR_14 |= VAR_1;
  if (FUNC_0(VAR_13, "label"))
   VAR_14 |= VAR_5;
  if (FUNC_0(VAR_13, "display"))
   VAR_14 |= VAR_0;
  if (FUNC_0(VAR_13, "ext_nfc_token"))
   VAR_14 |= VAR_2;
  if (FUNC_0(VAR_13, "int_nfc_token"))
   VAR_14 |= VAR_3;
  if (FUNC_0(VAR_13, "nfc_interface"))
   VAR_14 |= VAR_6;
  if (FUNC_0(VAR_13, "push_button"))
   VAR_14 |= VAR_10;
  if (FUNC_0(VAR_13, "keypad"))
   VAR_14 |= VAR_4;
  if (FUNC_0(VAR_13, "virtual_display"))
   VAR_14 |= VAR_11;
  if (FUNC_0(VAR_13, "physical_display"))
   VAR_14 |= VAR_8;
  if (FUNC_0(VAR_13, "virtual_push_button"))
   VAR_14 |= VAR_12;
  if (FUNC_0(VAR_13, "physical_push_button"))
   VAR_14 |= VAR_9;
  if (FUNC_0(VAR_13, "p2ps"))
   VAR_14 |= VAR_7;
 }

 return VAR_14;
}
