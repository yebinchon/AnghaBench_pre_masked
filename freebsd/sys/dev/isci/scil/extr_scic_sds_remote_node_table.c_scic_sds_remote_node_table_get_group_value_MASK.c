
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
typedef size_t U32 ;
struct TYPE_3__ {size_t* available_remote_nodes; } ;
typedef TYPE_1__ SCIC_REMOTE_NODE_TABLE_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static
U8 FUNC_0(
   SCIC_REMOTE_NODE_TABLE_T * VAR_2,
   U32 VAR_3
)
{
   U32 VAR_4;
   U32 VAR_5;
   U32 VAR_6;

   VAR_4 = VAR_3 / VAR_0;
   VAR_5 = VAR_3 % VAR_0;

   VAR_6 = VAR_2->available_remote_nodes[VAR_4];
   VAR_6 &= (VAR_1 << (VAR_5 * 4));
   VAR_6 = VAR_6 >> (VAR_5 * 4);

   return (U8)VAR_6;
}
