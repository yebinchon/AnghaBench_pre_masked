
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct att_counter_set {int flags_list; int mode_list; int gid_list; int uid_list; } ;
struct mtree_writer {struct att_counter_set acs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct mtree_writer *VAR_0)
{
 struct att_counter_set *VAR_1 = &VAR_0->acs;

 FUNC_0(&VAR_1->uid_list);
 FUNC_0(&VAR_1->gid_list);
 FUNC_0(&VAR_1->mode_list);
 FUNC_0(&VAR_1->flags_list);
}
