
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
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static u16 FUNC_1(u16 VAR_7)
{
 if ((VAR_7 &
      (VAR_1 | VAR_5 |
       VAR_2)) == VAR_1) {
  FUNC_0(VAR_0, "WPS: Converting display to "
      "virtual_display for WPS 2.0 compliance");
  VAR_7 |= VAR_5;
 }
 if ((VAR_7 &
      (VAR_4 | VAR_6 |
       VAR_3)) == VAR_4) {
  FUNC_0(VAR_0, "WPS: Converting push_button to "
      "virtual_push_button for WPS 2.0 compliance");
  VAR_7 |= VAR_6;
 }

 return VAR_7;
}
