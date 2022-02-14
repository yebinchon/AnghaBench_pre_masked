
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ainfo {int a_lineno; int a_cptr; int a_line; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int,char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;

void
FUNC_3(const struct ainfo *VAR_3)
{
    FUNC_1(VAR_2, "%s: e - line %d of \"%s\", unterminated action\n",
     VAR_1, VAR_3->a_lineno, VAR_0);
    FUNC_2(VAR_3->a_line, VAR_3->a_cptr);
    FUNC_0(1);
}
