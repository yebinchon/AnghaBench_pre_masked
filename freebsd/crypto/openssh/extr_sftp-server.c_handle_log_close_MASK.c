
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,char*,int ,...) ;

__attribute__((used)) static void
FUNC_5(int VAR_1, char *VAR_2)
{
 if (FUNC_2(VAR_1, VAR_0)) {
  FUNC_4("%s%sclose \"%s\" bytes read %llu written %llu",
      VAR_2 == ((void*)0) ? "" : VAR_2, VAR_2 == ((void*)0) ? "" : " ",
      FUNC_3(VAR_1),
      (unsigned long long)FUNC_0(VAR_1),
      (unsigned long long)FUNC_1(VAR_1));
 } else {
  FUNC_4("%s%sclosedir \"%s\"",
      VAR_2 == ((void*)0) ? "" : VAR_2, VAR_2 == ((void*)0) ? "" : " ",
      FUNC_3(VAR_1));
 }
}
