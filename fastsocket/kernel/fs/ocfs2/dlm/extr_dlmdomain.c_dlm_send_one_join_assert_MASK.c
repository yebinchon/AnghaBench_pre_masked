
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int name; int node_num; } ;
struct dlm_assert_joined {int name_len; int domain; int node_idx; } ;
typedef int assert_msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct dlm_assert_joined*,int ,int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,struct dlm_assert_joined*,int,unsigned int,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct dlm_ctxt *VAR_2,
        unsigned int VAR_3)
{
 int VAR_4;
 struct dlm_assert_joined VAR_5;

 FUNC_2(0, "Sending join assert to node %u\n", VAR_3);

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.node_idx = VAR_2->node_num;
 VAR_5.name_len = FUNC_5(VAR_2->name);
 FUNC_0(VAR_5.domain, VAR_2->name, VAR_5.name_len);

 VAR_4 = FUNC_4(VAR_0, VAR_1,
        &VAR_5, sizeof(VAR_5), VAR_3,
        ((void*)0));
 if (VAR_4 < 0)
  FUNC_3(VAR_4);

 return VAR_4;
}
