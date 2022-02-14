
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int group_array_size; int** remote_node_groups; } ;
typedef TYPE_1__ SCIC_REMOTE_NODE_TABLE_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static
void FUNC_1(
   SCIC_REMOTE_NODE_TABLE_T * VAR_1,
   U32 VAR_2,
   U32 VAR_3
)
{
   U32 VAR_4;
   U32 VAR_5;
   U32 * VAR_6;

   FUNC_0(VAR_2 < VAR_0);
   FUNC_0(VAR_3 < (U32)(VAR_1->group_array_size * 32));

   VAR_4 = VAR_3 / 32;
   VAR_5 = VAR_3 % 32;
   VAR_6 = VAR_1->remote_node_groups[VAR_2];

   VAR_6[VAR_4] = VAR_6[VAR_4] | (1 << VAR_5);
}
