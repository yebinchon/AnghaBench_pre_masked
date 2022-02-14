
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;




 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int const) ;
 int VAR_3 ;

__attribute__((used)) static const u_char *
FUNC_5(netdissect_options *VAR_4,
                       const u_char *VAR_5, const u_char *VAR_6, const u_int VAR_7)
{
 const u_char *VAR_8 = VAR_5;
 uint32_t VAR_9, VAR_10;

 if (VAR_7 < 4)
  goto invalid;

 FUNC_2(*VAR_5, 4);
 VAR_9 = FUNC_0(VAR_5);
 VAR_5 += 4;
 FUNC_1((VAR_4, "\n\t  subtype %s", FUNC_4(VAR_0, "unknown (0x%08x)", VAR_9)));
 switch (VAR_9) {
 case 129:
  if (VAR_7 != 16)
   goto invalid;

  FUNC_2(*VAR_5, 4);
  FUNC_1((VAR_4, ", dest_port %u", FUNC_0(VAR_5)));
  VAR_5 += 4;

  FUNC_2(*VAR_5, 4);
  VAR_10 = FUNC_0(VAR_5);
  VAR_5 += 4;
  switch (VAR_10 >> 16) {
  case 0:
   FUNC_1((VAR_4, ", vlan_tag none"));
   break;
  case 128:
   FUNC_1((VAR_4, ", vlan_tag 802.1Q (%s)", FUNC_3(VAR_10 & 0xffff)));
   break;
  default:
   FUNC_1((VAR_4, ", vlan_tag unknown (0x%04x)", VAR_10 >> 16));
  }

  FUNC_2(*VAR_5, 1);
  FUNC_1((VAR_4, ", copy_stage %s", FUNC_4(VAR_1, "unknown (%u)", *VAR_5)));
  VAR_5 += 1;

  FUNC_2(*VAR_5, 3);
  VAR_5 += 3;
  break;
 default:
  FUNC_2(*VAR_5, VAR_7 - 4);
  VAR_5 += VAR_7 - 4;
 }

 return VAR_5;

invalid:
 FUNC_1((VAR_4, "%s", VAR_2));
 FUNC_2(*VAR_8, VAR_7);
 return VAR_8 + VAR_7;
trunc:
 FUNC_1((VAR_4, "%s", VAR_3));
 return VAR_6;
}
