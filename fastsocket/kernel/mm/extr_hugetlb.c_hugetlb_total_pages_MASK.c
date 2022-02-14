
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hstate {unsigned long nr_huge_pages; } ;


 struct hstate VAR_0 ;
 unsigned long FUNC_0 (struct hstate*) ;

unsigned long FUNC_1(void)
{
 struct hstate *VAR_1 = &VAR_0;
 return VAR_1->nr_huge_pages * FUNC_0(VAR_1);
}
