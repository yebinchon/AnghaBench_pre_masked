
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct dhcp6opt {scalar_t__ const dh6opt_type; scalar_t__ const dh6opt_len; } ;
typedef int netdissect_options ;
 size_t FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dhcp6opt const) ;
 int FUNC_4 (scalar_t__ const,size_t) ;
 int VAR_0 ;
 int FUNC_5 (int *,scalar_t__ const*,size_t) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int *,scalar_t__ const*,int,int *) ;
 int FUNC_8 (int *,scalar_t__ const*) ;
 scalar_t__* FUNC_9 (int *,scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_10 (int ,char*,size_t) ;

__attribute__((used)) static void
FUNC_11(netdissect_options *VAR_1,
               const u_char *VAR_2, const u_char *VAR_3)
{
 const struct dhcp6opt *VAR_4;
 const u_char *VAR_5;
 size_t VAR_6;
 uint16_t VAR_7;
 size_t VAR_8;
 uint8_t VAR_9;
 u_int VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;
 uint16_t VAR_14;
 uint16_t VAR_15;

 if (VAR_2 == VAR_3)
  return;
 while (VAR_2 < VAR_3) {
  if (VAR_3 < VAR_2 + sizeof(*VAR_4))
   goto trunc;
  VAR_4 = (const struct dhcp6opt *)VAR_2;
  FUNC_3(*VAR_4);
  VAR_8 = FUNC_0(&VAR_4->dh6opt_len);
  if (VAR_3 < VAR_2 + sizeof(*VAR_4) + VAR_8)
   goto trunc;
  VAR_7 = FUNC_0(&VAR_4->dh6opt_type);
  FUNC_2((VAR_1, " (%s", FUNC_10(VAR_0, "opt_%u", VAR_7)));
  FUNC_4(*(VAR_2 + sizeof(*VAR_4)), VAR_8);
  switch (VAR_7) {
  case 169:
  case 135:
   if (VAR_8 < 2) {

    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   switch (FUNC_0(VAR_5)) {
   case 1:
    if (VAR_8 >= 2 + 6) {
     FUNC_2((VAR_1, " hwaddr/time type %u time %u ",
         FUNC_0(&VAR_5[2]),
         FUNC_1(&VAR_5[4])));
     for (VAR_6 = 8; VAR_6 < VAR_8; VAR_6++)
      FUNC_2((VAR_1, "%02x", VAR_5[VAR_6]));

     FUNC_2((VAR_1, ")"));
    } else {

     FUNC_2((VAR_1, " ?)"));
    }
    break;
   case 2:
    if (VAR_8 >= 2 + 8) {
     FUNC_2((VAR_1, " vid "));
     for (VAR_6 = 2; VAR_6 < 2 + 8; VAR_6++)
      FUNC_2((VAR_1, "%02x", VAR_5[VAR_6]));

     FUNC_2((VAR_1, ")"));
    } else {

     FUNC_2((VAR_1, " ?)"));
    }
    break;
   case 3:
    if (VAR_8 >= 2 + 2) {
     FUNC_2((VAR_1, " hwaddr type %u ",
         FUNC_0(&VAR_5[2])));
     for (VAR_6 = 4; VAR_6 < VAR_8; VAR_6++)
      FUNC_2((VAR_1, "%02x", VAR_5[VAR_6]));

     FUNC_2((VAR_1, ")"));
    } else {

     FUNC_2((VAR_1, " ?)"));
    }
    break;
   default:
    FUNC_2((VAR_1, " type %d)", FUNC_0(VAR_5)));
    break;
   }
   break;
  case 162:
   if (VAR_8 < 24) {

    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " %s", FUNC_8(VAR_1, &VAR_5[0])));
   FUNC_2((VAR_1, " pltime:%u vltime:%u",
       FUNC_1(&VAR_5[16]),
       FUNC_1(&VAR_5[20])));
   if (VAR_8 > 24) {

    FUNC_11(VAR_1, VAR_5 + 24, VAR_5 + VAR_8);
   }
   FUNC_2((VAR_1, ")"));
   break;
  case 143:
  case 163:
   if (VAR_8 % 2) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6 += 2) {
    FUNC_2((VAR_1, " %s",
        FUNC_10(VAR_0, "opt_%u", FUNC_0(&VAR_5[VAR_6]))));
   }
   FUNC_2((VAR_1, ")"));
   break;
  case 141:
   if (VAR_8 != 1) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " %d)", *VAR_5));
   break;
  case 164:
   if (VAR_8 != 2) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " %d)", FUNC_0(VAR_5)));
   break;
  case 137:
   FUNC_2((VAR_1, " ("));
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_5(VAR_1, VAR_5, VAR_8);
   FUNC_2((VAR_1, ")"));
   break;
  case 177:
   if (VAR_8 < 11) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   VAR_9 = *VAR_5;
   switch (VAR_9) {
   case 175:
    FUNC_2((VAR_1, " proto: delayed"));
    break;
   case 174:
    FUNC_2((VAR_1, " proto: reconfigure"));
    break;
   default:
    FUNC_2((VAR_1, " proto: %d", VAR_9));
    break;
   }
   VAR_5++;
   switch (*VAR_5) {
   case 176:

    FUNC_2((VAR_1, ", alg: HMAC-MD5"));
    break;
   default:
    FUNC_2((VAR_1, ", alg: %d", *VAR_5));
    break;
   }
   VAR_5++;
   switch (*VAR_5) {
   case 173:
    FUNC_2((VAR_1, ", RDM: mono"));
    break;
   default:
    FUNC_2((VAR_1, ", RDM: %d", *VAR_5));
    break;
   }
   VAR_5++;
   FUNC_2((VAR_1, ", RD:"));
   for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_5 += 2)
    FUNC_2((VAR_1, " %04x", FUNC_0(VAR_5)));


   VAR_10 = VAR_8 - 11;
   switch (VAR_9) {
   case 175:
    if (VAR_10 == 0)
     break;
    if (VAR_10 < 20) {
     FUNC_2((VAR_1, " ??"));
     break;
    }
    VAR_11 = VAR_10 - 20;
    if (VAR_11 > 0) {
     FUNC_2((VAR_1, ", realm: "));
    }
    for (VAR_6 = 0; VAR_6 < VAR_11; VAR_6++, VAR_5++)
     FUNC_2((VAR_1, "%02x", *VAR_5));
    FUNC_2((VAR_1, ", key ID: %08x", FUNC_1(VAR_5)));
    VAR_5 += 4;
    FUNC_2((VAR_1, ", HMAC-MD5:"));
    for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_5+= 4)
     FUNC_2((VAR_1, " %08x", FUNC_1(VAR_5)));
    break;
   case 174:
    if (VAR_10 != 17) {
     FUNC_2((VAR_1, " ??"));
     break;
    }
    switch (*VAR_5++) {
    case 171:
     FUNC_2((VAR_1, " reconfig-key"));
     break;
    case 172:
     FUNC_2((VAR_1, " type: HMAC-MD5"));
     break;
    default:
     FUNC_2((VAR_1, " type: ??"));
     break;
    }
    FUNC_2((VAR_1, " value:"));
    for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_5+= 4)
     FUNC_2((VAR_1, " %08x", FUNC_1(VAR_5)));
    break;
   default:
    FUNC_2((VAR_1, " ??"));
    break;
   }

   FUNC_2((VAR_1, ")"));
   break;
  case 140:
   FUNC_2((VAR_1, ")"));
   break;
  case 157:
  case 130:




   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " "));
   for (VAR_6 = 0; VAR_6 < VAR_8 && VAR_6 < 10; VAR_6++)
    FUNC_2((VAR_1, "%02x", VAR_5[VAR_6]));
   FUNC_2((VAR_1, "...)"));
   break;
  case 138:
   if (VAR_8 != 1) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   switch (*VAR_5) {
   case 128:
    FUNC_2((VAR_1, " for renew)"));
    break;
   case 129:
    FUNC_2((VAR_1, " for inf-req)"));
    break;
   default:
    FUNC_2((VAR_1, " for ?\?\?(%02x))", *VAR_5));
    break;
   }
   break;
  case 139:
   FUNC_2((VAR_1, ")"));
   break;
  case 134:
  case 166:
  case 132:
  case 148:
  case 149:
  case 170:
  case 142:
  case 155:
   if (VAR_8 % 16) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6 += 16)
    FUNC_2((VAR_1, " %s", FUNC_8(VAR_1, &VAR_5[VAR_6])));
   FUNC_2((VAR_1, ")"));
   break;
  case 133:
  case 165:
   VAR_5 = (const u_char *)(VAR_4 + 1);
   while (VAR_5 < VAR_2 + sizeof(*VAR_4) + VAR_8) {
    FUNC_2((VAR_1, " "));
    if ((VAR_5 = FUNC_9(VAR_1, VAR_5, VAR_2 + sizeof(*VAR_4) + VAR_8)) == ((void*)0))
     goto trunc;
   }
   FUNC_2((VAR_1, ")"));
   break;
  case 131:
   if (VAR_8 < 2) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " %s)", FUNC_6(FUNC_0(&VAR_5[0]))));
   break;
  case 161:
  case 160:
   if (VAR_8 < 12) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " IAID:%u T1:%u T2:%u",
       FUNC_1(&VAR_5[0]),
       FUNC_1(&VAR_5[4]),
       FUNC_1(&VAR_5[8])));
   if (VAR_8 > 12) {

    FUNC_11(VAR_1, VAR_5 + 12, VAR_5 + VAR_8);
   }
   FUNC_2((VAR_1, ")"));
   break;
  case 158:
   if (VAR_8 < 4) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " IAID:%u", FUNC_1(VAR_5)));
   if (VAR_8 > 4) {

    FUNC_11(VAR_1, VAR_5 + 4, VAR_5 + VAR_8);
   }
   FUNC_2((VAR_1, ")"));
   break;
  case 159:
   if (VAR_8 < 25) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " %s/%d", FUNC_8(VAR_1, &VAR_5[9]), VAR_5[8]));
   FUNC_2((VAR_1, " pltime:%u vltime:%u",
       FUNC_1(&VAR_5[0]),
       FUNC_1(&VAR_5[4])));
   if (VAR_8 > 25) {

    FUNC_11(VAR_1, VAR_5 + 25, VAR_5 + VAR_8);
   }
   FUNC_2((VAR_1, ")"));
   break;
  case 156:
  case 167:
   if (VAR_8 != 4) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " %d)", FUNC_1(VAR_5)));
   break;
  case 136:
   if (VAR_8 < 4) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " %d ", FUNC_1(VAR_5)));



   for (VAR_6 = 4; VAR_6 < VAR_8 && VAR_6 < 14; VAR_6++)
    FUNC_2((VAR_1, "%02x", VAR_5[VAR_6]));
   FUNC_2((VAR_1, "...)"));
   break;
  case 154:
   if (VAR_8 < 17) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   switch (*VAR_5) {
   case 1:
    FUNC_2((VAR_1, " by-address"));
    break;
   case 2:
    FUNC_2((VAR_1, " by-clientID"));
    break;
   default:
    FUNC_2((VAR_1, " type_%d", (int)*VAR_5));
    break;
   }
   FUNC_2((VAR_1, " %s", FUNC_8(VAR_1, &VAR_5[1])));
   if (VAR_8 > 17) {

    FUNC_11(VAR_1, VAR_5 + 17, VAR_5 + VAR_8);
   }
   FUNC_2((VAR_1, ")"));
   break;
  case 168:
   VAR_5 = (const u_char *)(VAR_4 + 1);
   if (VAR_8 > 0) {

    FUNC_11(VAR_1, VAR_5, VAR_5 + VAR_8);
   }
   FUNC_2((VAR_1, ")"));
   break;
  case 153:
   if (VAR_8 < 16) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, " %s ", FUNC_8(VAR_1, &VAR_5[0])));



   for (VAR_6 = 16; VAR_6 < VAR_8 && VAR_6 < 26; VAR_6++)
    FUNC_2((VAR_1, "%02x", VAR_5[VAR_6]));
   FUNC_2((VAR_1, "...)"));
   break;
  case 147:
   if (VAR_8 < 4) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   while (VAR_5 < VAR_2 + sizeof(*VAR_4) + VAR_8 - 4) {
    VAR_14 = FUNC_0(VAR_5);
    VAR_5 += 2;
    VAR_15 = FUNC_0(VAR_5);
    VAR_5 += 2;
    if (VAR_5 + VAR_15 > VAR_2 + sizeof(*VAR_4) + VAR_8)
     goto trunc;
    FUNC_2((VAR_1, " subopt:%d", VAR_14));
    switch (VAR_14) {
    case 145:
    case 146:
     if (VAR_15 != 16) {
      FUNC_2((VAR_1, " ?"));
      break;
     }
     FUNC_2((VAR_1, " %s", FUNC_8(VAR_1, &VAR_5[0])));
     break;
    case 144:
     FUNC_2((VAR_1, " "));
     if (FUNC_9(VAR_1, VAR_5, VAR_5 + VAR_15) == ((void*)0))
      goto trunc;
     break;
    default:
     FUNC_2((VAR_1, " ?"));
     break;
    }
    VAR_5 += VAR_15;
   }
   FUNC_2((VAR_1, ")"));
   break;
  case 178:
   if (VAR_8 < 3) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   VAR_12 = VAR_8;
   FUNC_2((VAR_1, " "));

   while (VAR_12 && *VAR_5) {
    VAR_13 = *VAR_5++;
    if (VAR_13 < VAR_12 - 1) {
     (void)FUNC_7(VAR_1, VAR_5, VAR_13, ((void*)0));
     VAR_5 += VAR_13;
     VAR_12 -= (VAR_13 + 1);
     if(*VAR_5) FUNC_2((VAR_1, "."));
    } else {
     FUNC_2((VAR_1, " ?"));
     break;
    }
   }
   FUNC_2((VAR_1, ")"));
   break;
  case 151:
  case 150:
  case 152:
          if (VAR_8 < 5) {
    FUNC_2((VAR_1, " ?)"));
    break;
   }
   VAR_5 = (const u_char *)(VAR_4 + 1);
   FUNC_2((VAR_1, "="));
   (void)FUNC_7(VAR_1, VAR_5, (u_int)VAR_8, ((void*)0));
   FUNC_2((VAR_1, ")"));
   break;

  default:
   FUNC_2((VAR_1, ")"));
   break;
  }

  VAR_2 += sizeof(*VAR_4) + VAR_8;
 }
 return;

trunc:
 FUNC_2((VAR_1, "[|dhcp6ext]"));
}
