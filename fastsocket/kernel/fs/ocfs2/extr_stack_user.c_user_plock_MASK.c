
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_cluster_connection {int cc_lockspace; } ;
struct file_lock {scalar_t__ fl_type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct file*,struct file_lock*) ;
 int FUNC_2 (int ,int ,struct file*,int,struct file_lock*) ;
 int FUNC_3 (int ,int ,struct file*,struct file_lock*) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_cluster_connection *VAR_3,
        u64 VAR_4,
        struct file *VAR_5,
        int VAR_6,
        struct file_lock *VAR_7)
{
 if (VAR_6 == VAR_0) {
  VAR_6 = VAR_1;
  VAR_7->fl_type = VAR_2;
 }

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_3->cc_lockspace, VAR_4, VAR_5, VAR_7);
 else if (VAR_7->fl_type == VAR_2)
  return FUNC_3(VAR_3->cc_lockspace, VAR_4, VAR_5, VAR_7);
 else
  return FUNC_2(VAR_3->cc_lockspace, VAR_4, VAR_5, VAR_6, VAR_7);
}
