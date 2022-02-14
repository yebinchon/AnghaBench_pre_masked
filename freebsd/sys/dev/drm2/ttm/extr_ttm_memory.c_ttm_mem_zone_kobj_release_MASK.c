
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_zone {char* name; scalar_t__ used_mem; } ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_mem_zone*,int ) ;
 int FUNC_1 (char*,char*,unsigned long long) ;

__attribute__((used)) static void FUNC_2(struct ttm_mem_zone *VAR_1)
{

 FUNC_1("[TTM] Zone %7s: Used memory at exit: %llu kiB\n",
  VAR_1->name, (unsigned long long)VAR_1->used_mem >> 10);
 FUNC_0(VAR_1, VAR_0);
}
