
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int available_nodes_array_size; int* available_remote_nodes; } ;
typedef TYPE_1__ SCIC_REMOTE_NODE_TABLE_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_1(
   SCIC_REMOTE_NODE_TABLE_T * VAR_3,
   U32 VAR_4
)
{
   U32 VAR_5;
   U32 VAR_6;
   U32 VAR_7;
   U32 VAR_8;

   FUNC_0(
        (VAR_3->available_nodes_array_size * VAR_1)
      > (VAR_4 / VAR_2)
   );

   VAR_5 = VAR_4 / VAR_0;
   VAR_6 = VAR_4 % VAR_0;
   VAR_7 = (VAR_6 / VAR_2) * sizeof(U32);
   VAR_8 = VAR_4 % VAR_2;

   VAR_3->available_remote_nodes[VAR_5] |=
      1 << (VAR_7 + VAR_8);
}
