
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9 (c_parser *VAR_4)
{
  tree VAR_5;
  FUNC_3 (VAR_4, VAR_2, "expected %<@property%>");
  VAR_3 = 1;
  FUNC_8 (0, VAR_1);
  FUNC_2 (VAR_4);
  VAR_3 = 0;
  VAR_5 = FUNC_1 (VAR_4);


  VAR_5 = FUNC_6 (VAR_5);

  for (; VAR_5; VAR_5 = FUNC_0 (VAR_5))
    FUNC_7 (FUNC_5 (VAR_5));
  FUNC_4 (VAR_4, VAR_0, "expected %<;%>");
}
