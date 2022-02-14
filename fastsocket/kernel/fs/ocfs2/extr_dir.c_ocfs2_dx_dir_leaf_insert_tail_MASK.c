
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int de_num_used; struct ocfs2_dx_entry* de_entries; } ;
struct ocfs2_dx_leaf {TYPE_1__ dl_list; } ;
struct ocfs2_dx_entry {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_dx_leaf *VAR_0,
       struct ocfs2_dx_entry *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->dl_list.de_num_used);
 VAR_0->dl_list.de_entries[VAR_2] = *VAR_1;

 FUNC_0(&VAR_0->dl_list.de_num_used, 1);
}
