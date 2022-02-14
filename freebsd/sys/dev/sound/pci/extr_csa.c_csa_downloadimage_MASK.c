
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_long ;
typedef int csa_res ;
struct TYPE_4__ {size_t BA1Array; TYPE_1__* MemoryStat; } ;
struct TYPE_3__ {int ulSourceSize; int ulDestAddr; } ;


 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *,size_t,int ,int) ;

__attribute__((used)) static int
FUNC_1(csa_res *VAR_2)
{
 int VAR_3;
 u_long VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_5 = 0 ; VAR_4 < VAR_0 ; VAR_4++) {




  VAR_3 = FUNC_0(VAR_2,
      VAR_1.BA1Array + VAR_5,
      VAR_1.MemoryStat[VAR_4].ulDestAddr,
      VAR_1.MemoryStat[VAR_4].ulSourceSize);
  if (VAR_3)
   return (VAR_3);
  VAR_5 += VAR_1.MemoryStat[VAR_4].ulSourceSize >> 2;
 }
 return (0);
}
