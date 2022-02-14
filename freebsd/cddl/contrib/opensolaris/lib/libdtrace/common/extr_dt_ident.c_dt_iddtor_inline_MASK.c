
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* din_argv; int * din_hash; int din_list; } ;
typedef TYPE_1__ dt_idnode_t ;
struct TYPE_8__ {scalar_t__ di_kind; TYPE_1__* di_iarg; } ;
typedef TYPE_2__ dt_ident_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(dt_ident_t *VAR_1)
{
 dt_idnode_t *VAR_2 = VAR_1->di_iarg;

 if (VAR_2 != ((void*)0)) {
  FUNC_3(&VAR_2->din_list);

  if (VAR_2->din_hash != ((void*)0))
   FUNC_2(VAR_2->din_hash);

  FUNC_4(VAR_2->din_argv);
  FUNC_4(VAR_2);
 }

 if (VAR_1->di_kind == VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
