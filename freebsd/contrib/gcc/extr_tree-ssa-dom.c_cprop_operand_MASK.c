
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int use_operand_p ;
typedef scalar_t__ tree ;
struct TYPE_4__ {int (* types_compatible_p ) (scalar_t__,scalar_t__) ;} ;
struct TYPE_3__ {int num_copy_prop; int num_const_prop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,char*,...) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 TYPE_2__ VAR_7 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 TYPE_1__ VAR_8 ;
 int FUNC_14 (scalar_t__,scalar_t__,int) ;
 int FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_17 (tree VAR_9, use_operand_p VAR_10)
{
  bool VAR_11 = 0;
  tree VAR_12;
  tree VAR_13 = FUNC_4 (VAR_10);




  VAR_12 = FUNC_1 (VAR_13);
  if (VAR_12 && VAR_12 != VAR_13 && FUNC_2 (VAR_12) != VAR_4)
    {
      tree VAR_14, VAR_15;






      if (!FUNC_9 (VAR_13)
   && (FUNC_2 (VAR_12) != VAR_2
       || FUNC_9 (VAR_12)
       || FUNC_7 (VAR_12) != FUNC_7 (VAR_13)))
 return 0;


      if (FUNC_2 (VAR_9) == VAR_1
   && !FUNC_13 (VAR_13))
 return 0;


      VAR_14 = FUNC_3 (VAR_13);
      VAR_15 = FUNC_3 (VAR_12);



      while (FUNC_0 (VAR_14) && FUNC_0 (VAR_15))
 {
   VAR_14 = FUNC_3 (VAR_14);
   VAR_15 = FUNC_3 (VAR_15);
 }





      if (FUNC_2 (VAR_12) != VAR_2)
 {
   if (!VAR_7.types_compatible_p (VAR_14, VAR_15))
     {
       VAR_12 = FUNC_5 (FUNC_3 (VAR_13), VAR_12);
       if (!FUNC_8 (VAR_12))
  return 0;
     }
 }




      else if (!FUNC_12 (VAR_13, VAR_12))
 return 0;






      if (FUNC_10 (VAR_12) > FUNC_10 (VAR_13))
 return 0;


      if (VAR_5 && (VAR_6 & VAR_3))
 {
   FUNC_6 (VAR_5, "  Replaced '");
   FUNC_14 (VAR_5, VAR_13, VAR_6);
   FUNC_6 (VAR_5, "' with %s '",
     (FUNC_2 (VAR_12) != VAR_2 ? "constant" : "variable"));
   FUNC_14 (VAR_5, VAR_12, VAR_6);
   FUNC_6 (VAR_5, "'\n");
 }



      if (FUNC_2 (VAR_12) == VAR_0
   || (FUNC_0 (FUNC_3 (VAR_13))
       && FUNC_8 (VAR_12)))
 VAR_11 = 1;

      if (FUNC_2 (VAR_12) != VAR_2)
 VAR_8.num_const_prop++;
      else
 VAR_8.num_copy_prop++;

      FUNC_15 (VAR_10, VAR_12);




      FUNC_11 (VAR_9);
    }
  return VAR_11;
}
