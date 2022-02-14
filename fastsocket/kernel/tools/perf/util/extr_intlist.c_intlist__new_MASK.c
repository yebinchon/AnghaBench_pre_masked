
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_delete; int node_new; int node_cmp; } ;
struct intlist {TYPE_1__ rblist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intlist* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

struct intlist *FUNC_2(void)
{
 struct intlist *VAR_3 = FUNC_0(sizeof(*VAR_3));

 if (VAR_3 != ((void*)0)) {
  FUNC_1(&VAR_3->rblist);
  VAR_3->rblist.node_cmp = VAR_0;
  VAR_3->rblist.node_new = VAR_2;
  VAR_3->rblist.node_delete = VAR_1;
 }

 return VAR_3;
}
