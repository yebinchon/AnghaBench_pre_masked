
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgraph_varpool_node {int decl; int finalized; } ;
typedef enum availability { ____Placeholder_availability } availability ;
struct TYPE_2__ {int (* binds_local_p ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_4 ;

enum availability
FUNC_4 (struct cgraph_varpool_node *VAR_5)
{
  FUNC_2 (VAR_3);
  if (!VAR_5->finalized)
    return VAR_1;
  if (!FUNC_1 (VAR_5->decl))
    return VAR_0;



  if (!(*VAR_4.binds_local_p) (VAR_5->decl) && !FUNC_0 (VAR_5->decl))
    return VAR_2;
  return VAR_0;
}
