
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int recalculate; int new_page; } ;


 int FUNC_0 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_0)
{
 struct ubifs_budget_req VAR_1 = { .recalculate = 1, .new_page = 1 };

 FUNC_0(VAR_0, &VAR_1);
}
