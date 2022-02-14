
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int const*,int const) ;
 int VAR_1 ;

void
FUNC_4(netdissect_options *VAR_2, const u_char *VAR_3, const u_int VAR_4)
{
 const u_char *VAR_5 = VAR_3 + VAR_4;
 uint16_t VAR_6;

 FUNC_1((VAR_2, "Loopback"));
 if (VAR_4 < 2)
  goto invalid;

 FUNC_2(*VAR_3, 2);
 VAR_6 = FUNC_0(VAR_3);
 VAR_3 += 2;
 FUNC_1((VAR_2, ", skipCount %u", VAR_6));
 if (VAR_6 % 8)
  FUNC_1((VAR_2, " (bogus)"));
 if (VAR_6 > VAR_4 - 2)
  goto invalid;
 FUNC_3(VAR_2, VAR_3 + VAR_6, VAR_4 - 2 - VAR_6);
 return;

invalid:
 FUNC_1((VAR_2, "%s", VAR_0));
 FUNC_2(*VAR_3, VAR_5 - VAR_3);
 return;
trunc:
 FUNC_1((VAR_2, "%s", VAR_1));
}
