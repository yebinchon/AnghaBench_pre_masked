
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0)
{
  static char VAR_1[80];


  if (!VAR_0)
    return ((void*)0);



  if (FUNC_1(VAR_0, "ro")) return "rw";
  if (FUNC_1(VAR_0, "rw")) return "ro";
  if (FUNC_1(VAR_0, "bg")) return "fg";
  if (FUNC_1(VAR_0, "fg")) return "bg";
  if (FUNC_1(VAR_0, "soft")) return "hard";
  if (FUNC_1(VAR_0, "hard")) return "soft";


  if (FUNC_0(VAR_0, "no", 2)) {
    FUNC_3(VAR_1, &VAR_0[2], sizeof(VAR_1));
  } else {

    FUNC_3(VAR_1, "no", sizeof(VAR_1));
    FUNC_2(VAR_1, VAR_0, sizeof(VAR_1));
  }
  return VAR_1;
}
