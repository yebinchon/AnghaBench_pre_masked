
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int Cell ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;

Cell *FUNC_8(Node **VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 char *VAR_5;
 int VAR_6;
 Cell *VAR_7, *VAR_8, *VAR_9 = ((void*)0);

 VAR_7 = FUNC_1(VAR_0[0]);
 VAR_8 = FUNC_1(VAR_0[1]);
 if (VAR_0[2] != ((void*)0))
  VAR_9 = FUNC_1(VAR_0[2]);
 VAR_5 = FUNC_3(VAR_7);
 VAR_2 = FUNC_6(VAR_5) + 1;
 if (VAR_2 <= 1) {
  FUNC_7(VAR_7);
  FUNC_7(VAR_8);
  if (VAR_0[2] != ((void*)0)) {
   FUNC_7(VAR_9);
  }
  VAR_7 = FUNC_4();
  FUNC_5(VAR_7, "");
  return(VAR_7);
 }
 VAR_3 = (int) FUNC_2(VAR_8);
 if (VAR_3 <= 0)
  VAR_3 = 1;
 else if (VAR_3 > VAR_2)
  VAR_3 = VAR_2;
 FUNC_7(VAR_8);
 if (VAR_0[2] != ((void*)0)) {
  VAR_4 = (int) FUNC_2(VAR_9);
  FUNC_7(VAR_9);
 } else
  VAR_4 = VAR_2 - 1;
 if (VAR_4 < 0)
  VAR_4 = 0;
 else if (VAR_4 > VAR_2 - VAR_3)
  VAR_4 = VAR_2 - VAR_3;
    FUNC_0( ("substr: m=%d, n=%d, s=%s\n", VAR_3, VAR_4, VAR_5) );
 VAR_8 = FUNC_4();
 VAR_6 = VAR_5[VAR_4+VAR_3-1];
 VAR_5[VAR_4+VAR_3-1] = '\0';
 FUNC_5(VAR_8, VAR_5 + VAR_3 - 1);
 VAR_5[VAR_4+VAR_3-1] = VAR_6;
 FUNC_7(VAR_7);
 return(VAR_8);
}
