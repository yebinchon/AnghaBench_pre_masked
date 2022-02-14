
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_sb_node {int dummy; } ;
struct ubifs_info {int min_io_size; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct ubifs_sb_node* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ubifs_sb_node*) ;
 struct ubifs_sb_node* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_sb_node*,int ,int ,int ,int ) ;

struct ubifs_sb_node *FUNC_5(struct ubifs_info *VAR_5)
{
 struct ubifs_sb_node *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(FUNC_0(VAR_4, VAR_5->min_io_size), VAR_1);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_3, VAR_4,
         VAR_2, 0);
 if (VAR_7) {
  FUNC_2(VAR_6);
  return FUNC_1(VAR_7);
 }

 return VAR_6;
}
