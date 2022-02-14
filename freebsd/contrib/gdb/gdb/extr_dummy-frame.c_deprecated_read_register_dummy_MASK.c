
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 struct regcache* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct regcache*,int,int *) ;

CORE_ADDR
FUNC_2 (CORE_ADDR VAR_0, CORE_ADDR VAR_1, int VAR_2)
{
  struct regcache *VAR_3 = FUNC_0 (VAR_0, VAR_1);

  if (VAR_3)
    {
      ULONGEST VAR_4;
      FUNC_1 (VAR_3, VAR_2, &VAR_4);
      return VAR_4;
    }
  else
    return 0;
}
