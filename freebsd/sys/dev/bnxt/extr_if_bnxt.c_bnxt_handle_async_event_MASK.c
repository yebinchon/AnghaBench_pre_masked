
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ifmediareq {int dummy; } ;
struct hwrm_async_event_cmpl {int event_id; } ;
struct cmpl_base {int dummy; } ;
struct bnxt_softc {int dev; int ctx; } ;
 int FUNC_0 (int ,struct ifmediareq*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bnxt_softc *VAR_0, struct cmpl_base *VAR_1)
{
 struct hwrm_async_event_cmpl *VAR_2 = (void *)VAR_1;
 uint16_t VAR_3 = FUNC_2(VAR_2->event_id);
 struct ifmediareq VAR_4;

 switch (VAR_3) {
 case 135:
 case 136:
 case 138:
  FUNC_0(VAR_0->ctx, &VAR_4);
  break;
 case 139:
 case 143:
 case 131:
 case 137:
 case 141:
 case 142:
 case 133:
 case 134:
 case 129:
 case 128:
 case 132:
 case 130:
 case 140:
  FUNC_1(VAR_0->dev,
      "Unhandled async completion type %u\n", VAR_3);
  break;
 default:
  FUNC_1(VAR_0->dev,
      "Unknown async completion type %u\n", VAR_3);
  break;
 }
}
