
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_sb_node {int dummy; } ;
struct ubifs_info {int min_io_size; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ubifs_info*,int ,struct ubifs_sb_node*,int,int ) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_sb_node*,int ,int) ;

int FUNC_3(struct ubifs_info *VAR_3, struct ubifs_sb_node *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_1, VAR_3->min_io_size);

 FUNC_2(VAR_3, VAR_4, VAR_1, 1);
 return FUNC_1(VAR_3, VAR_0, VAR_4, VAR_5, VAR_2);
}
