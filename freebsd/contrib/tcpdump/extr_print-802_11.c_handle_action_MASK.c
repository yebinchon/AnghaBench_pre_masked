
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_5__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (TYPE_1__*,int const*) ;

__attribute__((used)) static int
FUNC_8(netdissect_options *VAR_0,
              const uint8_t *VAR_1, const u_char *VAR_2, u_int VAR_3)
{
 if (!FUNC_1(*VAR_2, 2))
  return 0;
 if (VAR_3 < 2)
  return 0;
 if (VAR_0->ndo_eflag) {
  FUNC_0((VAR_0, ": "));
 } else {
  FUNC_0((VAR_0, " (%s): ", FUNC_7(VAR_0, VAR_1)));
 }
 switch (VAR_2[0]) {
 case 0: FUNC_0((VAR_0, "Spectrum Management Act#%d", VAR_2[1])); break;
 case 1: FUNC_0((VAR_0, "QoS Act#%d", VAR_2[1])); break;
 case 2: FUNC_0((VAR_0, "DLS Act#%d", VAR_2[1])); break;
 case 3: FUNC_0((VAR_0, "BA ")); FUNC_2(VAR_2[1]); break;
 case 7: FUNC_0((VAR_0, "HT ")); FUNC_3(VAR_2[1]); break;
 case 13: FUNC_0((VAR_0, "MeshAction ")); FUNC_4(VAR_2[1]); break;
 case 14:
  FUNC_0((VAR_0, "MultiohopAction "));
  FUNC_5(VAR_2[1]); break;
 case 15:
  FUNC_0((VAR_0, "SelfprotectAction "));
  FUNC_6(VAR_2[1]); break;
 case 127: FUNC_0((VAR_0, "Vendor Act#%d", VAR_2[1])); break;
 default:
  FUNC_0((VAR_0, "Reserved(%d) Act#%d", VAR_2[0], VAR_2[1]));
  break;
 }
 return 1;
}
