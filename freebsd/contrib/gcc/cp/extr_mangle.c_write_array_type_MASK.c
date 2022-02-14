
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int need_abi_warning; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__ const) ;
 scalar_t__ FUNC_3 (scalar_t__ const) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13 (const tree VAR_5)
{
  FUNC_9 ('A');
  if (FUNC_3 (VAR_5))
    {
      tree VAR_6;
      tree VAR_7;

      VAR_6 = FUNC_3 (VAR_5);


      VAR_7 = FUNC_4 (VAR_6);
      if (FUNC_0 (VAR_7) == VAR_1)
 {


   VAR_7 = FUNC_6 (VAR_2, VAR_7, VAR_4);
   FUNC_12 (FUNC_7 (VAR_7, 1));
 }
      else
 {
   VAR_7 = FUNC_1 (VAR_7, 0);
   if (!FUNC_5 (2))
     {


       ++VAR_3;
       if (!FUNC_8 (VAR_7))
  VAR_0.need_abi_warning = 1;
       --VAR_3;
     }
   FUNC_10 (VAR_7);
 }

    }
  FUNC_9 ('_');
  FUNC_11 (FUNC_2 (VAR_5));
}
