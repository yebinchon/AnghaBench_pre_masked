
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int leb_size; int ihead_offs; int max_idx_node_sz; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct ubifs_info *VAR_0, int VAR_1)
{
 int VAR_2;


 VAR_1 -= (VAR_0->leb_size - VAR_0->ihead_offs) / VAR_0->max_idx_node_sz;
 if (VAR_1 < 0)
  VAR_1 = 0;
 VAR_2 = VAR_0->leb_size / VAR_0->max_idx_node_sz;
 return FUNC_0(VAR_1, VAR_2);
}
