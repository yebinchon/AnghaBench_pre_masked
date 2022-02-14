
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int am_flags; TYPE_2__* am_al; struct TYPE_9__* am_child; struct TYPE_9__* am_ysib; struct TYPE_9__* am_osib; struct TYPE_9__* am_parent; } ;
typedef TYPE_3__ am_node ;
struct TYPE_8__ {TYPE_1__* al_mnt; } ;
struct TYPE_7__ {int mf_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;

void
FUNC_0(am_node *VAR_4, am_node *VAR_5)
{




  if (VAR_5 == VAR_3)
    VAR_4->am_flags |= VAR_1;



  VAR_4->am_parent = VAR_5;
  VAR_4->am_osib = VAR_5->am_child;
  if (VAR_4->am_osib)
    VAR_4->am_osib->am_ysib = VAR_4;
  VAR_5->am_child = VAR_4;




}
