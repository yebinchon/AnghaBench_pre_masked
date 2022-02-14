
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int max_idx_node_sz; } ;
struct ubifs_budget_req {int new_ino; int new_page; int new_dent; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct ubifs_info *VAR_1,
      const struct ubifs_budget_req *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2->new_ino + (VAR_2->new_page << VAR_0) +
   VAR_2->new_dent;
 return VAR_3 * VAR_1->max_idx_node_sz;
}
