
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int leb_size; unsigned long long cmt_no; int ubi; } ;
struct TYPE_2__ {scalar_t__ node_type; int sqnum; } ;
struct ubifs_cs_node {TYPE_1__ ch; int cmt_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned long long,...) ;
 int FUNC_2 (struct ubifs_cs_node*) ;
 struct ubifs_cs_node* FUNC_3 (int,int ) ;
 unsigned long long FUNC_4 (int ) ;
 int FUNC_5 (int ,int,void*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_cs_node*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_8(struct ubifs_info *VAR_7, int VAR_8, int VAR_9,
   unsigned long long *VAR_10)
{
 struct ubifs_cs_node *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;

 FUNC_1("at %d:%d", VAR_8, VAR_9);
 VAR_11 = FUNC_3(VAR_6, VAR_3);
 if (!VAR_11)
  return -VAR_2;
 if (VAR_7->leb_size - VAR_9 < VAR_6)
  goto out_err;
 VAR_12 = FUNC_5(VAR_7->ubi, VAR_8, (void *)VAR_11, VAR_9, VAR_6);
 if (VAR_12 && VAR_12 != -VAR_0)
  goto out_free;
 VAR_13 = FUNC_7(VAR_7, VAR_11, VAR_6, VAR_8, VAR_9, 0);
 if (VAR_13 != VAR_4) {
  FUNC_0("Not a valid node");
  goto out_err;
 }
 if (VAR_11->ch.node_type != VAR_5) {
  FUNC_0("Node a CS node, type is %d", VAR_11->ch.node_type);
  goto out_err;
 }
 if (FUNC_4(VAR_11->cmt_no) != VAR_7->cmt_no) {
  FUNC_0("CS node cmt_no %llu != current cmt_no %llu",
   (unsigned long long)FUNC_4(VAR_11->cmt_no),
   VAR_7->cmt_no);
  goto out_err;
 }
 *VAR_10 = FUNC_4(VAR_11->ch.sqnum);
 FUNC_1("commit start sqnum %llu", *VAR_10);
 FUNC_2(VAR_11);
 return 0;

out_err:
 VAR_12 = -VAR_1;
out_free:
 FUNC_6("failed to get CS sqnum");
 FUNC_2(VAR_11);
 return VAR_12;
}
