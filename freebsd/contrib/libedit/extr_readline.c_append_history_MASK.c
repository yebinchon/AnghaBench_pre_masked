
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HistEvent ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int * VAR_4 ;
 int FUNC_3 (int *,int *,int ,size_t,int *) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_5, const char *VAR_6)
{
 HistEvent VAR_7;
 FILE *VAR_8;

 if (VAR_4 == ((void*)0) || VAR_2 == ((void*)0))
  FUNC_4();
 if (VAR_6 == ((void*)0) && (VAR_6 = FUNC_0()) == ((void*)0))
  return VAR_3;

 if ((VAR_8 = FUNC_2(VAR_6, "a")) == ((void*)0))
  return VAR_3;

 if (FUNC_3(VAR_4, &VAR_7, VAR_1, (size_t)VAR_5, VAR_8) == -1) {
  int VAR_9 = VAR_3 ? VAR_3 : VAR_0;
  FUNC_1(VAR_8);
  return VAR_9;
 }
 FUNC_1(VAR_8);
 return 0;
}
