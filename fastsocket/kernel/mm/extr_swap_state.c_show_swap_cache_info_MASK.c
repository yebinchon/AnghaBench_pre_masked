
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int find_total; int find_success; int del_total; int add_total; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_1(void)
{
 FUNC_0("%lu pages in swap cache\n", VAR_4);
 FUNC_0("Swap cache stats: add %lu, delete %lu, find %lu/%lu\n",
  VAR_2.add_total, VAR_2.del_total,
  VAR_2.find_success, VAR_2.find_total);
 FUNC_0("Free swap  = %ldkB\n", VAR_1 << (VAR_0 - 10));
 FUNC_0("Total swap = %lukB\n", VAR_3 << (VAR_0 - 10));
}
