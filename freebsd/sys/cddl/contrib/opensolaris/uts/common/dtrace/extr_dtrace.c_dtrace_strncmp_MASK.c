
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int cpuc_dtrace_flags; } ;


 int volatile VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 char FUNC_0 (uintptr_t) ;

__attribute__((used)) static int
FUNC_1(char *VAR_3, char *VAR_4, size_t VAR_5)
{
 uint8_t VAR_6, VAR_7;
 volatile uint16_t *VAR_8;

 if (VAR_3 == VAR_4 || VAR_5 == 0)
  return (0);

 VAR_8 = (volatile uint16_t *)&VAR_1[VAR_2].cpuc_dtrace_flags;

 do {
  if (VAR_3 == ((void*)0)) {
   VAR_6 = '\0';
  } else {
   VAR_6 = FUNC_0((uintptr_t)VAR_3++);
  }

  if (VAR_4 == ((void*)0)) {
   VAR_7 = '\0';
  } else {
   VAR_7 = FUNC_0((uintptr_t)VAR_4++);
  }

  if (VAR_6 != VAR_7)
   return (VAR_6 - VAR_7);
 } while (--VAR_5 && VAR_6 != '\0' && !(*VAR_8 & VAR_0));

 return (0);
}
