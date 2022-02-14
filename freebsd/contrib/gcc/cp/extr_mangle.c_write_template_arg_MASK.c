
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {int need_abi_warning; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (char) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17 (tree VAR_9)
{
  enum tree_code VAR_10 = FUNC_2 (VAR_9);

  FUNC_1 ("template-arg", VAR_9);



  if (VAR_10 == VAR_7)
    {
      VAR_9 = FUNC_6 (VAR_9);

      if (FUNC_0 (VAR_9))
 {
   VAR_9 = FUNC_5 (VAR_9);
   VAR_10 = FUNC_2 (VAR_9);
 }
    }

  if (FUNC_2 (VAR_9) == VAR_3
      && FUNC_2 (FUNC_5 (VAR_9)) == VAR_5)
    {



      FUNC_9 (FUNC_2 (FUNC_4 (VAR_9, 0)) == VAR_0);
      if (FUNC_8 (2))
 VAR_9 = FUNC_4 (FUNC_4 (VAR_9, 0), 0);
      else
 VAR_2.need_abi_warning = 1;
    }

  if (FUNC_7 (VAR_9))
    FUNC_16 (VAR_9);
  else if (VAR_10 == VAR_6)

    FUNC_15 (VAR_9);
  else if ((FUNC_3 (VAR_10) == VAR_8 && VAR_10 != VAR_4)
    || (FUNC_8 (2) && VAR_10 == VAR_1))
    FUNC_14 (VAR_9);
  else if (FUNC_0 (VAR_9))
    {


      if (VAR_10 == VAR_1 && !FUNC_8 (2))
 VAR_2.need_abi_warning = 1;
      FUNC_10 ('L');


      if (!FUNC_8 (3))
 {
   VAR_2.need_abi_warning = 1;
   FUNC_10 ('Z');
 }
      else
 FUNC_13 ("_Z");
      FUNC_11 (VAR_9);
      FUNC_10 ('E');
    }
  else
    {

      FUNC_10 ('X');
      FUNC_12 (VAR_9);
      FUNC_10 ('E');
    }
}
