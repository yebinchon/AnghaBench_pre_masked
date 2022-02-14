
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int mst_offs; int mst_node_alsz; int leb_size; TYPE_1__* mst_node; int highest_inum; scalar_t__ ro_media; } ;
struct TYPE_2__ {int highest_inum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ubifs_info*,int) ;
 int FUNC_2 (struct ubifs_info*,TYPE_1__*,int,int,int,int ) ;

int FUNC_3(struct ubifs_info *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;

 if (VAR_4->ro_media)
  return -VAR_0;

 VAR_6 = VAR_1;
 VAR_7 = VAR_4->mst_offs + VAR_4->mst_node_alsz;
 VAR_8 = VAR_2;

 if (VAR_7 + VAR_2 > VAR_4->leb_size) {
  VAR_5 = FUNC_1(VAR_4, VAR_6);
  if (VAR_5)
   return VAR_5;
  VAR_7 = 0;
 }

 VAR_4->mst_offs = VAR_7;
 VAR_4->mst_node->highest_inum = FUNC_0(VAR_4->highest_inum);

 VAR_5 = FUNC_2(VAR_4, VAR_4->mst_node, VAR_8, VAR_6, VAR_7, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_6 += 1;

 if (VAR_7 == 0) {
  VAR_5 = FUNC_1(VAR_4, VAR_6);
  if (VAR_5)
   return VAR_5;
 }
 VAR_5 = FUNC_2(VAR_4, VAR_4->mst_node, VAR_8, VAR_6, VAR_7, VAR_3);

 return VAR_5;
}
