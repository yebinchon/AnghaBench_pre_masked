
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fragS ;
typedef int expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int,int *,int ,int) ;
 int FUNC_1 (int,int,int *,int *) ;

void
FUNC_2 (fragS *VAR_3,
    int VAR_4,
    int VAR_5,
    expressionS *VAR_6)
{
  if (VAR_5 == 4)
    {
      int VAR_7;
      expressionS VAR_8;


      VAR_7 = FUNC_1 (1, VAR_1, VAR_6, &VAR_8);
      FUNC_0 (VAR_3, VAR_4, VAR_5, &VAR_8, 0, VAR_7);
    }
  else
    {
      FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6, 0,
     VAR_5 == 2 ? VAR_0
     : VAR_5 == 8 ? VAR_2
     : VAR_1);
    }
}
