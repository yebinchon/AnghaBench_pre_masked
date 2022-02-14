
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int basic_block ;
struct TYPE_2__ {int removed_phis; int total_phis; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void
FUNC_6 (basic_block VAR_6)
{
  tree VAR_7, VAR_8;

  VAR_7 = VAR_0;
  VAR_8 = FUNC_3 (VAR_6);
  while (VAR_8)
    {
      VAR_5.total_phis++;

      if (! FUNC_0 (VAR_8))
 {
   tree VAR_9 = FUNC_1 (VAR_8);

   if (VAR_3 && (VAR_4 & VAR_1))
     {
       FUNC_2 (VAR_3, "Deleting : ");
       FUNC_4 (VAR_3, VAR_8, VAR_2);
       FUNC_2 (VAR_3, "\n");
     }

   FUNC_5 (VAR_8, VAR_7);
   VAR_5.removed_phis++;
   VAR_8 = VAR_9;
 }
      else
 {
   VAR_7 = VAR_8;
   VAR_8 = FUNC_1 (VAR_8);
 }
    }
}
