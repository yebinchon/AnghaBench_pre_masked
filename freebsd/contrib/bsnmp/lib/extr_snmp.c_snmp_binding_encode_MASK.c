
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int len; int octets; } ;
struct TYPE_4__ {int counter64; int uint32; int ipaddress; int oid; TYPE_1__ octetstring; int integer; } ;
struct snmp_value {int syntax; TYPE_2__ v; int var; } ;
struct asn_buf {int dummy; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct asn_buf*,int *,int *) ;
 int FUNC_1 (struct asn_buf*,int ) ;
 int FUNC_2 (struct asn_buf*,int ) ;
 int FUNC_3 (struct asn_buf*,int ) ;
 int FUNC_4 (struct asn_buf*,int ) ;
 int FUNC_5 (struct asn_buf*) ;
 int FUNC_6 (struct asn_buf*,int *) ;
 int FUNC_7 (struct asn_buf*,int ,int ) ;
 int FUNC_8 (struct asn_buf*,int,int **) ;
 int FUNC_9 (struct asn_buf*,int ,int ) ;

enum asn_err
FUNC_10(struct asn_buf *VAR_9, const struct snmp_value *VAR_10)
{
 u_char *VAR_11;
 enum asn_err VAR_12;
 struct asn_buf VAR_13 = *VAR_9;

 if ((VAR_12 = FUNC_8(VAR_9, (VAR_8 |
     VAR_7), &VAR_11)) != VAR_3) {
  *VAR_9 = VAR_13;
  return (VAR_12);
 }

 if ((VAR_12 = FUNC_6(VAR_9, &VAR_10->var)) != VAR_3) {
  *VAR_9 = VAR_13;
  return (VAR_12);
 }

 switch (VAR_10->syntax) {

   case 131:
  VAR_12 = FUNC_5(VAR_9);
  break;

   case 135:
  VAR_12 = FUNC_3(VAR_9, VAR_10->v.integer);
  break;

   case 130:
  VAR_12 = FUNC_7(VAR_9, VAR_10->v.octetstring.octets,
      VAR_10->v.octetstring.len);
  break;

   case 129:
  VAR_12 = FUNC_6(VAR_9, &VAR_10->v.oid);
  break;

   case 134:
  VAR_12 = FUNC_4(VAR_9, VAR_10->v.ipaddress);
  break;

   case 128:
  VAR_12 = FUNC_9(VAR_9, VAR_2, VAR_10->v.uint32);
  break;

   case 139:
  VAR_12 = FUNC_9(VAR_9, VAR_0, VAR_10->v.uint32);
  break;

   case 136:
  VAR_12 = FUNC_9(VAR_9, VAR_1, VAR_10->v.uint32);
  break;

   case 138:
  VAR_12 = FUNC_1(VAR_9, VAR_10->v.counter64);
  break;

   case 132:
  VAR_12 = FUNC_2(VAR_9, VAR_6);
  break;

   case 133:
  VAR_12 = FUNC_2(VAR_9, VAR_5);
  break;

   case 137:
  VAR_12 = FUNC_2(VAR_9, VAR_4);
  break;
 }

 if (VAR_12 != VAR_3) {
  *VAR_9 = VAR_13;
  return (VAR_12);
 }

 VAR_12 = FUNC_0(VAR_9, VAR_11, ((void*)0));
 if (VAR_12 != VAR_3) {
  *VAR_9 = VAR_13;
  return (VAR_12);
 }

 return (VAR_3);
}
