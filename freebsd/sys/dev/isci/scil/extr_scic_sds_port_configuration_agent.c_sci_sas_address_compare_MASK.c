
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ high; scalar_t__ low; } ;
typedef TYPE_1__ SCI_SAS_ADDRESS_T ;
typedef int S32 ;



__attribute__((used)) static
S32 FUNC_0(
   SCI_SAS_ADDRESS_T VAR_0,
   SCI_SAS_ADDRESS_T VAR_1
)
{
   if (VAR_0.high > VAR_1.high)
   {
      return 1;
   }
   else if (VAR_0.high < VAR_1.high)
   {
      return -1;
   }
   else if (VAR_0.low > VAR_1.low)
   {
      return 1;
   }
   else if (VAR_0.low < VAR_1.low)
   {
      return -1;
   }


   return 0;
}
