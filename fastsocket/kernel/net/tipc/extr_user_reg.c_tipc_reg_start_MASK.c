
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {scalar_t__ callback; } ;
typedef int Handler ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned long) ;
 TYPE_1__* VAR_2 ;

int FUNC_2(void)
{
 u32 VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_0()))
  return VAR_4;

 for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
  if (VAR_2[VAR_3].callback)
   FUNC_1((Handler)VAR_1,
          (unsigned long)&VAR_2[VAR_3]);
 }
 return 0;
}
