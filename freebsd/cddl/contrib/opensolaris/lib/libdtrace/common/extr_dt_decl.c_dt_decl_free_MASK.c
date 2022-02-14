
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dd_node; struct TYPE_4__* dd_name; struct TYPE_4__* dd_next; } ;
typedef TYPE_1__ dt_decl_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(dt_decl_t *VAR_0)
{
 dt_decl_t *VAR_1;

 for (; VAR_0 != ((void*)0); VAR_0 = VAR_1) {
  VAR_1 = VAR_0->dd_next;
  FUNC_1(VAR_0->dd_name);
  FUNC_0(&VAR_0->dd_node);
  FUNC_1(VAR_0);
 }
}
