
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int priority; } ;
struct TYPE_6__ {int status; TYPE_1__ pinfo; int func_code; } ;
union ccb {TYPE_3__ ccb_h; } ;
typedef int ccb ;
struct TYPE_5__ {int tqe; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (union ccb*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,union ccb**,int) ;

void
FUNC_5(union ccb *VAR_5, int VAR_6)
{
 if (VAR_1)
  FUNC_3("sending ccb (%#x)", VAR_5->ccb_h.func_code);
 VAR_5->ccb_h.pinfo.priority = VAR_6;
 if (FUNC_1(VAR_5)) {
  FUNC_0(&VAR_2, &VAR_5->ccb_h,
      VAR_3.tqe);
 }
 if (FUNC_4(VAR_4, &VAR_5, sizeof(VAR_5)) != sizeof(VAR_5)) {
  FUNC_2("write ccb");
  VAR_5->ccb_h.status = VAR_0;
 }
}
