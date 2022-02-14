
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum SPA_mapping_type { ____Placeholder_SPA_mapping_type } SPA_mapping_type ;
struct TYPE_3__ {int u_usr_acc; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

bool
FUNC_1(enum SPA_mapping_type VAR_1)
{

 if ((int)VAR_1 < 0 || VAR_1 >= FUNC_0(VAR_0))
  return (0);
 return (VAR_0[VAR_1].u_usr_acc);
}
