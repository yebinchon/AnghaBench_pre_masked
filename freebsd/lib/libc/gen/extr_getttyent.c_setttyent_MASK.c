
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;

int
FUNC_3(void)
{

 if (VAR_3 == ((void*)0)) {
  if ((VAR_3 = FUNC_1(VAR_0)) == ((void*)0))
   return (0);
  VAR_2 = VAR_0;
 }
 if (VAR_4) {
  FUNC_2(VAR_4);
  return (1);
 } else if ( (VAR_4 = FUNC_0(VAR_1, "re")) )
  return (1);
 return (0);
}
