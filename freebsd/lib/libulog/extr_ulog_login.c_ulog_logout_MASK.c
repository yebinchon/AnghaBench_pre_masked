
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct utmpx*) ;
 int FUNC_1 (struct utmpx*,char const*) ;

void
FUNC_2(const char *VAR_1)
{
 struct utmpx VAR_2;

 FUNC_1(&VAR_2, VAR_1);
 VAR_2.ut_type = VAR_0;
 FUNC_0(&VAR_2);
}
