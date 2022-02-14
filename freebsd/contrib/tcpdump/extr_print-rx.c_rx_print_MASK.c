
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int u_char ;
struct rx_header {scalar_t__ type; int flags; int seq; int serviceId; scalar_t__ securityIndex; int serial; int callNumber; int cid; } ;
struct ip {int dummy; } ;
struct TYPE_21__ {int ndo_vflag; int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;
typedef int int32_t ;
struct TYPE_22__ {int flag; scalar_t__ packetType; int s; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;


 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 int FUNC_3 (TYPE_1__*,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int const*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int const*,int) ;
 int FUNC_6 (TYPE_1__*,int const*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int const*,int) ;
 int FUNC_8 (TYPE_1__*,int const*,int,int ) ;
 int FUNC_9 (TYPE_1__*,int const*,int) ;
 int FUNC_10 (TYPE_1__*,int const*,int,int ) ;
 int FUNC_11 (TYPE_1__*,int const*,int) ;
 int FUNC_12 (TYPE_1__*,int const*,int,int ) ;
 int FUNC_13 (TYPE_1__*,int const*,int) ;
 scalar_t__ FUNC_14 (struct rx_header const*,struct ip const*,int,int *) ;
 int FUNC_15 (TYPE_1__*,int const*,struct ip const*,int) ;
 TYPE_7__* VAR_5 ;
 int VAR_6 ;
 int FUNC_16 (int ,char*,scalar_t__) ;
 int FUNC_17 (TYPE_1__*,int const*,int) ;
 int FUNC_18 (TYPE_1__*,int const*,int,int ) ;
 int FUNC_19 (TYPE_1__*,int const*,int) ;
 int FUNC_20 (TYPE_1__*,int const*,int,int ) ;

void
FUNC_21(netdissect_options *VAR_7,
         register const u_char *VAR_8, int VAR_9, int VAR_10, int VAR_11,
         const u_char *VAR_12)
{
 register const struct rx_header *VAR_13;
 int VAR_14;
 int32_t VAR_15;

 if (VAR_7->ndo_snapend - VAR_8 < (int)sizeof (struct rx_header)) {
  FUNC_2((VAR_7, " [|rx] (%d)", VAR_9));
  return;
 }

 VAR_13 = (const struct rx_header *) VAR_8;

 FUNC_2((VAR_7, " rx %s", FUNC_16(VAR_6, "type %d", VAR_13->type)));

 if (VAR_7->ndo_vflag) {
  int VAR_16 = 0;

  if (VAR_7->ndo_vflag > 1)
   FUNC_2((VAR_7, " cid %08x call# %d",
          (int) FUNC_1(&VAR_13->cid),
          (int) FUNC_1(&VAR_13->callNumber)));

  FUNC_2((VAR_7, " seq %d ser %d",
         (int) FUNC_1(&VAR_13->seq),
         (int) FUNC_1(&VAR_13->serial)));

  if (VAR_7->ndo_vflag > 2)
   FUNC_2((VAR_7, " secindex %d serviceid %hu",
    (int) VAR_13->securityIndex,
    FUNC_0(&VAR_13->serviceId)));

  if (VAR_7->ndo_vflag > 1)
   for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
    if (VAR_13->flags & VAR_5[VAR_14].flag &&
        (!VAR_5[VAR_14].packetType ||
         VAR_13->type == VAR_5[VAR_14].packetType)) {
     if (!VAR_16) {
      VAR_16 = 1;
      FUNC_2((VAR_7, " "));
     } else {
      FUNC_2((VAR_7, ","));
     }
     FUNC_2((VAR_7, "<%s>", VAR_5[VAR_14].s));
    }
   }
 }
 if (VAR_13->type == VAR_4 &&
     FUNC_1(&VAR_13->seq) == 1 &&
     VAR_13->flags & VAR_1) {






  FUNC_15(VAR_7, VAR_8, (const struct ip *) VAR_12, VAR_11);

  switch (VAR_11) {
   case 132:
    FUNC_7(VAR_7, VAR_8, VAR_9);
    break;
   case 133:
    FUNC_5(VAR_7, VAR_8, VAR_9);
    break;
   case 130:
    FUNC_11(VAR_7, VAR_8, VAR_9);
    break;
   case 129:
    FUNC_17(VAR_7, VAR_8, VAR_9);
    break;
   case 131:
    FUNC_9(VAR_7, VAR_8, VAR_9);
    break;
   case 128:
    FUNC_19(VAR_7, VAR_8, VAR_9);
    break;
   case 134:
    FUNC_3(VAR_7, VAR_8, VAR_9);
    break;
   default:
    ;
  }
 } else if (((VAR_13->type == VAR_4 &&
     FUNC_1(&VAR_13->seq) == 1) ||
      VAR_13->type == VAR_2) &&
     (VAR_13->flags & VAR_1) == 0 &&
     FUNC_14(VAR_13, (const struct ip *) VAR_12,
     VAR_10, &VAR_15)) {

  switch (VAR_10) {
   case 132:
    FUNC_8(VAR_7, VAR_8, VAR_9, VAR_15);
    break;
   case 133:
    FUNC_6(VAR_7, VAR_8, VAR_9, VAR_15);
    break;
   case 130:
    FUNC_12(VAR_7, VAR_8, VAR_9, VAR_15);
    break;
   case 129:
    FUNC_18(VAR_7, VAR_8, VAR_9, VAR_15);
    break;
   case 131:
    FUNC_10(VAR_7, VAR_8, VAR_9, VAR_15);
    break;
   case 128:
    FUNC_20(VAR_7, VAR_8, VAR_9, VAR_15);
    break;
   case 134:
    FUNC_4(VAR_7, VAR_8, VAR_9, VAR_15);
    break;
   default:
    ;
  }







 } else if (VAR_13->type == VAR_3)
  FUNC_13(VAR_7, VAR_8, VAR_9);


 FUNC_2((VAR_7, " (%d)", VAR_9));
}
