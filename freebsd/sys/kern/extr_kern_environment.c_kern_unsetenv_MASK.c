
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,int*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

int
FUNC_6(const char *VAR_4)
{
 char *VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 VAR_0;

 FUNC_3(&VAR_2);
 VAR_5 = FUNC_0(VAR_4, &VAR_7);
 if (VAR_5 != ((void*)0)) {
  VAR_6 = VAR_3[VAR_7];
  for (VAR_8 = VAR_7 + 1; VAR_3[VAR_8] != ((void*)0); VAR_8++)
   VAR_3[VAR_7++] = VAR_3[VAR_8];
  VAR_3[VAR_7] = ((void*)0);
  FUNC_4(&VAR_2);
  FUNC_1(VAR_6, FUNC_5(VAR_6));
  FUNC_2(VAR_6, VAR_1);
  return (0);
 }
 FUNC_4(&VAR_2);
 return (-1);
}
