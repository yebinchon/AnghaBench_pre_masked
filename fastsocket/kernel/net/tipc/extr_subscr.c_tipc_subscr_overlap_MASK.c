
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ lower; scalar_t__ upper; } ;
struct subscription {TYPE_1__ seq; } ;



int FUNC_0(struct subscription *VAR_0,
   u32 VAR_1,
   u32 VAR_2)

{
 if (VAR_1 < VAR_0->seq.lower)
  VAR_1 = VAR_0->seq.lower;
 if (VAR_2 > VAR_0->seq.upper)
  VAR_2 = VAR_0->seq.upper;
 if (VAR_1 > VAR_2)
  return 0;
 return 1;
}
