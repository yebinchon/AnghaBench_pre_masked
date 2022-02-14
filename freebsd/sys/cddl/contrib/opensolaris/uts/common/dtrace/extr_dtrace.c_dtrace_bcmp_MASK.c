
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int cpuc_dtrace_flags; } ;


 int volatile VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (uintptr_t) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_3, const void *VAR_4, size_t VAR_5)
{
 volatile uint16_t *VAR_6;

 VAR_6 = (volatile uint16_t *)&VAR_1[VAR_2].cpuc_dtrace_flags;

 if (VAR_3 == VAR_4)
  return (0);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (1);

 if (VAR_3 != VAR_4 && VAR_5 != 0) {
  const uint8_t *VAR_7 = VAR_3;
  const uint8_t *VAR_8 = VAR_4;

  do {
   if (FUNC_0((uintptr_t)VAR_7++) != *VAR_8++)
    return (1);
  } while (--VAR_5 != 0 && !(*VAR_6 & VAR_0));
 }
 return (0);
}
