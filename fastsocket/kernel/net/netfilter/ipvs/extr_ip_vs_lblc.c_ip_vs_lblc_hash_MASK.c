
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_lblc_table {int entries; int * bucket; } ;
struct ip_vs_lblc_entry {int list; int addr; int af; } ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct ip_vs_lblc_table *VAR_0, struct ip_vs_lblc_entry *VAR_1)
{
 unsigned VAR_2 = FUNC_1(VAR_1->af, &VAR_1->addr);

 FUNC_2(&VAR_1->list, &VAR_0->bucket[VAR_2]);
 FUNC_0(&VAR_0->entries);
}
