
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int cache; } ;
struct mem_region {scalar_t__ hi; TYPE_1__ attrib; } ;
struct dcache_block {scalar_t__ addr; char* data; scalar_t__ anydirty; int state; } ;
typedef int DCACHE ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct dcache_block*) ;
 int FUNC_1 (scalar_t__,char*,int,int ,TYPE_1__*) ;
 struct mem_region* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4 (DCACHE *VAR_3, struct dcache_block *VAR_4)
{
  CORE_ADDR VAR_5;
  char *VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  struct mem_region *VAR_10;



  if (VAR_4->anydirty)
    {
      if (!FUNC_0 (VAR_3, VAR_4))
 return 0;
    }

  VAR_7 = VAR_1;
  VAR_5 = VAR_4->addr;
  VAR_6 = VAR_4->data;

  while (VAR_7 > 0)
    {
      VAR_10 = FUNC_2(VAR_5);
      if (VAR_5 + VAR_7 < VAR_10->hi)
 VAR_9 = VAR_7;
      else
 VAR_9 = VAR_10->hi - VAR_5;

      if (!VAR_10->attrib.cache || VAR_10->attrib.mode == VAR_2)
 {
   VAR_5 += VAR_9;
   VAR_6 += VAR_9;
   VAR_7 -= VAR_9;
   continue;
 }

      while (VAR_9 > 0)
 {
   VAR_8 = FUNC_1 (VAR_5, VAR_6, VAR_9, 0,
    &VAR_10->attrib);
   if (VAR_8 <= 0)
     return 0;

   VAR_5 += VAR_8;
   VAR_6 += VAR_8;
   VAR_7 -= VAR_8;
   VAR_9 -= VAR_8;
 }
    }

  FUNC_3 (VAR_4->state, VAR_0, sizeof (VAR_4->data));
  VAR_4->anydirty = 0;

  return 1;
}
