
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcache_block {char* data; int anydirty; int * state; } ;
typedef int DCACHE ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct dcache_block* FUNC_1 (int *,int ) ;
 struct dcache_block* FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3 (DCACHE *VAR_1, CORE_ADDR VAR_2, char *VAR_3)
{
  struct dcache_block *VAR_4 = FUNC_2 (VAR_1, VAR_2);

  if (!VAR_4)
    {
      VAR_4 = FUNC_1 (VAR_1, VAR_2);
      if (!VAR_4)
 return 0;
    }

  VAR_4->data[FUNC_0 (VAR_2)] = *VAR_3;
  VAR_4->state[FUNC_0 (VAR_2)] = VAR_0;
  VAR_4->anydirty = 1;
  return 1;
}
