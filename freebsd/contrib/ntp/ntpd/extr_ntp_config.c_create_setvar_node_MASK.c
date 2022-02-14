
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* var; char* val; int isdefault; } ;
typedef TYPE_1__ setvar_node ;


 TYPE_1__* FUNC_0 (int) ;
 char* FUNC_1 (char*,char) ;

setvar_node *
FUNC_2(
 char * VAR_0,
 char * VAR_1,
 int VAR_2
 )
{
 setvar_node * VAR_3;
 char * VAR_4;


 VAR_4 = FUNC_1(VAR_0, '=');
 if (((void*)0) != VAR_4)
  *VAR_4 = '\0';


 VAR_3 = FUNC_0(sizeof(*VAR_3));
 VAR_3->var = VAR_0;
 VAR_3->val = VAR_1;
 VAR_3->isdefault = VAR_2;

 return VAR_3;
}
