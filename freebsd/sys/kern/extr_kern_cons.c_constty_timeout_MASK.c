
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,int,void (*) (void*),int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5)
{
 int VAR_6;

 if (VAR_2 != ((void*)0)) {
  FUNC_3(VAR_2);
  while ((VAR_6 = FUNC_2(&VAR_1)) != -1) {
   if (FUNC_4(VAR_2, VAR_6) < 0) {
    FUNC_5(VAR_2);
    VAR_2 = ((void*)0);
    break;
   }
  }

  if (VAR_2 != ((void*)0))
   FUNC_5(VAR_2);
 }
 if (VAR_2 != ((void*)0)) {
  FUNC_0(&VAR_0, VAR_4 / VAR_3,
      FUNC_6, ((void*)0));
 } else {

  FUNC_1();
 }
}
