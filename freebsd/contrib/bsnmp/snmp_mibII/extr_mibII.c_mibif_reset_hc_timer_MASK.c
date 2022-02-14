
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int * FUNC_2 (int,int,int (*) (int *),int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(void)
{
 u_int VAR_6;

 if ((VAR_6 = VAR_2) == 0) {
  if (VAR_4 <= FUNC_0(10)) {

   VAR_6 = 3000 * 100;
  } else if (VAR_4 <= FUNC_0(100)) {

   VAR_6 = 300 * 100;
  } else if (VAR_4 < FUNC_0(622)) {

   VAR_6 = 40 * 100;
  } else if (VAR_4 <= FUNC_0(1000)) {

   VAR_6 = 20 * 100;
  } else {

   VAR_6 = 100;
  }
 }

 if (VAR_6 == VAR_3)
  return;

 if (VAR_1 != ((void*)0)) {
  FUNC_3(VAR_1);
  VAR_1 = ((void*)0);
 }
 FUNC_4(((void*)0));
 if ((VAR_1 = FUNC_2(VAR_6, VAR_6,
     FUNC_4, ((void*)0), VAR_5)) == ((void*)0)) {
  FUNC_1(VAR_0, "timer_start(%u): %m", VAR_6);
  return;
 }
 VAR_3 = VAR_6;
}
