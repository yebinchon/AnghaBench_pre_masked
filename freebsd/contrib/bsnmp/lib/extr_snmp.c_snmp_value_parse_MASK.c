
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; int * subs; } ;
struct TYPE_3__ {char* octets; int len; } ;
union snmp_values {void* counter64; int uint32; int ipaddress; TYPE_2__ oid; TYPE_1__ octetstring; int integer; } ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_long ;
typedef char u_char ;
struct hostent {int h_addr; int h_addrtype; } ;
typedef enum snmp_syntax { ____Placeholder_snmp_syntax } snmp_syntax ;
typedef int asn_subid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 struct hostent* FUNC_3 (char const*,int ) ;
 int FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (char const) ;
 int FUNC_6 (char const) ;
 int FUNC_7 (char const) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (char const*,char**,int ) ;
 int FUNC_10 (char const*,char**,int) ;
 void* FUNC_11 (char const*,char**,int ) ;

int
FUNC_12(const char *VAR_3, enum snmp_syntax VAR_4, union snmp_values *VAR_5)
{
 char *VAR_6;

 switch (VAR_4) {

   case 131:
   case 132:
   case 133:
   case 137:
  if (*VAR_3 != '\0')
   return (-1);
  return (0);

   case 135:
  VAR_5->integer = FUNC_9(VAR_3, &VAR_6, 0);
  if (*VAR_6 != '\0')
   return (-1);
  return (0);

   case 130:
     {
  u_long VAR_7;
  u_long VAR_8;
  u_char *VAR_9;
  u_long VAR_10;
  u_char *VAR_11;
  u_char VAR_12;
  VAR_7 = VAR_8 = 0;
  VAR_9 = ((void*)0);

  if (*VAR_3 == '"') {
   VAR_3++;
   while((VAR_12 = *VAR_3++) != '\0') {
    if (VAR_12 == '"') {
     if (*VAR_3 != '\0') {
      FUNC_2(VAR_9);
      return (-1);
     }
     break;
    }
    if (VAR_12 == '\\') {
     switch (VAR_12 = *VAR_3++) {

       case '\\':
      break;
       case 'a':
      VAR_12 = '\a';
      break;
       case 'b':
      VAR_12 = '\b';
      break;
       case 'f':
      VAR_12 = '\f';
      break;
       case 'n':
      VAR_12 = '\n';
      break;
       case 'r':
      VAR_12 = '\r';
      break;
       case 't':
      VAR_12 = '\t';
      break;
       case 'v':
      VAR_12 = '\v';
      break;
       case 'x':
      VAR_12 = 0;
      if (!FUNC_7(*VAR_3))
       break;
      if (FUNC_5(*VAR_3))
       VAR_12 = *VAR_3++ - '0';
      else if (FUNC_6(*VAR_3))
       VAR_12 = *VAR_3++ - 'A' + 10;
      else
       VAR_12 = *VAR_3++ - 'a' + 10;
      if (!FUNC_7(*VAR_3))
       break;
      if (FUNC_5(*VAR_3))
       VAR_12 += *VAR_3++ - '0';
      else if (FUNC_6(*VAR_3))
       VAR_12 += *VAR_3++ - 'A' + 10;
      else
       VAR_12 += *VAR_3++ - 'a' + 10;
      break;
       case '0': case '1': case '2':
       case '3': case '4': case '5':
       case '6': case '7':
      VAR_12 = *VAR_3++ - '0';
      if (*VAR_3 < '0' || *VAR_3 > '7')
       break;
      VAR_12 = *VAR_3++ - '0';
      if (*VAR_3 < '0' || *VAR_3 > '7')
       break;
      VAR_12 = *VAR_3++ - '0';
      break;
       default:
      break;
     }
    }
    if (VAR_8 == VAR_7) { VAR_8 += 100; if ((VAR_11 = realloc(VAR_9, VAR_8)) == ((void*)0)) { FUNC_2(VAR_9); return (-1); } VAR_9 = VAR_11; } VAR_9[VAR_7++] = (VAR_12);;
   }
  } else {
   while (*VAR_3 != '\0') {
    VAR_10 = FUNC_10(VAR_3, &VAR_6, 16);
    VAR_3 = VAR_6;
    if (VAR_10 > 0xff) {
     FUNC_2(VAR_9);
     return (-1);
    }
    if (VAR_8 == VAR_7) { VAR_8 += 100; if ((VAR_11 = FUNC_0(VAR_9, VAR_8)) == ((void*)0)) { FUNC_2(VAR_9); return (-1); } VAR_9 = VAR_11; } VAR_9[VAR_7++] = (VAR_10);;
    if (*VAR_3 == ':')
     VAR_3++;
    else if(*VAR_3 != '\0') {
     FUNC_2(VAR_9);
     return (-1);
    }
   }
  }
  VAR_5->octetstring.octets = VAR_9;
  VAR_5->octetstring.len = VAR_7;
  return (0);

     }

   case 129:
     {
  u_long VAR_13;

  VAR_5->oid.len = 0;

  for (;;) {
   if (VAR_5->oid.len == VAR_2)
    return (-1);
   VAR_13 = FUNC_10(VAR_3, &VAR_6, 10);
   VAR_3 = VAR_6;
   if (VAR_13 > VAR_1)
    return (-1);
   VAR_5->oid.subs[VAR_5->oid.len++] = (asn_subid_t)VAR_13;
   if (*VAR_3 == '\0')
    break;
   if (*VAR_3 != '.')
    return (-1);
   VAR_3++;
  }
  return (0);
     }

   case 134:
     {
  struct hostent *VAR_14;

  if (FUNC_4(VAR_0, VAR_3, &VAR_5->ipaddress) == 1)
   return (0);
  if ((VAR_14 = FUNC_3(VAR_3, VAR_0)) == ((void*)0))
   return (-1);
  if (VAR_14->h_addrtype != VAR_0)
   return (-1);

  FUNC_8(VAR_5->ipaddress, VAR_14->h_addr, sizeof(VAR_5->ipaddress));

  return (0);
     }

   case 139:
   case 136:
   case 128:
     {
  uint64_t VAR_15;

  VAR_15 = FUNC_11(VAR_3, &VAR_6, 0);
  if (*VAR_6 != '\0' || VAR_15 > 0xffffffff)
   return (-1);
  VAR_5->uint32 = (uint32_t)VAR_15;
  return (0);
     }

   case 138:
  VAR_5->counter64 = FUNC_11(VAR_3, &VAR_6, 0);
  if (*VAR_6 != '\0')
   return (-1);
  return (0);
 }
 FUNC_1();
}
