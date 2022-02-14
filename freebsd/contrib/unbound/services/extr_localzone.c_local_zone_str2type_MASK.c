
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;


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
 int VAR_13 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

int FUNC_1(const char* VAR_14, enum localzone_type* VAR_15)
{
 if(FUNC_0(VAR_14, "deny") == 0)
  *VAR_15 = VAR_3;
 else if(FUNC_0(VAR_14, "refuse") == 0)
  *VAR_15 = VAR_10;
 else if(FUNC_0(VAR_14, "static") == 0)
  *VAR_15 = VAR_11;
 else if(FUNC_0(VAR_14, "transparent") == 0)
  *VAR_15 = VAR_12;
 else if(FUNC_0(VAR_14, "typetransparent") == 0)
  *VAR_15 = VAR_13;
 else if(FUNC_0(VAR_14, "redirect") == 0)
  *VAR_15 = VAR_9;
 else if(FUNC_0(VAR_14, "inform") == 0)
  *VAR_15 = VAR_4;
 else if(FUNC_0(VAR_14, "inform_deny") == 0)
  *VAR_15 = VAR_5;
 else if(FUNC_0(VAR_14, "inform_redirect") == 0)
  *VAR_15 = VAR_6;
 else if(FUNC_0(VAR_14, "always_transparent") == 0)
  *VAR_15 = VAR_2;
 else if(FUNC_0(VAR_14, "always_refuse") == 0)
  *VAR_15 = VAR_1;
 else if(FUNC_0(VAR_14, "always_nxdomain") == 0)
  *VAR_15 = VAR_0;
 else if(FUNC_0(VAR_14, "noview") == 0)
  *VAR_15 = VAR_8;
 else if(FUNC_0(VAR_14, "nodefault") == 0)
  *VAR_15 = VAR_7;
 else return 0;
 return 1;
}
