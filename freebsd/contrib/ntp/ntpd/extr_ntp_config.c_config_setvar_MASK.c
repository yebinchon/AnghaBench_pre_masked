
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* var; char* val; scalar_t__ isdefault; struct TYPE_5__* link; } ;
typedef TYPE_1__ setvar_node ;
struct TYPE_6__ {int setvar; } ;
typedef TYPE_2__ config_tree ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 char* FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,size_t,int ) ;
 int FUNC_4 (char*,size_t,char*,char*,char*) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(
 config_tree *VAR_1
 )
{
 setvar_node *VAR_2;
 size_t VAR_3, VAR_4, VAR_5;
 char * VAR_6;

 VAR_6 = ((void*)0);
 VAR_2 = FUNC_0(VAR_1->setvar);
 for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->link) {
  VAR_3 = FUNC_5(VAR_2->var);
  VAR_4 = FUNC_5(VAR_2->val);
  VAR_5 = VAR_3 + VAR_4 + 1 + 1;
  VAR_6 = FUNC_1(VAR_6, VAR_5);
  FUNC_4(VAR_6, VAR_5, "%s=%s", VAR_2->var,
    VAR_2->val);
  FUNC_3(VAR_6, VAR_5, (VAR_2->isdefault)
      ? VAR_0
      : 0);
 }
 if (VAR_6 != ((void*)0))
  FUNC_2(VAR_6);
}
