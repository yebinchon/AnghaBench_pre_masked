
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry_list {int dummy; } ;
struct lockf_entry {scalar_t__ lf_start; scalar_t__ lf_end; int lf_refs; int lf_flags; int lf_inedges; int lf_outedges; int lf_vnode; int lf_owner; } ;
struct lockf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lockf*,struct lockf_entry*) ;
 struct lockf_entry* FUNC_2 (int ) ;
 int FUNC_3 (struct lockf*,struct lockf_entry*) ;
 int FUNC_4 (char*,struct lockf_entry*) ;
 int FUNC_5 (struct lockf*,struct lockf_entry*,scalar_t__,struct lockf_entry_list*) ;
 int FUNC_6 (struct lockf*,struct lockf_entry*,scalar_t__,struct lockf_entry_list*) ;
 int VAR_1 ;
 int FUNC_7 (struct lockf_entry*,struct lockf_entry*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct lockf *VAR_2, struct lockf_entry *VAR_3,
    struct lockf_entry *VAR_4, struct lockf_entry_list *VAR_5)
{
 struct lockf_entry *VAR_6;
 if (VAR_3->lf_start == VAR_4->lf_start) {
  FUNC_6(VAR_2, VAR_3, VAR_4->lf_end + 1, VAR_5);
  return;
 }
 if (VAR_3->lf_end == VAR_4->lf_end) {
  FUNC_5(VAR_2, VAR_3, VAR_4->lf_start - 1, VAR_5);
  return;
 }




 VAR_6 = FUNC_2(VAR_3->lf_owner);
 FUNC_7(VAR_6, VAR_3, sizeof *VAR_6);
 VAR_6->lf_refs = 1;
 if (VAR_6->lf_flags & VAR_0)
  FUNC_8(VAR_6->lf_vnode);
 VAR_6->lf_start = VAR_4->lf_end + 1;
 FUNC_0(&VAR_6->lf_outedges);
 FUNC_0(&VAR_6->lf_inedges);
 FUNC_1(VAR_2, VAR_6);

 FUNC_5(VAR_2, VAR_3, VAR_4->lf_start - 1, VAR_5);




 FUNC_3(VAR_2, VAR_6);
}
