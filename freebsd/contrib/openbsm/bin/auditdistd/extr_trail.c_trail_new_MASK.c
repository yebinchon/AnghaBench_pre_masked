
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trail {int tr_filefd; int tr_magic; int * tr_dirfp; int tr_dirname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct trail* FUNC_0 (int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct trail*) ;
 int FUNC_2 (char const*,int) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int ,char const*,int) ;

struct trail *
FUNC_7(const char *VAR_5, bool VAR_6)
{
 struct trail *VAR_7;

 VAR_7 = FUNC_0(1, sizeof(*VAR_7));

 if (FUNC_6(VAR_7->tr_dirname, VAR_5, sizeof(VAR_7->tr_dirname)) >=
     sizeof(VAR_7->tr_dirname)) {
  FUNC_1(VAR_7);
  FUNC_5("Directory name too long (\"%s\").", VAR_5);
  VAR_4 = VAR_0;
  return (((void*)0));
 }
 VAR_7->tr_dirfp = FUNC_3(VAR_5);
 if (VAR_7->tr_dirfp == ((void*)0)) {
  if (VAR_6 && VAR_4 == VAR_1) {
   if (FUNC_2(VAR_5, 0700) == -1) {
    FUNC_4(VAR_2,
        "Unable to create directory \"%s\"",
        VAR_5);
    FUNC_1(VAR_7);
    return (((void*)0));
   }

  } else {
   FUNC_4(VAR_2,
       "Unable to open directory \"%s\"",
       VAR_5);
   FUNC_1(VAR_7);
   return (((void*)0));
  }
  VAR_7->tr_dirfp = FUNC_3(VAR_5);
  if (VAR_7->tr_dirfp == ((void*)0)) {
   FUNC_4(VAR_2,
       "Unable to open directory \"%s\"",
       VAR_5);
   FUNC_1(VAR_7);
   return (((void*)0));
  }
 }
 VAR_7->tr_filefd = -1;
 VAR_7->tr_magic = VAR_3;
 return (VAR_7);
}
