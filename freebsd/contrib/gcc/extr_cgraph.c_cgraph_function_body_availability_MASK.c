
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ externally_visible; scalar_t__ local; } ;
struct cgraph_node {int decl; TYPE_1__ local; int analyzed; } ;
typedef enum availability { ____Placeholder_availability } availability ;
struct TYPE_4__ {int (* binds_local_p ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_5 ;

enum availability
FUNC_4 (struct cgraph_node *VAR_6)
{
  enum availability VAR_7;
  FUNC_2 (VAR_4);
  if (!VAR_6->analyzed)
    VAR_7 = VAR_2;
  else if (VAR_6->local.local)
    VAR_7 = VAR_1;
  else if (VAR_6->local.externally_visible)
    VAR_7 = VAR_0;
  else if (!(*VAR_5.binds_local_p) (VAR_6->decl)
    && !FUNC_0 (VAR_6->decl) && !FUNC_1 (VAR_6->decl))
    VAR_7 = VAR_3;
  else VAR_7 = VAR_0;

  return VAR_7;
}
