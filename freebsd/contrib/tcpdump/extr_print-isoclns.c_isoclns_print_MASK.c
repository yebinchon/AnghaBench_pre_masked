
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct TYPE_12__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (TYPE_1__*,int const*,int) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int const*,int ) ;
 int FUNC_5 (TYPE_1__*,int const*,int ) ;
 int FUNC_6 (TYPE_1__*,int const*,int) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_1__*,int const*,int ) ;
 int FUNC_8 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_9 (TYPE_1__*,int const*,int ) ;
 int FUNC_10 (int ,char*,int const) ;

void
FUNC_11(netdissect_options *VAR_1, const uint8_t *VAR_2, u_int VAR_3)
{
 if (!FUNC_1(*VAR_2)) {
  FUNC_0((VAR_1, "|OSI"));
  return;
 }

 if (VAR_1->ndo_eflag)
  FUNC_0((VAR_1, "OSI NLPID %s (0x%02x): ", FUNC_10(VAR_0, "Unknown", *VAR_2), *VAR_2));

 switch (*VAR_2) {

 case 135:
  if (!FUNC_2(VAR_1, VAR_2, VAR_3))
   FUNC_8(VAR_1, VAR_2, "\n\t", VAR_3);
  break;

 case 134:
  FUNC_3(VAR_1, VAR_2, VAR_3);
  return;

 case 131:
  if (!FUNC_6(VAR_1, VAR_2, VAR_3))
   FUNC_8(VAR_1, VAR_2, "\n\t", VAR_3);
  break;

 case 130:
  FUNC_0((VAR_1, "%slength: %u", VAR_1->ndo_eflag ? "" : ", ", VAR_3));
  break;

 case 128:
  FUNC_9(VAR_1, VAR_2 + 1, VAR_3 - 1);
  break;

 case 133:
  FUNC_5(VAR_1, VAR_2 + 1, VAR_3 - 1);
  break;

 case 132:
  FUNC_4(VAR_1, VAR_2 + 1, VAR_3 - 1);
  break;

 case 129:
  FUNC_7(VAR_1, VAR_2 + 1, VAR_3 - 1);
  break;

 default:
  if (!VAR_1->ndo_eflag)
   FUNC_0((VAR_1, "OSI NLPID 0x%02x unknown", *VAR_2));
  FUNC_0((VAR_1, "%slength: %u", VAR_1->ndo_eflag ? "" : ", ", VAR_3));
  if (VAR_3 > 1)
   FUNC_8(VAR_1, VAR_2, "\n\t", VAR_3);
  break;
 }
}
