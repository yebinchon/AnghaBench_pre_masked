
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static rtx
FUNC_9 (enum built_in_function VAR_7, int VAR_8)
{
  int VAR_9;




  rtx VAR_10;
  if (VAR_8 == 0 && VAR_7 == VAR_1)
    VAR_10 = VAR_5;
  else
    {
      VAR_10 = VAR_6;


      VAR_4 = 1;
    }
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {





      VAR_10 = FUNC_7 (VAR_3, VAR_10);
      VAR_10 = FUNC_6 (VAR_3, VAR_10);
      VAR_10 = FUNC_5 (VAR_10);
    }



  if (VAR_7 == VAR_0)



    return VAR_10;






  VAR_10 = FUNC_7 (VAR_3,
   FUNC_8 (VAR_10, FUNC_2 (VAR_3)));
  VAR_10 = FUNC_6 (VAR_3, VAR_10);

  return VAR_10;
}
