
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct mgmt_header_t {int duration; } ;
struct meshcntl_t {int flags; int addr6; int addr5; int addr4; int seq; int ttl; } ;
struct TYPE_8__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;



 int FUNC_11 (TYPE_1__*,int ,int const*) ;
 int FUNC_12 (TYPE_1__*,int ,int const*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int const*) ;

__attribute__((used)) static void
FUNC_15(netdissect_options *VAR_1,
                      uint16_t VAR_2, const u_char *VAR_3, u_int VAR_4,
                      u_int VAR_5)
{
 if (VAR_1->ndo_vflag) {
  if (FUNC_2(VAR_2))
   FUNC_10((VAR_1, "More Data "));
  if (FUNC_3(VAR_2))
   FUNC_10((VAR_1, "More Fragments "));
  if (FUNC_5(VAR_2))
   FUNC_10((VAR_1, "Pwr Mgmt "));
  if (FUNC_7(VAR_2))
   FUNC_10((VAR_1, "Retry "));
  if (FUNC_4(VAR_2))
   FUNC_10((VAR_1, "Strictly Ordered "));
  if (FUNC_6(VAR_2))
   FUNC_10((VAR_1, "Protected "));
  if (FUNC_9(VAR_2) != 130 || FUNC_8(VAR_2) != VAR_0)
   FUNC_10((VAR_1, "%dus ",
       FUNC_0(
           &((const struct mgmt_header_t *)VAR_3)->duration)));
 }
 if (VAR_5 != 0) {
  const struct meshcntl_t *VAR_6 =
      (const struct meshcntl_t *)&VAR_3[VAR_4 - VAR_5];
  int VAR_7 = VAR_6->flags & 3;

  FUNC_10((VAR_1, "MeshData (AE %d TTL %u seq %u", VAR_7, VAR_6->ttl,
      FUNC_1(VAR_6->seq)));
  if (VAR_7 > 0)
   FUNC_10((VAR_1, " A4:%s", FUNC_13(VAR_1, VAR_6->addr4)));
  if (VAR_7 > 1)
   FUNC_10((VAR_1, " A5:%s", FUNC_13(VAR_1, VAR_6->addr5)));
  if (VAR_7 > 2)
   FUNC_10((VAR_1, " A6:%s", FUNC_13(VAR_1, VAR_6->addr6)));
  FUNC_10((VAR_1, ") "));
 }

 switch (FUNC_9(VAR_2)) {
 case 128:
  FUNC_14(VAR_1, VAR_3);
  break;
 case 130:
  FUNC_11(VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  FUNC_12(VAR_1, VAR_2, VAR_3);
  break;
 default:
  break;
 }
}
