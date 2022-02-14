
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hstate {int* nr_huge_pages_node; int* free_huge_pages_node; int* surplus_huge_pages_node; } ;


 struct hstate VAR_0 ;
 int FUNC_0 (char*,char*,int,int,int,int,int,int) ;

int FUNC_1(int VAR_1, char *VAR_2)
{
 struct hstate *VAR_3 = &VAR_0;
 return FUNC_0(VAR_2,
  "Node %d HugePages_Total: %5u\n"
  "Node %d HugePages_Free:  %5u\n"
  "Node %d HugePages_Surp:  %5u\n",
  VAR_1, VAR_3->nr_huge_pages_node[VAR_1],
  VAR_1, VAR_3->free_huge_pages_node[VAR_1],
  VAR_1, VAR_3->surplus_huge_pages_node[VAR_1]);
}
