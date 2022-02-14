
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int const u_int ;
typedef int u_char ;
struct m3ua_param_header {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;



 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int const) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_2,
                const u_char *VAR_3, const uint16_t VAR_4, const uint16_t VAR_5)
{
  switch (VAR_4) {
  case 129:
  case 128:
  case 130:

    if (VAR_5 < 4)
      goto invalid;
    FUNC_2(*VAR_3, VAR_5);
    FUNC_1((VAR_2, "0x%08x", FUNC_0(VAR_3)));
    break;

  default:
    FUNC_1((VAR_2, "(length %u)", VAR_5 + (u_int)sizeof(struct m3ua_param_header)));
    FUNC_2(*VAR_3, VAR_5);
  }
  return;

invalid:
  FUNC_1((VAR_2, "%s", VAR_0));
  FUNC_2(*VAR_3, VAR_5);
  return;
trunc:
  FUNC_1((VAR_2, "%s", VAR_1));
}
