
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int node_num; int spinlock; int live_nodes_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_ctxt*,int) ;
 int FUNC_1 (unsigned long*,int,int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct dlm_ctxt *VAR_3,
      unsigned long *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = 0;
 VAR_6 = -1;
 while ((VAR_6 = FUNC_1(VAR_4, VAR_2,
         VAR_6 + 1)) < VAR_2) {
  if (VAR_6 == VAR_3->node_num)
   continue;

  do {



   VAR_5 = FUNC_0(VAR_3, VAR_6);

   FUNC_4(&VAR_3->spinlock);
   VAR_7 = FUNC_6(VAR_6, VAR_3->live_nodes_map);
   FUNC_5(&VAR_3->spinlock);

   if (VAR_5) {
    FUNC_2(VAR_1, "Error return %d asserting "
         "join on node %d\n", VAR_5, VAR_6);


    if (VAR_7)
     FUNC_3(VAR_0);
   }
  } while (VAR_5 && VAR_7);
 }
}
