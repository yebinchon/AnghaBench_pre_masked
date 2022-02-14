
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_detail {int flush_time; int nextcheck; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(struct cache_detail *VAR_1)
{
 VAR_1->flush_time = VAR_0;
 VAR_1->nextcheck = FUNC_1();
 FUNC_0();
 VAR_1->flush_time = 1;
}
