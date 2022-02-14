
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int ** VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int *,int,int ,int ,int,char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6()
{
 char *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_2() != 0)
  return VAR_0;

 if (FUNC_1() != 0) {
  return VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_4[VAR_7] = ((void*)0);
 for (VAR_7 = 0; (VAR_6 = VAR_3[VAR_7]); VAR_7++) {
  VAR_5 = ((void*)0);
  for(VAR_8 = FUNC_5(VAR_6); VAR_8 > 0; VAR_8--)
   if (VAR_6[VAR_8] == '/') {
    VAR_5 = VAR_6 + VAR_8 + 1;
    break;
   }
  if (!VAR_5)
   VAR_5 = VAR_6;
  VAR_4[VAR_7] = FUNC_4(&VAR_2, VAR_7, 0, 0, 0600, "%s", VAR_5);
 }

 VAR_9 = FUNC_3();
 if (VAR_9 != 0)
  return VAR_9;
 FUNC_0();

 return 0;
}
