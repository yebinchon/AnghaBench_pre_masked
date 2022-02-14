
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ucl_parser {int err; } ;
struct ucl_include_params {scalar_t__ must_exist; scalar_t__ soft_fail; int allow_glob; } ;
typedef int globbuf ;
struct TYPE_5__ {size_t gl_pathc; scalar_t__* gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef int glob_pattern ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (unsigned char const*,size_t,struct ucl_parser*,struct ucl_include_params*) ;
 int FUNC_6 (char*,char const*,size_t) ;

__attribute__((used)) static bool
FUNC_7 (const unsigned char *VAR_1, size_t VAR_2,
  struct ucl_parser *VAR_3, struct ucl_include_params *VAR_4)
{
 const unsigned char *VAR_5 = VAR_1, *VAR_6 = VAR_1 + VAR_2;
 bool VAR_7 = 0;
 int VAR_8 = 0;
 char VAR_9[VAR_0];
 size_t VAR_10;


 if (!VAR_4->allow_glob) {
  return FUNC_5 (VAR_1, VAR_2, VAR_3, VAR_4);
 }
 else {

  while (VAR_5 != VAR_6) {
   if (*VAR_5 == '*' || *VAR_5 == '?') {
    VAR_7 = 1;
    break;
   }
   VAR_5 ++;
  }
  if (VAR_7) {
   glob_t VAR_11;
   FUNC_2 (&VAR_11, 0, sizeof (VAR_11));
   FUNC_6 (VAR_9, (const char *)VAR_1,
    (VAR_2 + 1 < sizeof (VAR_9) ? VAR_2 + 1 : sizeof (VAR_9)));
   if (FUNC_0 (VAR_9, 0, ((void*)0), &VAR_11) != 0) {
    return (!VAR_4->must_exist || 0);
   }
   for (VAR_10 = 0; VAR_10 < VAR_11.gl_pathc; VAR_10 ++) {
    if (!FUNC_5 ((unsigned char *)VAR_11.gl_pathv[VAR_10],
      FUNC_3 (VAR_11.gl_pathv[VAR_10]), VAR_3, VAR_4)) {
     if (VAR_4->soft_fail) {
      continue;
     }
     FUNC_1 (&VAR_11);
     return 0;
    }
    VAR_8 ++;
   }
   FUNC_1 (&VAR_11);

   if (VAR_8 == 0 && VAR_4->must_exist) {
    FUNC_4 (&VAR_3->err, "cannot match any files for pattern %s",
     VAR_9);
    return 0;
   }
  }
  else {
   return FUNC_5 (VAR_1, VAR_2, VAR_3, VAR_4);
  }
 }






 return 1;
}
