
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int *,int const*,int const) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(netdissect_options *VAR_2,
          const u_char *VAR_3, const u_int VAR_4)
{
 const u_char *VAR_5 = VAR_3 + VAR_4;
 uint8_t VAR_6;

 FUNC_0((VAR_2, "AoE length %u", VAR_4));

 if (VAR_4 < 1)
  goto invalid;

 FUNC_1(*VAR_3, 1);
 VAR_6 = (*VAR_3 & 0xF0) >> 4;

 FUNC_0((VAR_2, ", Ver %u", VAR_6));

 switch (VAR_6) {
  case 128:
   FUNC_2(VAR_2, VAR_3, VAR_4);
   break;
 }
 return;

invalid:
 FUNC_0((VAR_2, "%s", VAR_0));
 FUNC_1(*VAR_3, VAR_5 - VAR_3);
 return;
trunc:
 FUNC_0((VAR_2, "%s", VAR_1));
}
