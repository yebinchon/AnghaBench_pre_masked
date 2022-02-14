
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HistEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int * VAR_2 ;
 int FUNC_1 (int *,int *,int ,int) ;
 int FUNC_2 (char const*) ;

void
FUNC_3(const char *VAR_3)
{
 int VAR_4;
 HistEvent VAR_5;

 if (VAR_2 != ((void*)0)) {
  if (VAR_3 == ((void*)0) || !FUNC_2(VAR_3))
   VAR_4 = 100;
  else
   VAR_4 = FUNC_0(VAR_3);
  FUNC_1(VAR_2, &VAR_5, VAR_0, VAR_4);
  FUNC_1(VAR_2, &VAR_5, VAR_1, 1);
 }
}
