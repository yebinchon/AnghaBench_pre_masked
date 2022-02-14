
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int const) ;
 int FUNC_3 (int *,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_4, const u_char *VAR_5, const u_int VAR_6)
{
 const u_char *VAR_7 = VAR_5 + VAR_6;
 uint16_t VAR_8;

 if (VAR_6 < 2)
  goto invalid;

 FUNC_2(*VAR_5, 2);
 VAR_8 = FUNC_0(VAR_5);
 VAR_5 += 2;
 FUNC_1((VAR_4, ", %s", FUNC_4(VAR_1, " invalid (%u)", VAR_8)));

 switch (VAR_8) {
  case 128:
   if (VAR_6 < 4)
    goto invalid;

   FUNC_2(*VAR_5, 2);
   FUNC_1((VAR_4, ", receipt number %u", FUNC_0(VAR_5)));
   VAR_5 += 2;

   FUNC_1((VAR_4, ", data (%u octets)", VAR_6 - 4));
   FUNC_2(*VAR_5, VAR_6 - 4);
   break;
  case 129:
   if (VAR_6 < 8)
    goto invalid;

   FUNC_2(*VAR_5, VAR_0);
   FUNC_1((VAR_4, ", forwarding address %s", FUNC_3(VAR_4, VAR_5)));
   VAR_5 += VAR_0;

   FUNC_1((VAR_4, ", data (%u octets)", VAR_6 - 8));
   FUNC_2(*VAR_5, VAR_6 - 8);
   break;
  default:
   FUNC_2(*VAR_5, VAR_6 - 2);
   break;
 }
 return;

invalid:
 FUNC_1((VAR_4, "%s", VAR_2));
 FUNC_2(*VAR_5, VAR_7 - VAR_5);
 return;
trunc:
 FUNC_1((VAR_4, "%s", VAR_3));
}
