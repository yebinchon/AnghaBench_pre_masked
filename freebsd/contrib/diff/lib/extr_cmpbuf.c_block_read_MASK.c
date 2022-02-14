
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int,size_t) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int,char*,size_t) ;

size_t
FUNC_2 (int VAR_7, char *VAR_8, size_t VAR_9)
{
  char *VAR_10 = VAR_8;
  char const *VAR_11 = VAR_8 + VAR_9;
  size_t VAR_12 = VAR_5;

  do
    {
      size_t VAR_13 = FUNC_0 (VAR_11 - VAR_10, VAR_12);
      ssize_t VAR_14 = FUNC_1 (VAR_7, VAR_10, VAR_13);
      if (VAR_14 <= 0)
 {
   if (VAR_14 == 0)
     break;



   if (VAR_6 == VAR_1 && VAR_2 < VAR_13)
     {
       VAR_12 = VAR_2;
       continue;
     }






   if (! VAR_3 && VAR_6 == VAR_0)
     continue;

   return VAR_4;
 }
      VAR_10 += VAR_14;
    }
  while (VAR_10 < VAR_11);

  return VAR_10 - VAR_8;
}
