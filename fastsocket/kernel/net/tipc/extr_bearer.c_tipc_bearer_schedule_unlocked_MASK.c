
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {int link_list; } ;
struct bearer {int cong_links; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct bearer *VAR_0, struct link *VAR_1)
{
 FUNC_0(&VAR_1->link_list, &VAR_0->cong_links);
}
