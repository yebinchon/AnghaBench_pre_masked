
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sqnum; } ;
struct ubifs_mst_node {TYPE_2__ ch; int flags; } ;
struct ubifs_info {int mst_node_alsz; int leb_size; struct ubifs_mst_node* mst_node; scalar_t__ max_sqnum; struct ubifs_mst_node* rcvrd_mst_node; TYPE_1__* vfs_sb; } ;
struct TYPE_3__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ubifs_info*,struct ubifs_mst_node*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ubifs_info*,scalar_t__,void**,struct ubifs_mst_node**,void**) ;
 struct ubifs_mst_node* FUNC_4 (int const,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (void*,void*,int) ;
 int FUNC_8 (struct ubifs_mst_node*,struct ubifs_mst_node*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,scalar_t__) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_mst_node*) ;

int FUNC_13(struct ubifs_info *VAR_8)
{
 void *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 struct ubifs_mst_node *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15;
 const int VAR_16 = VAR_8->mst_node_alsz;
 int VAR_17, VAR_18, VAR_19;

 FUNC_2("recovery");

 VAR_17 = FUNC_3(VAR_8, VAR_5, &VAR_9, &VAR_13, &VAR_11);
 if (VAR_17)
  goto out_free;

 VAR_17 = FUNC_3(VAR_8, VAR_5 + 1, &VAR_10, &VAR_14, &VAR_12);
 if (VAR_17)
  goto out_free;

 if (VAR_13) {
  VAR_18 = (void *)VAR_13 - VAR_9;
  if ((FUNC_5(VAR_13->flags) & VAR_7) &&
      (VAR_18 == 0 && !VAR_11)) {




   FUNC_2("recovery recovery");
   VAR_15 = VAR_13;
  } else if (VAR_14) {
   VAR_19 = (void *)VAR_14 - VAR_10;
   if (VAR_18 == VAR_19) {

    if (FUNC_7((void *)VAR_13 + VAR_4,
        (void *)VAR_14 + VAR_4,
        VAR_6 - VAR_4))
     goto out_err;
    VAR_15 = VAR_13;
   } else if (VAR_19 + VAR_16 == VAR_18) {

    if (VAR_11)
     goto out_err;
    VAR_15 = VAR_13;
   } else if (VAR_18 == 0 && VAR_19 + VAR_16 >= VAR_8->leb_size) {

    if (VAR_11)
     goto out_err;
    VAR_15 = VAR_13;
   } else
    goto out_err;
  } else {





   if (VAR_18 != 0 || VAR_11)
    goto out_err;
   VAR_15 = VAR_13;
  }
 } else {
  if (!VAR_14)
   goto out_err;




  VAR_19 = (void *)VAR_14 - VAR_10;
  if (VAR_19 + VAR_16 + VAR_16 <= VAR_8->leb_size)
   goto out_err;
  VAR_15 = VAR_14;
 }

 FUNC_10("recovered master node from LEB %d",
    (VAR_15 == VAR_13 ? VAR_5 : VAR_5 + 1));

 FUNC_8(VAR_8->mst_node, VAR_15, VAR_6);

 if ((VAR_8->vfs_sb->s_flags & VAR_3)) {

  VAR_8->rcvrd_mst_node = FUNC_4(VAR_16, VAR_2);
  if (!VAR_8->rcvrd_mst_node) {
   VAR_17 = -VAR_1;
   goto out_free;
  }
  FUNC_8(VAR_8->rcvrd_mst_node, VAR_8->mst_node, VAR_6);
 } else {

  VAR_8->max_sqnum = FUNC_6(VAR_15->ch.sqnum) - 1;
  VAR_17 = FUNC_12(VAR_8, VAR_8->mst_node);
  if (VAR_17)
   goto out_free;
 }

 FUNC_11(VAR_10);
 FUNC_11(VAR_9);

 return 0;

out_err:
 VAR_17 = -VAR_0;
out_free:
 FUNC_9("failed to recover master node");
 if (VAR_13) {
  FUNC_1("dumping first master node");
  FUNC_0(VAR_8, VAR_13);
 }
 if (VAR_14) {
  FUNC_1("dumping second master node");
  FUNC_0(VAR_8, VAR_14);
 }
 FUNC_11(VAR_10);
 FUNC_11(VAR_9);
 return VAR_17;
}
