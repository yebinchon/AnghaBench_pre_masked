
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fragS ;
typedef int expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,int,int *,int ,int) ;

void
FUNC_1 (fragS *VAR_6, int VAR_7, int VAR_8, expressionS *VAR_9)
{
  int VAR_10;
  switch (VAR_8)
    {
    default: VAR_10 = VAR_4; break;
    case 1: VAR_10 = VAR_3 ; break;
    case 2: VAR_10 = VAR_0; break;
    case 4:
      if (VAR_5)
 {
   VAR_10 = VAR_2;
   VAR_5 = 0;
 }
      else
 VAR_10 = VAR_1;
      break;
    }

  FUNC_0 (VAR_6, VAR_7, VAR_8, VAR_9, 0, VAR_10);
}
