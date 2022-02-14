
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t argc; TYPE_1__** argv; } ;
struct TYPE_7__ {size_t argsoff; TYPE_1__** args; } ;
struct TYPE_6__ {char* bp; size_t len; } ;
typedef int SCR ;
typedef TYPE_2__ EX_PRIVATE ;
typedef TYPE_3__ EXCMD ;
typedef int CHAR_T ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (char*,int *,size_t) ;
 int FUNC_2 (int *,size_t) ;

int
FUNC_3(SCR *VAR_0, EXCMD *VAR_1, CHAR_T *VAR_2, size_t VAR_3)
{
 EX_PRIVATE *VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_3);
 FUNC_1(VAR_4->args[VAR_4->argsoff]->bp, VAR_2, VAR_3);
 VAR_4->args[VAR_4->argsoff]->bp[VAR_3] = '\0';
 VAR_4->args[VAR_4->argsoff]->len = VAR_3;
 ++VAR_4->argsoff;
 VAR_1->argv = VAR_4->args;
 VAR_1->argc = VAR_4->argsoff;
 return (0);
}
