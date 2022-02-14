
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,size_t*) ;
 int * FUNC_3 (char const*,char*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2)
{
 FILE *VAR_3;
 size_t VAR_4;
 char *VAR_5;

 if ((VAR_3 = FUNC_3(VAR_2, "r")) == ((void*)0))
  FUNC_0(1, "Cannot open `%s'", VAR_2);
 while ((VAR_5 = FUNC_2(VAR_3, &VAR_4)) != ((void*)0)) {
  char VAR_6 = VAR_5[VAR_4];
  char *VAR_7;
  VAR_5[VAR_4] = '\0';
  for (VAR_7 = FUNC_6(VAR_5, VAR_0); VAR_7; VAR_7 = FUNC_6(((void*)0), VAR_0))
   FUNC_4(VAR_1, FUNC_5(VAR_7));
  VAR_5[VAR_4] = VAR_6;
 }

 (void)FUNC_1(VAR_3);
}
