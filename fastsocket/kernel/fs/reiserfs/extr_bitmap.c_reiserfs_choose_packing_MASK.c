
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_sb; } ;
typedef int __le32 ;
struct TYPE_2__ {int k_objectid; int k_dir_id; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__le32 FUNC_4(struct inode * VAR_1)
{
 __le32 VAR_2;
 if (FUNC_1(VAR_0, VAR_1->i_sb)) {
  u32 VAR_3 = FUNC_3(FUNC_0(VAR_1)->k_dir_id);




  if (VAR_3 == 1 || FUNC_2(VAR_1->i_sb, VAR_3))
   VAR_2 = FUNC_0(VAR_1)->k_objectid;
  else
   VAR_2 = FUNC_0(VAR_1)->k_dir_id;
 } else
  VAR_2 = FUNC_0(VAR_1)->k_objectid;
 return VAR_2;
}
