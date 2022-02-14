
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int bitmap ;
typedef scalar_t__ basic_block ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5 (basic_block VAR_1, bitmap VAR_2)
{
  tree VAR_3, VAR_4;
  basic_block VAR_5;

  for (VAR_3 = FUNC_4 (VAR_1); VAR_3; VAR_3 = VAR_4)
    {
      VAR_4 = FUNC_0 (VAR_3);
      FUNC_1 (VAR_3, VAR_2);
    }


  for (VAR_5 = FUNC_2 (VAR_0, VAR_1);
       VAR_5;
       VAR_5 = FUNC_3 (VAR_0, VAR_5))
    FUNC_5 (VAR_5, VAR_2);
}
