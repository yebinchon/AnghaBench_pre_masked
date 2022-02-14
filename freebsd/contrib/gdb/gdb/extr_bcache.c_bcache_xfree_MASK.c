
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcache {struct bcache* bucket; int cache; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bcache*) ;

void
FUNC_2 (struct bcache *VAR_0)
{
  if (VAR_0 == ((void*)0))
    return;
  FUNC_0 (&VAR_0->cache, 0);
  FUNC_1 (VAR_0->bucket);
  FUNC_1 (VAR_0);
}
