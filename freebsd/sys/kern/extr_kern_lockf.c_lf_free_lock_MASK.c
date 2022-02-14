
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx {int dummy; } ;
struct lockf_entry {scalar_t__ lf_refs; size_t lo_hash; scalar_t__ lo_refs; int lf_flags; int * lf_vnode; scalar_t__ lo_vertex; int lf_inedges; int lf_outedges; struct lockf_entry* lf_owner; } ;
struct lock_owner {scalar_t__ lf_refs; size_t lo_hash; scalar_t__ lo_refs; int lf_flags; int * lf_vnode; scalar_t__ lo_vertex; int lf_inedges; int lf_outedges; struct lock_owner* lf_owner; } ;
struct TYPE_2__ {struct sx lock; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lockf_entry*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct lockf_entry*,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 struct sx VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,struct lockf_entry*) ;
 int FUNC_6 (struct sx*) ;
 int FUNC_7 (struct sx*) ;
 int FUNC_8 (struct sx*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct lockf_entry *VAR_7)
{
 struct sx *VAR_8;

 FUNC_0(VAR_7->lf_refs > 0, ("lockf_entry negative ref count %p", VAR_7));
 if (--VAR_7->lf_refs > 0)
  return (0);





 struct lock_owner *VAR_9 = VAR_7->lf_owner;
 if (VAR_9) {
  FUNC_0(FUNC_1(&VAR_7->lf_outedges),
      ("freeing lock with dependencies"));
  FUNC_0(FUNC_1(&VAR_7->lf_inedges),
      ("freeing lock with dependants"));
  VAR_8 = &VAR_2[VAR_9->lo_hash].lock;
  FUNC_7(VAR_8);
  FUNC_0(VAR_9->lo_refs > 0, ("lock owner refcount"));
  VAR_9->lo_refs--;
  if (VAR_9->lo_refs == 0) {





   if (VAR_9->lo_vertex) {
    FUNC_7(&VAR_4);
    FUNC_4(&VAR_3,
        VAR_9->lo_vertex);
    FUNC_8(&VAR_4);
   }
   FUNC_2(VAR_9, VAR_5);
   FUNC_3(VAR_9, VAR_1);




  }
  FUNC_6(VAR_8);
 }
 if ((VAR_7->lf_flags & VAR_0) && VAR_7->lf_vnode) {
  FUNC_9(VAR_7->lf_vnode);
  VAR_7->lf_vnode = ((void*)0);
 }




 FUNC_3(VAR_7, VAR_1);
 return (1);
}
