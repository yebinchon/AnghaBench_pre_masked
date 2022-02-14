
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static acl_tag_t
FUNC_1(char *VAR_6, char *VAR_7)
{

 if (*VAR_7 == '\0') {
  if ((!FUNC_0(VAR_6, "user")) || (!FUNC_0(VAR_6, "u"))) {
   return (VAR_5);
  } else
  if ((!FUNC_0(VAR_6, "group")) || (!FUNC_0(VAR_6, "g"))) {
   return (VAR_1);
  } else
  if ((!FUNC_0(VAR_6, "mask")) || (!FUNC_0(VAR_6, "m"))) {
   return (VAR_2);
  } else
  if ((!FUNC_0(VAR_6, "other")) || (!FUNC_0(VAR_6, "o"))) {
   return (VAR_3);
  } else
   return(-1);
 } else {
  if ((!FUNC_0(VAR_6, "user")) || (!FUNC_0(VAR_6, "u"))) {
   return(VAR_4);
  } else
  if ((!FUNC_0(VAR_6, "group")) || (!FUNC_0(VAR_6, "g"))) {
   return(VAR_0);
  } else
   return(-1);
 }
}
