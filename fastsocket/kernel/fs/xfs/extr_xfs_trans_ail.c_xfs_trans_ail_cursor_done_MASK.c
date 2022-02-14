
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ail_cursor {struct xfs_ail_cursor* next; int * item; } ;
struct xfs_ail {struct xfs_ail_cursor xa_cursors; } ;


 int FUNC_0 (struct xfs_ail_cursor*) ;

void
FUNC_1(
 struct xfs_ail *VAR_0,
 struct xfs_ail_cursor *VAR_1)
{
 struct xfs_ail_cursor *VAR_2 = ((void*)0);
 struct xfs_ail_cursor *VAR_3;

 VAR_1->item = ((void*)0);
 if (VAR_1 == &VAR_0->xa_cursors)
  return;
 VAR_2 = &VAR_0->xa_cursors;
 for (VAR_3 = VAR_2->next; VAR_3; VAR_2 = VAR_3, VAR_3 = VAR_2->next) {
  if (VAR_3 == VAR_1) {
   VAR_2->next = VAR_3->next;
   break;
  }
 }
 FUNC_0(VAR_3);
}
