
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_host; int ut_user; int ut_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct utmpx*) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (struct utmpx*,char const*) ;

void
FUNC_3(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct utmpx VAR_4;

 FUNC_2(&VAR_4, VAR_1);
 VAR_4.ut_type = VAR_0;
 FUNC_1(VAR_4.ut_user, VAR_2, sizeof VAR_4.ut_user);
 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_4.ut_host, VAR_3, sizeof VAR_4.ut_host);
 FUNC_0(&VAR_4);
}
