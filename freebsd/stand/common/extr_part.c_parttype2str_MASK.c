
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum partition_type { ____Placeholder_partition_type } partition_type ;
struct TYPE_3__ {int type; char const* desc; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char *
FUNC_1(enum partition_type VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].type == VAR_1)
   return (VAR_0[VAR_2].desc);
 return (VAR_0[0].desc);
}
