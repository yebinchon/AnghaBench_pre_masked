
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_5__* path; int status; int func_code; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct TYPE_10__ {TYPE_3__* bus; } ;
struct TYPE_9__ {TYPE_2__* ops; } ;
struct TYPE_8__ {TYPE_4__* xport; } ;
struct TYPE_7__ {int (* action ) (union ccb*) ;} ;


 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(union ccb *VAR_2)
{

 FUNC_0(VAR_2->ccb_h.path, VAR_0,
     ("xpt_action: func %#x %s\n", VAR_2->ccb_h.func_code,
  FUNC_2(VAR_2->ccb_h.func_code)));

 VAR_2->ccb_h.status = VAR_1;
 (*(VAR_2->ccb_h.path->bus->xport->ops->action))(VAR_2);
}
