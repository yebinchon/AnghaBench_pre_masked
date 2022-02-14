
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4 (tree VAR_2, tree VAR_3)
{
  tree VAR_4 = FUNC_1 (VAR_2, VAR_1);
  if (VAR_4)
    {
      if (FUNC_0 (VAR_4) != VAR_3)
 FUNC_3 (VAR_0, "#pragma redefine_extname ignored due to "
   "conflict with previous #pragma redefine_extname");
      return;
    }

  VAR_1
    = FUNC_2 (VAR_2, VAR_3, VAR_1);
}
