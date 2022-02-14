
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned long VAR_4;
 static int VAR_5;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_3, VAR_4);
 if (VAR_2 == 0) {

  VAR_2 = 1;
 } else {

  if (!VAR_5) {

   VAR_5 = VAR_1;
   do {
    FUNC_3(&VAR_3);
    FUNC_2(VAR_0);
    FUNC_0(&VAR_3);
   } while (--VAR_5);
   VAR_2 = 0;
  } else {

   while (VAR_5) {
    FUNC_3(&VAR_3);
    FUNC_2(1);
    FUNC_0(&VAR_3);
   }
  }
 }
 FUNC_4(&VAR_3, VAR_4);
}
