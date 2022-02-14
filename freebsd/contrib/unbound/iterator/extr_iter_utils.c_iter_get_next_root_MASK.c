
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct iter_hints {int dummy; } ;
struct iter_forwards {int dummy; } ;


 int FUNC_0 (struct iter_forwards*,scalar_t__*) ;
 int FUNC_1 (struct iter_hints*,scalar_t__*) ;

int
FUNC_2(struct iter_hints* VAR_0, struct iter_forwards* VAR_1,
 uint16_t* VAR_2)
{
 uint16_t VAR_3 = *VAR_2, VAR_4 = *VAR_2;
 int VAR_5 = FUNC_1(VAR_0, &VAR_3);
 int VAR_6 = FUNC_0(VAR_1, &VAR_4);
 if(!VAR_5 && !VAR_6)
  return 0;
 else if(!VAR_5)
  *VAR_2 = VAR_4;
 else if(!VAR_6)
  *VAR_2 = VAR_3;
 else if(VAR_3 < VAR_4)
  *VAR_2 = VAR_3;
 else *VAR_2 = VAR_4;
 return 1;
}
