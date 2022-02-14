
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int keyboard_t ;
typedef int caddr_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_2 () ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(keyboard_t *VAR_2, u_long VAR_3, caddr_t VAR_4)
{
 int VAR_5;
 switch (VAR_3) {
 case 130:
 case 128:
 case 129:
  if (!FUNC_4(&VAR_1) && !FUNC_2())
   return (VAR_0);

 default:
  FUNC_0();
  VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
  FUNC_1();
  return (VAR_5);
 }
}
