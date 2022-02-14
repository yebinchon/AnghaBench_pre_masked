
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
 int FUNC_3 (int *,int const*,int const,int const*) ;
 int FUNC_4 (int *,int const*) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,int const) ;
 int VAR_3 ;

__attribute__((used)) static const u_char *
FUNC_6(netdissect_options *VAR_4,
                       const u_char *VAR_5, const u_char *VAR_6, const u_int VAR_7)
{
 const u_char *VAR_8 = VAR_5;
 uint32_t VAR_9;

 if (VAR_7 < 4)
  goto invalid;

 FUNC_2(*VAR_5, 4);
 VAR_9 = FUNC_0(VAR_5);
 VAR_5 += 4;
 FUNC_1((VAR_4, "\n\t subtype %s", FUNC_5(VAR_1, "unknown (0x%08x)", VAR_9)));
 switch (VAR_9) {
 case 138:
  if (VAR_7 != 12)
   goto invalid;

  FUNC_2(*VAR_5, 1);
  FUNC_1((VAR_4, ", index %u", *VAR_5));
  VAR_5 += 1;

  FUNC_2(*VAR_5, 7);
  VAR_5 += 7;
  break;
 case 133:
 case 139:
  if (VAR_7 != 12)
   goto invalid;

  FUNC_2(*VAR_5, 1);
  FUNC_1((VAR_4, ", index %u", *VAR_5));
  VAR_5 += 1;

  FUNC_2(*VAR_5, 3);
  VAR_5 += 3;

  FUNC_2(*VAR_5, 4);
  FUNC_1((VAR_4, ", mask %s", FUNC_4(VAR_4, VAR_5)));
  VAR_5 += 4;
  break;
 case 132:
 case 135:
 case 136:
  if (VAR_7 != 8)
   goto invalid;

  FUNC_2(*VAR_5, 1);
  FUNC_1((VAR_4, ", report_mirror_ports %s", FUNC_5(VAR_0, "bogus (%u)", *VAR_5)));
  VAR_5 += 1;

  FUNC_2(*VAR_5, 3);
  VAR_5 += 3;
  break;
 case 140:
 case 137:
 case 141:
 case 142:
 case 134:
  if (VAR_7 != 4)
   goto invalid;
  break;
 case 128:
  if (VAR_7 != 8)
   goto invalid;

  FUNC_2(*VAR_5, 4);
  FUNC_1((VAR_4, ", vport_no %u", FUNC_0(VAR_5)));
  VAR_5 += 4;
  break;
 case 131:
  if (VAR_7 < 8)
   goto invalid;

  FUNC_2(*VAR_5, 4);
  FUNC_1((VAR_4, ", service %u", FUNC_0(VAR_5)));
  VAR_5 += 4;

  FUNC_1((VAR_4, ", data '"));
  if (FUNC_3(VAR_4, VAR_5, VAR_7 - 8, VAR_6)) {
   FUNC_1((VAR_4, "'"));
   goto trunc;
  }
  FUNC_1((VAR_4, "'"));
  VAR_5 += VAR_7 - 8;
  break;
 case 130:
  FUNC_1((VAR_4, ", data '"));
  if (FUNC_3(VAR_4, VAR_5, VAR_7 - 4, VAR_6)) {
   FUNC_1((VAR_4, "'"));
   goto trunc;
  }
  FUNC_1((VAR_4, "'"));
  VAR_5 += VAR_7 - 4;
  break;
 case 129:
  if (VAR_7 != 8)
   goto invalid;

  FUNC_2(*VAR_5, 4);
  FUNC_1((VAR_4, ", status 0x%08x", FUNC_0(VAR_5)));
  VAR_5 += 4;
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
