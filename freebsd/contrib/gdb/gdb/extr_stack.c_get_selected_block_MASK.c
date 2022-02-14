
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef int CORE_ADDR ;


 struct block* FUNC_0 (int ) ;
 int VAR_0 ;
 struct block* FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int VAR_1 ;

struct block *
FUNC_3 (CORE_ADDR *VAR_2)
{
  if (!VAR_1)
    return 0;
  if (!VAR_0)
    {
      CORE_ADDR VAR_3 = FUNC_2 ();
      if (VAR_2 != ((void*)0))
 *VAR_2 = VAR_3;
      return FUNC_0 (VAR_3);
    }
  return FUNC_1 (VAR_0, VAR_2);
}
