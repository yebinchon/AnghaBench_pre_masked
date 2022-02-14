
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcache_block {scalar_t__* state; char* data; } ;
typedef int DCACHE ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct dcache_block* FUNC_1 (int *,int ) ;
 struct dcache_block* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct dcache_block*) ;

__attribute__((used)) static int
FUNC_4 (DCACHE *VAR_1, CORE_ADDR VAR_2, char *VAR_3)
{
  struct dcache_block *VAR_4 = FUNC_2 (VAR_1, VAR_2);

  if (!VAR_4)
    {
      VAR_4 = FUNC_1 (VAR_1, VAR_2);
      if (!VAR_4)
 return 0;
    }

  if (VAR_4->state[FUNC_0 (VAR_2)] == VAR_0)
    {
      if (!FUNC_3(VAR_1, VAR_4))
         return 0;
    }

  *VAR_3 = VAR_4->data[FUNC_0 (VAR_2)];
  return 1;
}
