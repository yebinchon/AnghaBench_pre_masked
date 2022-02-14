
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,scalar_t__ const) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int const*) ;
 int VAR_3 ;
 int* FUNC_6 (int *,int const*,int const*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int ,char*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static const u_char *
FUNC_10(netdissect_options *VAR_8,
                   const char *VAR_9, const u_char *VAR_10, const u_char *VAR_11,
                   u_int VAR_12)
{
 const u_char *VAR_13 = VAR_10;
 const u_int VAR_14 = VAR_12;
 uint16_t VAR_15, VAR_16, VAR_17;

 while (VAR_12) {
  u_char VAR_18 = 0, VAR_19 = 0;

  if (VAR_12 < VAR_2)
   goto invalid;

  FUNC_3(*VAR_10, 2);
  VAR_15 = FUNC_0(VAR_10);
  VAR_10 += 2;
  FUNC_2((VAR_8, "%saction type %s", VAR_9, FUNC_8(VAR_4, "invalid (0x%04x)", VAR_15)));

  FUNC_3(*VAR_10, 2);
  VAR_16 = FUNC_0(VAR_10);
  VAR_10 += 2;
  FUNC_2((VAR_8, ", len %u", VAR_16));

  if (VAR_16 < VAR_2 || VAR_16 > VAR_12)
   goto invalid;


  switch (VAR_15) {
  case 139:
  case 130:
  case 131:
  case 129:
  case 135:
  case 136:
  case 134:
  case 132:
  case 133:
   VAR_18 = VAR_16 != 8;
   break;
  case 137:
  case 138:
  case 140:
   VAR_18 = VAR_16 != 16;
   break;
  case 128:
   VAR_18 = VAR_16 % 8 != 0;
   break;
  default:
   VAR_19 = 1;
  }
  if (VAR_18) {
   FUNC_2((VAR_8, " (bogus)"));
   VAR_19 = 1;
  }
  if (VAR_19) {
   FUNC_3(*VAR_10, VAR_16 - 4);
   VAR_10 += VAR_16 - 4;
   goto next_action;
  }

  switch (VAR_15) {
  case 139:

   FUNC_3(*VAR_10, 2);
   VAR_17 = FUNC_0(VAR_10);
   VAR_10 += 2;
   FUNC_2((VAR_8, ", port %s", FUNC_8(VAR_5, "%u", VAR_17)));

   FUNC_3(*VAR_10, 2);
   if (VAR_17 == VAR_1)
    FUNC_2((VAR_8, ", max_len %u", FUNC_0(VAR_10)));
   VAR_10 += 2;
   break;
  case 130:

   FUNC_3(*VAR_10, 2);
   FUNC_2((VAR_8, ", vlan_vid %s", FUNC_9(FUNC_0(VAR_10))));
   VAR_10 += 2;

   FUNC_3(*VAR_10, 2);
   VAR_10 += 2;
   break;
  case 131:

   FUNC_3(*VAR_10, 1);
   FUNC_2((VAR_8, ", vlan_pcp %s", FUNC_7(*VAR_10)));
   VAR_10 += 1;

   FUNC_3(*VAR_10, 3);
   VAR_10 += 3;
   break;
  case 137:
  case 138:

   FUNC_3(*VAR_10, VAR_0);
   FUNC_2((VAR_8, ", dl_addr %s", FUNC_4(VAR_8, VAR_10)));
   VAR_10 += VAR_0;

   FUNC_3(*VAR_10, 6);
   VAR_10 += 6;
   break;
  case 135:
  case 136:

   FUNC_3(*VAR_10, 4);
   FUNC_2((VAR_8, ", nw_addr %s", FUNC_5(VAR_8, VAR_10)));
   VAR_10 += 4;
   break;
  case 134:

   FUNC_3(*VAR_10, 1);
   FUNC_2((VAR_8, ", nw_tos 0x%02x", *VAR_10));
   VAR_10 += 1;

   FUNC_3(*VAR_10, 3);
   VAR_10 += 3;
   break;
  case 132:
  case 133:

   FUNC_3(*VAR_10, 2);
   FUNC_2((VAR_8, ", tp_port %u", FUNC_0(VAR_10)));
   VAR_10 += 2;

   FUNC_3(*VAR_10, 2);
   VAR_10 += 2;
   break;
  case 140:

   FUNC_3(*VAR_10, 2);
   FUNC_2((VAR_8, ", port %s", FUNC_8(VAR_5, "%u", FUNC_0(VAR_10))));
   VAR_10 += 2;

   FUNC_3(*VAR_10, 6);
   VAR_10 += 6;

   FUNC_3(*VAR_10, 4);
   FUNC_2((VAR_8, ", queue_id %s", FUNC_8(VAR_6, "%u", FUNC_1(VAR_10))));
   VAR_10 += 4;
   break;
  case 128:
   if (VAR_11 == (VAR_10 = FUNC_6(VAR_8, VAR_10, VAR_11, VAR_16 - 4)))
    return VAR_11;
   break;
  case 129:

   FUNC_3(*VAR_10, 4);
   VAR_10 += 4;
   break;
  }
next_action:
  VAR_12 -= VAR_16;
 }
 return VAR_10;

invalid:
 FUNC_2((VAR_8, "%s", VAR_3));
 FUNC_3(*VAR_13, VAR_14);
 return VAR_13 + VAR_14;
trunc:
 FUNC_2((VAR_8, "%s", VAR_7));
 return VAR_11;
}
