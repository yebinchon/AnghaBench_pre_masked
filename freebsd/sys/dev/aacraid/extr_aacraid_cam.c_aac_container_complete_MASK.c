
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
union ccb {TYPE_2__ ccb_h; } ;
typedef scalar_t__ u_int32_t ;
struct aac_command {int cm_flags; TYPE_1__* cm_fib; union ccb* cm_ccb; int cm_sc; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct aac_command*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (union ccb*) ;

__attribute__((used)) static void
FUNC_3(struct aac_command *VAR_8)
{
 union ccb *VAR_9;
 u_int32_t VAR_10;

 FUNC_1(VAR_8->cm_sc, VAR_5, "");
 VAR_9 = VAR_8->cm_ccb;
 VAR_10 = ((u_int32_t *)VAR_8->cm_fib->data)[0];

 if (VAR_8->cm_flags & VAR_0) {
  VAR_9->ccb_h.status = VAR_4;
 } else if (VAR_10 == VAR_7) {
  VAR_9->ccb_h.status = VAR_2;
 } else if (VAR_10 == VAR_6) {
  VAR_9->ccb_h.status = VAR_1;
 } else {
  VAR_9->ccb_h.status = VAR_3;
 }

 FUNC_0(VAR_8);
 FUNC_2(VAR_9);
}
