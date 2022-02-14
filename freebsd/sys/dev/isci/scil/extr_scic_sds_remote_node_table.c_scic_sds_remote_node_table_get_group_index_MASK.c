
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_3__ {size_t** remote_node_groups; size_t group_array_size; } ;
typedef TYPE_1__ SCIC_REMOTE_NODE_TABLE_T ;


 size_t VAR_0 ;

__attribute__((used)) static
U32 FUNC_0(
   SCIC_REMOTE_NODE_TABLE_T * VAR_1,
   U32 VAR_2
)
{
   U32 VAR_3;
   U32 * VAR_4;
   U32 VAR_5;

   VAR_4 = VAR_1->remote_node_groups[VAR_2];

   for (VAR_3 = 0; VAR_3 < VAR_1->group_array_size; VAR_3++)
   {
      if (VAR_4[VAR_3] != 0)
      {
         for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
         {
            if ((VAR_4[VAR_3] & (1 << VAR_5)) != 0)
            {
               return (VAR_3 * 32) + VAR_5;
            }
         }
      }
   }

   return VAR_0;
}
