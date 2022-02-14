
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int cache; } ;
struct mem_region {scalar_t__ hi; TYPE_1__ attrib; } ;
struct dcache_block {scalar_t__ addr; char* data; scalar_t__* state; scalar_t__ anydirty; } ;
typedef int DCACHE ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,int,int,TYPE_1__*) ;
 struct mem_region* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__*,int ,int) ;

__attribute__((used)) static int
FUNC_4 (DCACHE *VAR_4, struct dcache_block *VAR_5)
{
  CORE_ADDR VAR_6;
  char *VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  struct mem_region *VAR_11;

  if (!VAR_5->anydirty)
    return 1;

  VAR_8 = VAR_2;
  VAR_6 = VAR_5->addr;
  VAR_7 = VAR_5->data;

  while (VAR_8 > 0)
    {
      int VAR_12;
      int VAR_13;
      int VAR_14;

      VAR_11 = FUNC_2(VAR_6);
      if (VAR_6 + VAR_8 < VAR_11->hi)
 VAR_10 = VAR_8;
      else
 VAR_10 = VAR_11->hi - VAR_6;

      if (!VAR_11->attrib.cache || VAR_11->attrib.mode == VAR_3)
 {
   VAR_6 += VAR_10;
   VAR_7 += VAR_10;
   VAR_8 -= VAR_10;
   continue;
 }

      while (VAR_10 > 0)
 {
   VAR_12 = FUNC_0(VAR_6);
   while (VAR_10 > 0) {
     if (VAR_5->state[VAR_12] == VAR_0)
       break;
     VAR_12++;
     VAR_10--;

     VAR_6++;
     VAR_7++;
     VAR_8--;
   }

   VAR_13 = VAR_12;
   while (VAR_10 > 0) {
     if (VAR_5->state[VAR_13] != VAR_0)
       break;
     VAR_13++;
     VAR_10--;
   }

   VAR_14 = VAR_13 - VAR_12;
   while (VAR_14 > 0)
     {
       VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_14, 1,
       &VAR_11->attrib);
       if (VAR_9 <= 0)
  return 0;

       FUNC_3 (&VAR_5->state[FUNC_0(VAR_6)], VAR_1, VAR_9);
       VAR_6 += VAR_9;
       VAR_7 += VAR_9;
       VAR_8 -= VAR_9;
       VAR_14 -= VAR_9;
     }
 }
    }

  VAR_5->anydirty = 0;
  return 1;
}
