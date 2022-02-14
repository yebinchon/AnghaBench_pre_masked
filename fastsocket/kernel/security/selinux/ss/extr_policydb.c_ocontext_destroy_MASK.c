
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ocontext* name; } ;
struct ocontext {TYPE_1__ u; int * context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ocontext*) ;

__attribute__((used)) static void FUNC_2(struct ocontext *VAR_4, int VAR_5)
{
 if (!VAR_4)
  return;

 FUNC_0(&VAR_4->context[0]);
 FUNC_0(&VAR_4->context[1]);
 if (VAR_5 == VAR_2 || VAR_5 == VAR_0 ||
     VAR_5 == VAR_3 || VAR_5 == VAR_1)
  FUNC_1(VAR_4->u.name);
 FUNC_1(VAR_4);
}
