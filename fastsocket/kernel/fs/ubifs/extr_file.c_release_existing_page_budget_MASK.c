
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int page_budget; } ;
struct ubifs_budget_req {int dd_growth; } ;


 int FUNC_0 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_0)
{
 struct ubifs_budget_req VAR_1 = { .dd_growth = VAR_0->page_budget};

 FUNC_0(VAR_0, &VAR_1);
}
