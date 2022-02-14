
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* am_ysib; struct TYPE_7__* am_osib; TYPE_2__* am_parent; int am_path; scalar_t__ am_child; } ;
typedef TYPE_3__ am_node ;
struct TYPE_6__ {TYPE_3__* am_child; } ;
struct TYPE_5__ {TYPE_3__* am_osib; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_1(am_node *VAR_1)
{



  if (VAR_1->am_child && VAR_1->am_parent) {
    FUNC_0(VAR_0, "children of \"%s\" still exist - deleting anyway", VAR_1->am_path);
  }




  if (VAR_1->am_parent && VAR_1->am_parent->am_child == VAR_1)
    VAR_1->am_parent->am_child = VAR_1->am_osib;




  if (VAR_1->am_ysib)
    VAR_1->am_ysib->am_osib = VAR_1->am_osib;
  if (VAR_1->am_osib)
    VAR_1->am_osib->am_ysib = VAR_1->am_ysib;
}
