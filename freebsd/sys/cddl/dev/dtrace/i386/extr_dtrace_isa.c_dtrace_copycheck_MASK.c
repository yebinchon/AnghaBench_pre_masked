
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t cpuc_dtrace_illval; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 uintptr_t VAR_3 ;

__attribute__((used)) static int
FUNC_2(uintptr_t VAR_4, uintptr_t VAR_5, size_t VAR_6)
{
 FUNC_0(VAR_5 >= VAR_3 && VAR_5 + VAR_6 >= VAR_5);

 if (VAR_4 + VAR_6 >= VAR_3 || VAR_4 + VAR_6 < VAR_4) {
  FUNC_1(VAR_0);
  VAR_1[VAR_2].cpuc_dtrace_illval = VAR_4;
  return (0);
 }

 return (1);
}
