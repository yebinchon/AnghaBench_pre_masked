
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int keyboard_t ;
typedef int caddr_t ;
struct TYPE_2__ {scalar_t__ td_critnest; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ) ;

__attribute__((used)) static int
FUNC_5(keyboard_t *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 int VAR_6;




 if (VAR_2->td_critnest != 0)
  return (VAR_0);
 switch (VAR_4) {
 case 130:
 case 128:
 case 129:
  if (!FUNC_3(&VAR_1) && !FUNC_2())
   return (VAR_0);

 default:
  FUNC_0();
  VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
  FUNC_1();
  return (VAR_6);
 }
}
