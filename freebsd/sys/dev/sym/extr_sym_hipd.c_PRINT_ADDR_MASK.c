
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* ccb_p ;
struct TYPE_7__ {TYPE_2__* cam_ccb; } ;
struct TYPE_5__ {int path; } ;
struct TYPE_6__ {TYPE_1__ ccb_h; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1 (ccb_p VAR_0)
{
 if (VAR_0 && VAR_0->cam_ccb)
  FUNC_0(VAR_0->cam_ccb->ccb_h.path);
}
