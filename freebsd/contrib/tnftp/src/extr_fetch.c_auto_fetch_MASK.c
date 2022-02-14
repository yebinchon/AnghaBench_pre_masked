
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int * FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int VAR_8 ;
 int FUNC_5 (int ,int ) ;

int
FUNC_6(int VAR_9, char *VAR_10[])
{
 volatile int VAR_11, VAR_12;

 VAR_11 = VAR_12 = 0;

 if (FUNC_2(VAR_8, 1)) {
  if (VAR_3)
   FUNC_0(0, ((void*)0));
  if (VAR_12 > 0)
   VAR_12 = VAR_11 + 1;
  return (VAR_12);
 }
 (void)FUNC_5(VAR_0, VAR_4);
 (void)FUNC_5(VAR_1, VAR_5);




 for (; (VAR_12 == 0) && (VAR_11 < VAR_9); VAR_11++) {
  if (FUNC_3(VAR_10[VAR_11], ':') == ((void*)0))
   break;
  VAR_7 = 0;
  if (!VAR_2)
   VAR_2 = 2;
  VAR_12 = FUNC_1(VAR_10[VAR_11]);
  if (VAR_6 != ((void*)0) && FUNC_4(VAR_6, "-") != 0
      && VAR_6[0] != '|')
   VAR_6 = ((void*)0);
  if (VAR_12 > 0)
   VAR_12 = VAR_11 + 1;
 }

 if (VAR_3 && VAR_12 != -1)
  FUNC_0(0, ((void*)0));
 return (VAR_12);
}
