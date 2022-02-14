
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ucl_parse_type { ____Placeholder_ucl_parse_type } ucl_parse_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static inline enum ucl_parse_type
FUNC_1 (const char *VAR_4)
{
 enum ucl_parse_type VAR_5 = VAR_3;

 if (VAR_4 != ((void*)0)) {
  if (FUNC_0 (VAR_4, "msgpack") == 0) {
   VAR_5 = VAR_2;
  }
  else if (FUNC_0 (VAR_4, "sexp") == 0 ||
    FUNC_0 (VAR_4, "csexp") == 0) {
   VAR_5 = VAR_1;
  }
  else if (FUNC_0 (VAR_4, "auto") == 0) {
   VAR_5 = VAR_0;
  }
 }

 return VAR_5;
}
