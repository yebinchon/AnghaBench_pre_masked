
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_join_ctxt {int live_map; } ;
struct dlm_ctxt {int spinlock; int live_nodes_map; } ;
typedef enum dlm_query_join_response_code { ____Placeholder_dlm_query_join_response_code } dlm_query_join_response_code ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dlm_ctxt *VAR_1,
       struct domain_join_ctxt *VAR_2,
       enum dlm_query_join_response_code VAR_3)
{
 int VAR_4;

 if (VAR_3 == VAR_0) {
  FUNC_1(0, "Latest response of disallow -- should restart\n");
  return 1;
 }

 FUNC_2(&VAR_1->spinlock);


 VAR_4 = FUNC_0(VAR_2->live_map, VAR_1->live_nodes_map,
       sizeof(VAR_1->live_nodes_map));
 FUNC_3(&VAR_1->spinlock);

 if (VAR_4)
  FUNC_1(0, "Node maps changed -- should restart\n");

 return VAR_4;
}
