
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

bool
FUNC_1 (const char *VAR_8, ucl_type_t *VAR_9)
{
 if (FUNC_0 (VAR_8, "object") == 0) {
  *VAR_9 = VAR_5;
 }
 else if (FUNC_0 (VAR_8, "array") == 0) {
  *VAR_9 = VAR_0;
 }
 else if (FUNC_0 (VAR_8, "integer") == 0) {
  *VAR_9 = VAR_3;
 }
 else if (FUNC_0 (VAR_8, "number") == 0) {
  *VAR_9 = VAR_2;
 }
 else if (FUNC_0 (VAR_8, "string") == 0) {
  *VAR_9 = VAR_6;
 }
 else if (FUNC_0 (VAR_8, "boolean") == 0) {
  *VAR_9 = VAR_1;
 }
 else if (FUNC_0 (VAR_8, "null") == 0) {
  *VAR_9 = VAR_4;
 }
 else if (FUNC_0 (VAR_8, "userdata") == 0) {
  *VAR_9 = VAR_7;
 }
 else {
  return 0;
 }

 return 1;
}
