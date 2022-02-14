
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_join_ctxt {int yes_resp_map; int live_map; } ;
struct dlm_ctxt {int node_num; int spinlock; int num_joins; int dlm_state; int domain_map; int live_nodes_map; } ;
typedef enum dlm_query_join_response_code { ____Placeholder_dlm_query_join_response_code } dlm_query_join_response_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dlm_ctxt*) ;
 int FUNC_1 (struct dlm_ctxt*,int) ;
 int VAR_8 ;
 int FUNC_2 (struct dlm_ctxt*,int,int*) ;
 int FUNC_3 (struct dlm_ctxt*,int ) ;
 int FUNC_4 (struct dlm_ctxt*,int ,int) ;
 scalar_t__ FUNC_5 (struct dlm_ctxt*,struct domain_join_ctxt*,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct domain_join_ctxt*) ;
 struct domain_join_ctxt* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (char*,struct dlm_ctxt*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct dlm_ctxt *VAR_9)
{
 int VAR_10 = 0, VAR_11, VAR_12;
 struct domain_join_ctxt *VAR_13;
 enum dlm_query_join_response_code VAR_14 = VAR_5;

 FUNC_11("%p", VAR_9);

 VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_4);
 if (!VAR_13) {
  VAR_10 = -VAR_3;
  FUNC_12(VAR_10);
  goto bail;
 }




 FUNC_13(VAR_9->live_nodes_map, sizeof(VAR_9->live_nodes_map));

 FUNC_15(&VAR_9->spinlock);
 FUNC_9(VAR_13->live_map, VAR_9->live_nodes_map, sizeof(VAR_13->live_map));

 FUNC_1(VAR_9, VAR_9->node_num);

 FUNC_16(&VAR_9->spinlock);

 VAR_12 = -1;
 while ((VAR_12 = FUNC_6(VAR_13->live_map, VAR_7,
         VAR_12 + 1)) < VAR_7) {
  if (VAR_12 == VAR_9->node_num)
   continue;

  VAR_10 = FUNC_2(VAR_9, VAR_12, &VAR_14);
  if (VAR_10 < 0) {
   FUNC_12(VAR_10);
   goto bail;
  }



  if (VAR_14 == VAR_6)
   FUNC_14(VAR_12, VAR_13->yes_resp_map);

  if (FUNC_5(VAR_9, VAR_13, VAR_14)) {
   VAR_10 = -VAR_2;
   goto bail;
  }
 }

 FUNC_10(0, "Yay, done querying nodes!\n");





 FUNC_15(&VAR_9->spinlock);
 FUNC_9(VAR_9->domain_map, VAR_13->yes_resp_map,
        sizeof(VAR_13->yes_resp_map));
 FUNC_14(VAR_9->node_num, VAR_9->domain_map);
 FUNC_16(&VAR_9->spinlock);

 FUNC_3(VAR_9, VAR_13->yes_resp_map);





 FUNC_15(&VAR_8);
 VAR_9->dlm_state = VAR_0;
 VAR_9->num_joins++;
 FUNC_16(&VAR_8);

bail:
 FUNC_15(&VAR_9->spinlock);
 FUNC_1(VAR_9, VAR_1);
 if (!VAR_10)
  FUNC_0(VAR_9);
 FUNC_16(&VAR_9->spinlock);

 if (VAR_13) {

  if (VAR_10 < 0) {
   VAR_11 = FUNC_4(VAR_9,
       VAR_13->yes_resp_map,
       sizeof(VAR_13->yes_resp_map));
   if (VAR_11 < 0)
    FUNC_12(VAR_11);
  }
  FUNC_7(VAR_13);
 }

 FUNC_10(0, "returning %d\n", VAR_10);
 return VAR_10;
}
