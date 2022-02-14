
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct dummy_frame {struct regcache* regcache; } ;
typedef int CORE_ADDR ;


 struct dummy_frame* FUNC_0 (int ,int ) ;

struct regcache *
FUNC_1 (CORE_ADDR VAR_0, CORE_ADDR VAR_1)
{
  struct dummy_frame *VAR_2 = FUNC_0 (VAR_0, VAR_1);
  if (VAR_2 != ((void*)0))
    return VAR_2->regcache;
  else
    return ((void*)0);
}
