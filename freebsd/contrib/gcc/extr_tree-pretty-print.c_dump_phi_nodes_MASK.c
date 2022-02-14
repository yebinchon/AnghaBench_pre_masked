
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int pretty_printer ;
typedef int basic_block ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int *,scalar_t__,int,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void
FUNC_8 (pretty_printer *VAR_1, basic_block VAR_2, int VAR_3, int VAR_4)
{
  tree VAR_5 = FUNC_5 (VAR_2);
  if (!VAR_5)
    return;

  for (; VAR_5; VAR_5 = FUNC_1 (VAR_5))
    {
      if (FUNC_4 (FUNC_2 (VAR_5)) || (VAR_4 & VAR_0))
        {
          FUNC_0 (VAR_3);
          FUNC_7 (VAR_1, "# ");
          FUNC_3 (VAR_1, VAR_5, VAR_3, VAR_4, 0);
          FUNC_6 (VAR_1);
        }
    }
}
