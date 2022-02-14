
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int physical_port_index; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

BOOL FUNC_0(
   SCIC_SDS_PORT_T *VAR_2,
   U32 VAR_3
)
{
   if (VAR_2->physical_port_index == 0)
   {
      if ( ((VAR_3 & 0x0F) == 0x0F)
         || ((VAR_3 & 0x03) == 0x03)
         || ((VAR_3 & 0x01) == 0x01)
         || (VAR_3 == 0) )
         return VAR_1;
   }
   else if (VAR_2->physical_port_index == 1)
   {
      if ( ((VAR_3 & 0x02) == 0x02)
         || (VAR_3 == 0) )
         return VAR_1;
   }
   else if (VAR_2->physical_port_index == 2)
   {
      if ( ((VAR_3 & 0x0C) == 0x0C)
         || ((VAR_3 & 0x04) == 0x04)
         || (VAR_3 == 0) )
         return VAR_1;
   }
   else if (VAR_2->physical_port_index == 3)
   {
      if ( ((VAR_3 & 0x08) == 0x08)
         || (VAR_3 == 0) )
         return VAR_1;
   }

   return VAR_0;
}
