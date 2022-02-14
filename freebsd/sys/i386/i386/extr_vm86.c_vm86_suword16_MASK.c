
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ td_critnest; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (void volatile*,int) ;

__attribute__((used)) static int
FUNC_1(volatile void *VAR_1, int VAR_2)
{

 if (VAR_0->td_critnest != 0) {
  *(volatile uint16_t *)VAR_1 = VAR_2;
  return (0);
 }
 return (FUNC_0(VAR_1, VAR_2));
}
