
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;
typedef int symbolS ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *) ;
 int * FUNC_2 (char*) ;
 int VAR_1 ;
 int * FUNC_3 (char const*) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

symbolS *
FUNC_6 (const char *VAR_4)
{
  register symbolS *VAR_5;

  VAR_5 = FUNC_3 (VAR_4);

  if (VAR_5 == ((void*)0))
    {
      if (! VAR_0 && FUNC_0 (VAR_1, VAR_4))
 {
   VAR_5 = FUNC_2 ((char *) VAR_4);
   if (VAR_5 != ((void*)0))
     return VAR_5;

   VAR_5 = (symbolS *) FUNC_1 (VAR_4, VAR_2,
         (valueT) 0,
         &VAR_3);
   return VAR_5;
 }

      VAR_5 = FUNC_4 (VAR_4);

      FUNC_5 (VAR_5);
    }

  return (VAR_5);
}
