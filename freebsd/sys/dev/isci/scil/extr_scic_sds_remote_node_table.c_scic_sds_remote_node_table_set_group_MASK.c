
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_3__ {size_t available_nodes_array_size; size_t* available_remote_nodes; } ;
typedef TYPE_1__ SCIC_REMOTE_NODE_TABLE_T ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static
void FUNC_1(
   SCIC_REMOTE_NODE_TABLE_T * VAR_3,
   U32 VAR_4
)
{
   U32 VAR_5;
   U32 VAR_6;
   U32 VAR_7;

   FUNC_0(
        (VAR_3->available_nodes_array_size * VAR_0)
      > (VAR_4 / VAR_2)
   );

   VAR_5 = VAR_4 / VAR_0;
   VAR_6 = VAR_4 % VAR_0;

   VAR_7 = VAR_3->available_remote_nodes[VAR_5];
   VAR_7 |= (VAR_1 << (VAR_6 * 4));
   VAR_3->available_remote_nodes[VAR_5] = VAR_7;
}
