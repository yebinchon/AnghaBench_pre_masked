
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HistEvent ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int *,int *,int ,char const*) ;
 int FUNC_2 () ;

int
FUNC_3(const char *VAR_5)
{
 HistEvent VAR_6;

 if (VAR_4 == ((void*)0) || VAR_2 == ((void*)0))
  FUNC_2();
 if (VAR_5 == ((void*)0) && (VAR_5 = FUNC_0()) == ((void*)0))
  return VAR_3;
 return FUNC_1(VAR_4, &VAR_6, VAR_1, VAR_5) == -1 ?
     (VAR_3 ? VAR_3 : VAR_0) : 0;
}
