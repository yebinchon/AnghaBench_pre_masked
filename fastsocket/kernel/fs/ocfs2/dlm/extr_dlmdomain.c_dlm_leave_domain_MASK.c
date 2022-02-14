
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int node_num; int spinlock; int domain_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct dlm_ctxt*,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct dlm_ctxt *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;






 FUNC_5(&VAR_5->spinlock);

 FUNC_0(VAR_5->node_num, VAR_5->domain_map);
 while ((VAR_6 = FUNC_2(VAR_5->domain_map, VAR_4,
         0)) < VAR_4) {






  FUNC_6(&VAR_5->spinlock);

  VAR_7 = 1;

  VAR_8 = FUNC_1(VAR_5, VAR_6);
  if (VAR_8 < 0 &&
      VAR_8 != -VAR_1 &&
      VAR_8 != -VAR_2) {
   FUNC_3(VAR_3, "Error %d sending domain exit message "
        "to node %d\n", VAR_8, VAR_6);




   FUNC_4(VAR_0);
   VAR_7 = 0;
  }

  FUNC_5(&VAR_5->spinlock);


  if (VAR_7)
   FUNC_0(VAR_6, VAR_5->domain_map);
 }
 FUNC_6(&VAR_5->spinlock);
}
