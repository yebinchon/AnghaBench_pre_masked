
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int inode_budget; scalar_t__ dent_budget; scalar_t__ page_budget; } ;
struct ubifs_budget_req {scalar_t__ new_ino_d; scalar_t__ new_dent; scalar_t__ new_page; scalar_t__ new_ino; } ;



__attribute__((used)) static int FUNC_0(const struct ubifs_info *VAR_0,
       const struct ubifs_budget_req *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->new_ino ? VAR_0->inode_budget : 0;
 if (VAR_1->new_page)
  VAR_2 += VAR_0->page_budget;
 if (VAR_1->new_dent)
  VAR_2 += VAR_0->dent_budget;
 VAR_2 += VAR_1->new_ino_d;
 return VAR_2;
}
