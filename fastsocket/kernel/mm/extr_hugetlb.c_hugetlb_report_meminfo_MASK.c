
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hstate {int surplus_huge_pages; int resv_huge_pages; int free_huge_pages; int nr_huge_pages; } ;


 int VAR_0 ;
 struct hstate VAR_1 ;
 int FUNC_0 (struct hstate*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ,unsigned long) ;

void FUNC_2(struct seq_file *VAR_2)
{
 struct hstate *VAR_3 = &VAR_1;
 FUNC_1(VAR_2,
   "HugePages_Total:   %5lu\n"
   "HugePages_Free:    %5lu\n"
   "HugePages_Rsvd:    %5lu\n"
   "HugePages_Surp:    %5lu\n"
   "Hugepagesize:   %8lu kB\n",
   VAR_3->nr_huge_pages,
   VAR_3->free_huge_pages,
   VAR_3->resv_huge_pages,
   VAR_3->surplus_huge_pages,
   1UL << (FUNC_0(VAR_3) + VAR_0 - 10));
}
