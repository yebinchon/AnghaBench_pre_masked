
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int text; struct nodelist* backquote; } ;
union node {TYPE_1__ narg; } ;
struct stackmark {int dummy; } ;
struct nodelist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (int ,struct nodelist**,int,int *) ;
 int VAR_2 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (struct stackmark*) ;
 int FUNC_6 (struct stackmark*) ;

int
FUNC_7(union node *VAR_3, const char *VAR_4)
{
 struct stackmark VAR_5;
 struct nodelist *VAR_6;
 int VAR_7;
 char *VAR_8;

 FUNC_6(&VAR_5);
 VAR_6 = VAR_3->narg.backquote;
 FUNC_0(VAR_2);
 FUNC_2(VAR_3->narg.text, &VAR_6, VAR_1 | VAR_0, ((void*)0));
 FUNC_1('\0', VAR_2);
 VAR_8 = FUNC_3(VAR_2);
 VAR_7 = FUNC_4(VAR_8, VAR_4);
 FUNC_5(&VAR_5);
 return VAR_7;
}
