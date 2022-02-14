
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_exit_domain {int node_idx; } ;
struct dlm_ctxt {int key; int node_num; int name; } ;
typedef int leave_msg ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_exit_domain*,int ,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,int ,struct dlm_exit_domain*,int,unsigned int,int *) ;

__attribute__((used)) static int FUNC_3(struct dlm_ctxt *VAR_1,
        unsigned int VAR_2)
{
 int VAR_3;
 struct dlm_exit_domain VAR_4;

 FUNC_1(0, "Asking node %u if we can leave the domain %s me = %u\n",
    VAR_2, VAR_1->name, VAR_1->node_num);

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.node_idx = VAR_1->node_num;

 VAR_3 = FUNC_2(VAR_0, VAR_1->key,
        &VAR_4, sizeof(VAR_4), VAR_2,
        ((void*)0));

 FUNC_1(0, "status return %d from o2net_send_message\n", VAR_3);

 return VAR_3;
}
