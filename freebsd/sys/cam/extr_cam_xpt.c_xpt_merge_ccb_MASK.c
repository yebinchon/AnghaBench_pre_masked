
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int timeout; int func_code; int retry_count; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct ccb_hdr {int dummy; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

void
FUNC_1(union ccb *VAR_0, union ccb *VAR_1)
{





 VAR_0->ccb_h.retry_count = VAR_1->ccb_h.retry_count;
 VAR_0->ccb_h.func_code = VAR_1->ccb_h.func_code;
 VAR_0->ccb_h.timeout = VAR_1->ccb_h.timeout;
 VAR_0->ccb_h.flags = VAR_1->ccb_h.flags;
 FUNC_0(&(&VAR_1->ccb_h)[1], &(&VAR_0->ccb_h)[1],
       sizeof(union ccb) - sizeof(struct ccb_hdr));
}
