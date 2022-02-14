
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {long* lowmem_reserve; unsigned long* watermark; TYPE_1__* free_area; } ;
struct TYPE_2__ {int nr_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_1(struct zone *VAR_4, int VAR_5, unsigned long VAR_6,
        int VAR_7, int VAR_8, long VAR_9)
{

 long VAR_10 = VAR_6;
 int VAR_11;

 VAR_9 -= (1 << VAR_5) + 1;
 if (VAR_8 & VAR_1)
  VAR_10 -= VAR_10 / 2;
 if (VAR_8 & VAR_0)
  VAR_10 -= VAR_10 / 4;

 if (VAR_9 <= VAR_10 + VAR_4->lowmem_reserve[VAR_7])
  return 0;
 if (!VAR_5)
  return 1;
 VAR_10 = VAR_6 - VAR_4->watermark[VAR_2];
 FUNC_0(VAR_10 < 0);
 if (VAR_8 & VAR_1)
  VAR_10 -= VAR_10 / 2;
 if (VAR_8 & VAR_0)
  VAR_10 -= VAR_10 / 4;
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {

  VAR_9 -= VAR_4->free_area[VAR_11].nr_free << VAR_11;


  if (VAR_11 < (VAR_3 >> 2))
   VAR_10 >>= 1;

  if (VAR_9 <= VAR_10)
   return 0;
 }
 return 1;
}
