
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct m3ua_param_header {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int const*,int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_3,
                const u_char *VAR_4, const u_int VAR_5)
{
  const u_char *VAR_6 = VAR_4;
  int VAR_7;
  uint16_t VAR_8;
  uint16_t VAR_9;

  while (VAR_6 < VAR_4 + VAR_5) {
    if (VAR_6 + sizeof(struct m3ua_param_header) > VAR_4 + VAR_5)
      goto invalid;
    FUNC_2(*VAR_6, sizeof(struct m3ua_param_header));

    VAR_8 = FUNC_0(VAR_6);
    FUNC_1((VAR_3, "\n\t\t\t%s: ", FUNC_4(VAR_0, "Unknown Parameter (0x%04x)", VAR_8)));

    VAR_9 = FUNC_0(VAR_6 + 2);
    if (VAR_9 < sizeof(struct m3ua_param_header))
      goto invalid;

    VAR_7 = (VAR_6 + VAR_9 - VAR_4) % 4;
    VAR_7 = VAR_7 ? 4 - VAR_7 : 0;
    FUNC_2(*VAR_6, VAR_9 + VAR_7);
    FUNC_3(VAR_3, VAR_6, VAR_8, VAR_9 - sizeof(struct m3ua_param_header));
    VAR_6 += VAR_9 + VAR_7;
  }
  return;

invalid:
  FUNC_1((VAR_3, "%s", VAR_1));
  FUNC_2(*VAR_4, VAR_5);
  return;
trunc:
  FUNC_1((VAR_3, "%s", VAR_2));
}
