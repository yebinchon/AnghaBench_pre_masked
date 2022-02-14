
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {scalar_t__ header; } ;
typedef scalar_t__ basic_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct loop*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7 (struct loop *VAR_7, basic_block VAR_8, tree VAR_9)
{
  if (VAR_5 && (VAR_6 & VAR_3))
    {
      FUNC_3 (VAR_5, "-------------------------\n");
      FUNC_5 (VAR_5, VAR_9, VAR_4);
    }


  if (FUNC_4 (VAR_9) == VAR_1)
    {
      if (VAR_5 && (VAR_6 & VAR_3))
 FUNC_3 (VAR_5, "stmt is movable. Don't take risk\n");
      return 0;
    }


  if (VAR_8 != VAR_7->header
      && FUNC_6 (FUNC_1 (VAR_9, 1)))
    {
      if (VAR_5 && (VAR_6 & VAR_3))
 FUNC_3 (VAR_5, "tree could trap...\n");
      return 0;
    }

  if (FUNC_0 (FUNC_1 (VAR_9, 1)) == VAR_0)
    {
      if (VAR_5 && (VAR_6 & VAR_3))
 FUNC_3 (VAR_5, "CALL_EXPR \n");
      return 0;
    }

  if (FUNC_0 (FUNC_1 (VAR_9, 0)) != VAR_2
      && VAR_8 != VAR_7->header
      && !FUNC_2 (VAR_7, VAR_8))
    {
      if (VAR_5 && (VAR_6 & VAR_3))
 {
   FUNC_3 (VAR_5, "LHS is not var\n");
   FUNC_5 (VAR_5, VAR_9, VAR_4);
 }
      return 0;
    }


  return 1;
}
