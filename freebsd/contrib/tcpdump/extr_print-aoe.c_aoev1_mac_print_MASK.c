
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int const*) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int const) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_7,
                const u_char *VAR_8, const u_int VAR_9)
{
 const u_char *VAR_10 = VAR_8 + VAR_9;
 uint8_t VAR_11, VAR_12;

 if (VAR_9 < VAR_0)
  goto invalid;

 FUNC_1(*VAR_8, 1);
 VAR_8 += 1;

 FUNC_1(*VAR_8, 1);
 FUNC_0((VAR_7, "\n\tMCmd: %s", FUNC_3(VAR_3, "Unknown (0x%02x)", *VAR_8)));
 VAR_8 += 1;

 FUNC_1(*VAR_8, 1);
 FUNC_0((VAR_7, ", MError: %s", FUNC_3(VAR_4, "Unknown (0x%02x)", *VAR_8)));
 VAR_8 += 1;

 FUNC_1(*VAR_8, 1);
 VAR_11 = *VAR_8;
 VAR_8 += 1;
 FUNC_0((VAR_7, ", Dir Count: %u", VAR_11));
 if (VAR_0 + VAR_11 * 8 > VAR_9)
  goto invalid;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {

  FUNC_1(*VAR_8, 1);
  VAR_8 += 1;

  FUNC_1(*VAR_8, 1);
  FUNC_0((VAR_7, "\n\t DCmd: %s", FUNC_3(VAR_2, "Unknown (0x%02x)", *VAR_8)));
  VAR_8 += 1;

  FUNC_1(*VAR_8, VAR_1);
  FUNC_0((VAR_7, ", Ethernet Address: %s", FUNC_2(VAR_7, VAR_8)));
  VAR_8 += VAR_1;
 }
 return;

invalid:
 FUNC_0((VAR_7, "%s", VAR_5));
 FUNC_1(*VAR_8, VAR_10 - VAR_8);
 return;
trunc:
 FUNC_0((VAR_7, "%s", VAR_6));
}
