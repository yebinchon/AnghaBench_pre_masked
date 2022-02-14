
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int pages_skipped; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;

int FUNC_1(struct writeback_control *VAR_0, struct page *VAR_1)
{
 VAR_0->pages_skipped++;
 return FUNC_0(VAR_1);
}
