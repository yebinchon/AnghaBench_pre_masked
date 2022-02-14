
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int dt_node_t ;
struct TYPE_7__ {scalar_t__ dd_kind; int dd_attr; struct TYPE_7__* dd_next; int * dd_node; } ;
typedef TYPE_1__ dt_decl_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *,char*,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

dt_decl_t *
FUNC_3(dt_decl_t *VAR_6, dt_node_t *VAR_7)
{
 dt_decl_t *VAR_8 = FUNC_0(VAR_0, ((void*)0));

 VAR_8->dd_node = VAR_7;

 (void) FUNC_1(VAR_7, VAR_7, "function",
     VAR_4 | VAR_5 | VAR_3);

 if (VAR_6 == ((void*)0) || VAR_6->dd_kind != VAR_1)
  return (FUNC_2(VAR_8));

 while (VAR_6->dd_next != ((void*)0) && !(VAR_6->dd_next->dd_attr & VAR_2))
  VAR_6 = VAR_6->dd_next;

 if (VAR_6->dd_next == ((void*)0))
  return (FUNC_2(VAR_8));

 VAR_8->dd_next = VAR_6->dd_next;
 VAR_6->dd_next = VAR_8;

 return (VAR_6);
}
