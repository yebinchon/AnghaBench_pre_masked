
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

void
FUNC_7(void)
{
 FILE *VAR_3;
 char *VAR_4;
 int VAR_5;

 FUNC_2(VAR_2);



 if ((VAR_3 = FUNC_1(VAR_2, "r")) == ((void*)0))
  return;
 do {
  VAR_5 = FUNC_3(&VAR_4, VAR_3);
  if (VAR_5 == VAR_0)
   break;
  if (VAR_5 != VAR_1) {
   FUNC_6("Corrupt lease file - possible data loss!");
   FUNC_5(VAR_3);
   break;
  } else
   FUNC_4(VAR_3, 0);

 } while (1);
 FUNC_0(VAR_3);
}
