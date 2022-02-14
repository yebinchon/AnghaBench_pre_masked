
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fail_point_setting {int fp_entry_queue; int fs_parent; } ;
struct fail_point_entry {int fe_count; int fe_pid; int fe_prob; int fe_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct fail_point_entry*,int ) ;
 int VAR_5 ;
 struct fail_point_entry* FUNC_1 (int,int) ;

__attribute__((used)) static struct fail_point_entry *
FUNC_2(struct fail_point_setting *VAR_6)
{
 struct fail_point_entry *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct fail_point_entry),
         VAR_1 | VAR_2);
 VAR_7->fe_parent = VAR_6->fs_parent;
 VAR_7->fe_prob = VAR_4;
 VAR_7->fe_pid = VAR_3;
 VAR_7->fe_count = VAR_0;
 FUNC_0(&VAR_6->fp_entry_queue, VAR_7,
         VAR_5);

 return (VAR_7);
}
