
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_cluster_connection {int cc_recovery_data; int (* cc_recovery_handler ) (int,int ) ;int cc_name; int cc_namelen; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_1, void *VAR_2)
{
 struct ocfs2_cluster_connection *VAR_3 = VAR_2;

 FUNC_0(VAR_0, "o2dlm has evicted node %d from group %.*s\n",
      VAR_1, VAR_3->cc_namelen, VAR_3->cc_name);

 VAR_3->cc_recovery_handler(VAR_1, VAR_3->cc_recovery_data);
}
