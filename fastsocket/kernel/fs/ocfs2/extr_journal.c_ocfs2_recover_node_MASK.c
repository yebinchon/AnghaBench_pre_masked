
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int node_num; int journal; } ;
struct ocfs2_dinode {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_super*,int,struct ocfs2_dinode**) ;
 int FUNC_6 (struct ocfs2_super*,int,struct ocfs2_dinode**) ;
 int FUNC_7 (struct ocfs2_super*,int) ;
 int FUNC_8 (int ,int,struct ocfs2_dinode*,struct ocfs2_dinode*,int *) ;
 int FUNC_9 (struct ocfs2_super*,int,int) ;

__attribute__((used)) static int FUNC_10(struct ocfs2_super *VAR_1,
         int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 struct ocfs2_dinode *VAR_5 = ((void*)0);
 struct ocfs2_dinode *VAR_6 = ((void*)0);

 FUNC_2("(node_num=%d, slot_num=%d, osb->node_num = %d)\n",
     VAR_2, VAR_3, VAR_1->node_num);



 FUNC_0(VAR_1->node_num == VAR_2);

 VAR_4 = FUNC_9(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0) {
  if (VAR_4 == -VAR_0) {
   FUNC_1(0, "Skipping recovery for slot %u (node %u) "
        "as another node has recovered it\n", VAR_3,
        VAR_2);
   VAR_4 = 0;
   goto done;
  }
  FUNC_3(VAR_4);
  goto done;
 }


 VAR_4 = FUNC_5(VAR_1, VAR_3, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_3(VAR_4);
  goto done;
 }




 VAR_4 = FUNC_6(VAR_1, VAR_3, &VAR_6);
 if (VAR_4 < 0)
  FUNC_3(VAR_4);



 VAR_4 = FUNC_7(VAR_1, VAR_3);
 if (VAR_4 < 0)
  FUNC_3(VAR_4);


 FUNC_8(VAR_1->journal, VAR_3, VAR_5,
     VAR_6, ((void*)0));

 VAR_4 = 0;
done:

 FUNC_4(VAR_4);
 return VAR_4;
}
