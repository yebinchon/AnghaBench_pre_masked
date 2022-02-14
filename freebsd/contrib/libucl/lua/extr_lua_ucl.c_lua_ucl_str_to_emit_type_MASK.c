
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ucl_emitter { ____Placeholder_ucl_emitter } ucl_emitter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static inline enum ucl_emitter
FUNC_1 (const char *VAR_4)
{
 enum ucl_emitter VAR_5 = VAR_2;

 if (FUNC_0 (VAR_4, "json") == 0) {
  VAR_5 = VAR_1;
 }
 else if (FUNC_0 (VAR_4, "json-compact") == 0) {
  VAR_5 = VAR_2;
 }
 else if (FUNC_0 (VAR_4, "yaml") == 0) {
  VAR_5 = VAR_3;
 }
 else if (FUNC_0 (VAR_4, "config") == 0 ||
   FUNC_0 (VAR_4, "ucl") == 0) {
  VAR_5 = VAR_0;
 }

 return VAR_5;
}
