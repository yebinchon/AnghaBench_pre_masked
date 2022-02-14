
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int sb1 ;
typedef int pb ;
typedef int atf_tc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct stat*,struct stat*,int) ;
 int FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,int,char*,char const*,char*) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static void
FUNC_7(const atf_tc_t *VAR_1, const char *VAR_2)
{
 char VAR_3[VAR_0], VAR_4[VAR_0];
 struct stat VAR_5, VAR_6;

 FUNC_6(VAR_4, VAR_2);
 FUNC_5(VAR_3, sizeof(VAR_3), "%s/../%s", VAR_2, FUNC_2(VAR_4));
 if (FUNC_4(VAR_3, &VAR_5) == -1)
  FUNC_1("stat 1");

 FUNC_5(VAR_3, sizeof(VAR_3), "%s/./../%s", VAR_2, FUNC_2(VAR_4));
 if (FUNC_4(VAR_3, &VAR_6) == -1)
  FUNC_1("stat 2");

 FUNC_0(FUNC_3(&VAR_5, &VAR_6, sizeof(VAR_5)) == 0);
}
