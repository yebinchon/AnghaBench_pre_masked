
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rndtest_state {int dummy; } ;
struct TYPE_2__ {int min; int max; } ;


 int VAR_0 ;
 int FUNC_0 (struct rndtest_state*,int,char*,char*,int,int,int,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct rndtest_state *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4[VAR_5] < VAR_1[VAR_5].min ||
      VAR_4[VAR_5] > VAR_1[VAR_5].max) {
   FUNC_0(VAR_2, 1,
       "%s interval %d failed (%d, %d-%d)",
       VAR_3 ? "ones" : "zeros",
       VAR_5 + 1, VAR_4[VAR_5], VAR_1[VAR_5].min,
       VAR_1[VAR_5].max);
   VAR_6 = -1;
  } else {
   FUNC_0(VAR_2, 0,
       "runs pass %s interval %d (%d < %d < %d)",
       VAR_3 ? "ones" : "zeros",
       VAR_5 + 1, VAR_1[VAR_5].min, VAR_4[VAR_5],
       VAR_1[VAR_5].max);
  }
 }
 return (VAR_6);
}
