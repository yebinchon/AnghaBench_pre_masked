
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_5__ {int ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int const*,int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int const) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_5,
                  const u_char *VAR_6, const u_int VAR_7)
{
 const u_char *VAR_8 = VAR_6 + VAR_7;
 uint16_t VAR_9;

 if (VAR_7 < VAR_1)
  goto invalid;

 FUNC_2(*VAR_6, 2);
 FUNC_1((VAR_5, "\n\tBuffer Count: %u", FUNC_0(VAR_6)));
 VAR_6 += 2;

 FUNC_2(*VAR_6, 2);
 FUNC_1((VAR_5, ", Firmware Version: %u", FUNC_0(VAR_6)));
 VAR_6 += 2;

 FUNC_2(*VAR_6, 1);
 FUNC_1((VAR_5, ", Sector Count: %u", *VAR_6));
 VAR_6 += 1;

 FUNC_2(*VAR_6, 1);
 FUNC_1((VAR_5, ", AoE: %u, CCmd: %s", (*VAR_6 & 0xF0) >> 4,
           FUNC_4(VAR_2, "Unknown (0x02x)", *VAR_6 & 0x0F)));
 VAR_6 += 1;

 FUNC_2(*VAR_6, 2);
 VAR_9 = FUNC_0(VAR_6);
 VAR_6 += 2;
 if (VAR_9 > VAR_0 || VAR_1 + VAR_9 > VAR_7)
  goto invalid;

 FUNC_2(*VAR_6, VAR_9);
 if (VAR_9) {
  FUNC_1((VAR_5, "\n\tConfig String (length %u): ", VAR_9));
  if (FUNC_3(VAR_5, VAR_6, VAR_9, VAR_5->ndo_snapend))
   goto trunc;
 }
 return;

invalid:
 FUNC_1((VAR_5, "%s", VAR_3));
 FUNC_2(*VAR_6, VAR_8 - VAR_6);
 return;
trunc:
 FUNC_1((VAR_5, "%s", VAR_4));
}
