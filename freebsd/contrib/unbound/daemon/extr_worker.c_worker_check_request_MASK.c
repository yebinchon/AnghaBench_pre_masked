
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct worker {TYPE_2__* daemon; } ;
typedef int sldns_buffer ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {scalar_t__ harden_large_queries; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (struct worker*,int ) ;

__attribute__((used)) static int
FUNC_12(sldns_buffer* VAR_7, struct worker* VAR_8)
{
 if(FUNC_9(VAR_7) < VAR_0) {
  FUNC_10(VAR_6, "request too short, discarded");
  return -1;
 }
 if(FUNC_9(VAR_7) > VAR_5 &&
  VAR_8->daemon->cfg->harden_large_queries) {
  FUNC_10(VAR_6, "request too large, discarded");
  return -1;
 }
 if(FUNC_5(FUNC_8(VAR_7))) {
  FUNC_10(VAR_6, "request has QR bit on, discarded");
  return -1;
 }
 if(FUNC_7(FUNC_8(VAR_7))) {
  FUNC_6(FUNC_8(VAR_7));
  FUNC_10(VAR_6, "request bad, has TC bit on");
  return FUNC_11(VAR_8, VAR_3);
 }
 if(FUNC_3(FUNC_8(VAR_7)) != VAR_2 &&
  FUNC_3(FUNC_8(VAR_7)) != VAR_1) {
  FUNC_10(VAR_6, "request unknown opcode %d",
   FUNC_3(FUNC_8(VAR_7)));
  return FUNC_11(VAR_8, VAR_4);
 }
 if(FUNC_4(FUNC_8(VAR_7)) != 1) {
  FUNC_10(VAR_6, "request wrong nr qd=%d",
   FUNC_4(FUNC_8(VAR_7)));
  return FUNC_11(VAR_8, VAR_3);
 }
 if(FUNC_0(FUNC_8(VAR_7)) != 0 &&
  (FUNC_0(FUNC_8(VAR_7)) != 1 ||
  FUNC_3(FUNC_8(VAR_7)) != VAR_1)) {
  FUNC_10(VAR_6, "request wrong nr an=%d",
   FUNC_0(FUNC_8(VAR_7)));
  return FUNC_11(VAR_8, VAR_3);
 }
 if(FUNC_2(FUNC_8(VAR_7)) != 0) {
  FUNC_10(VAR_6, "request wrong nr ns=%d",
   FUNC_2(FUNC_8(VAR_7)));
  return FUNC_11(VAR_8, VAR_3);
 }
 if(FUNC_1(FUNC_8(VAR_7)) > 1) {
  FUNC_10(VAR_6, "request wrong nr ar=%d",
   FUNC_1(FUNC_8(VAR_7)));
  return FUNC_11(VAR_8, VAR_3);
 }
 return 0;
}
