
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_6 (tree *VAR_2, tree *VAR_3)
{
  tree VAR_4 = *VAR_2;
  tree VAR_5 = FUNC_5 (VAR_4, ((void*)0));
  tree VAR_6 = FUNC_0 (VAR_4, 0);

  FUNC_4 (&VAR_6);

  VAR_4 = FUNC_3 (VAR_6, VAR_0,
     FUNC_2 (VAR_1, VAR_0));

  if (VAR_5)
    {
      FUNC_1 (VAR_4, VAR_3);
      *VAR_2 = VAR_5;
    }
  else
    *VAR_2 = VAR_4;
}
