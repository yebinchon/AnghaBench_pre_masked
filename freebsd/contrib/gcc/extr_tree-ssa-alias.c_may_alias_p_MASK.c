
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_4__ {int alias_mayalias; int alias_noalias; int structnoaddress_resolved; int structnoaddress_queries; int tbaa_resolved; int tbaa_queries; int simple_resolved; int simple_queries; int alias_queries; } ;
struct TYPE_3__ {scalar_t__ symbol_mem_tag; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 TYPE_1__* FUNC_9 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_10 (tree VAR_4, HOST_WIDE_INT VAR_5,
      tree VAR_6, HOST_WIDE_INT VAR_7,
      bool VAR_8)
{
  tree VAR_9;

  VAR_2.alias_queries++;
  VAR_2.simple_queries++;


  VAR_9 = FUNC_9 (VAR_4)->symbol_mem_tag;
  if (VAR_9 == VAR_6)
    {
      VAR_2.alias_noalias++;
      VAR_2.simple_resolved++;
      return 0;
    }



  if (VAR_3 > 2 && FUNC_1 (VAR_4) == VAR_0)
    {
      VAR_2.alias_noalias++;
      VAR_2.simple_resolved++;
      return 0;
    }



  if (VAR_3 > 1 && FUNC_7 (VAR_6)
      && FUNC_1 (VAR_4) == VAR_0)
    {
      VAR_2.alias_noalias++;
      VAR_2.simple_resolved++;
      return 0;
    }



  if ((FUNC_8 (VAR_9) && !FUNC_8 (VAR_6))
      || (FUNC_8 (VAR_6) && !FUNC_8 (VAR_9)))
    {
      VAR_2.alias_noalias++;
      VAR_2.simple_resolved++;
      return 0;
    }

  FUNC_4 (FUNC_1 (VAR_9) == VAR_1);

  VAR_2.tbaa_queries++;


  if (!FUNC_3 (VAR_5, VAR_7))
    {
      VAR_2.alias_noalias++;
      VAR_2.tbaa_resolved++;
      return 0;
    }
  if ((VAR_5 != 0) && (VAR_7 != 0))
    {
      tree VAR_10 = FUNC_2 (VAR_4);
      tree VAR_11 = FUNC_2 (VAR_6);



      if ((!VAR_8) &&
   FUNC_6 (VAR_11) >= 0)
 {
   int VAR_12 = 0;





   while (FUNC_0 (VAR_10))

     {
       VAR_10 = FUNC_2 (VAR_10);
       VAR_12++;
     }





   if (VAR_12 > 0)
     {
       VAR_2.structnoaddress_queries++;
       if (FUNC_5 (VAR_11,
           FUNC_2 (VAR_4)))
  {
    VAR_2.structnoaddress_resolved++;
    VAR_2.alias_noalias++;
    return 0;
  }
     }
   else if (VAR_12 == 0)
     {


       VAR_2.structnoaddress_queries++;
       VAR_2.structnoaddress_resolved++;
       VAR_2.alias_noalias++;
       return 0;
     }
 }
    }

  VAR_2.alias_mayalias++;
  return 1;
}
