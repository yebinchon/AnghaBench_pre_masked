
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_mst_node {int flags; } ;
struct ubifs_info {int mst_node_alsz; int ubi; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,struct ubifs_mst_node*,int,int ) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_mst_node*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_4,
    struct ubifs_mst_node *VAR_5)
{
 int VAR_6 = 0, VAR_7 = VAR_0, VAR_8 = VAR_4->mst_node_alsz;
 __le32 VAR_9;

 FUNC_1("recovery");

 VAR_9 = VAR_5->flags;
 VAR_5->flags |= FUNC_0(VAR_2);

 FUNC_3(VAR_4, VAR_5, VAR_1, 1);
 VAR_6 = FUNC_2(VAR_4->ubi, VAR_7, VAR_5, VAR_8, VAR_3);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_2(VAR_4->ubi, VAR_7 + 1, VAR_5, VAR_8, VAR_3);
 if (VAR_6)
  goto out;
out:
 VAR_5->flags = VAR_9;
 return VAR_6;
}
