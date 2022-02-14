
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_14__ {void* s_addr; } ;
struct TYPE_13__ {void* s_addr; } ;
struct update {int set; int ifindex; int bcast; TYPE_4__ mask; TYPE_3__ addr; } ;
struct TYPE_15__ {int integer; int* ipaddress; } ;
struct TYPE_16__ {int* subs; } ;
struct snmp_value {TYPE_5__ v; TYPE_6__ var; } ;
struct snmp_context {int dummy; } ;
struct TYPE_12__ {int s_addr; } ;
struct TYPE_11__ {int s_addr; } ;
struct TYPE_17__ {int* subs; } ;
struct mibifa {int ifindex; int flags; TYPE_2__ inbcast; TYPE_1__ inmask; TYPE_8__ index; } ;
struct asn_oid {int len; int* subs; } ;
typedef enum snmp_op { ____Placeholder_snmp_op } snmp_op ;
typedef int asn_subid_t ;


 struct mibifa* FUNC_0 (int *,TYPE_6__*,int) ;





 int VAR_0 ;
 struct mibifa* FUNC_1 (int *,TYPE_6__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__*,int,TYPE_8__*) ;
 int FUNC_4 (TYPE_6__*,int,int,int*) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (struct snmp_context*,int *,struct asn_oid*,int,int ) ;
 int VAR_12 ;

int
FUNC_7(struct snmp_context *VAR_13, struct snmp_value *VAR_14,
    u_int VAR_15, u_int VAR_16, enum snmp_op VAR_17)
{
 asn_subid_t VAR_18;
 struct mibifa *VAR_19;
 struct update *VAR_20;
 struct asn_oid VAR_21;
 u_char VAR_22[4];

 VAR_18 = VAR_14->var.subs[VAR_15 - 1];

 VAR_19 = ((void*)0);

 switch (VAR_17) {

   case 130:
  if ((VAR_19 = FUNC_1(&VAR_10, &VAR_14->var, VAR_15)) == ((void*)0))
   return (VAR_3);
  FUNC_3(&VAR_14->var, VAR_15, &VAR_19->index);
  break;

   case 131:
  if ((VAR_19 = FUNC_0(&VAR_10, &VAR_14->var, VAR_15)) == ((void*)0))
   return (VAR_3);
  break;

   case 128:
  if (FUNC_4(&VAR_14->var, VAR_15, VAR_16, VAR_22))
   return (VAR_4);
  VAR_19 = FUNC_0(&VAR_10, &VAR_14->var, VAR_15);
  VAR_21.len = 4;
  VAR_21.subs[0] = VAR_22[0];
  VAR_21.subs[1] = VAR_22[1];
  VAR_21.subs[2] = VAR_22[2];
  VAR_21.subs[3] = VAR_22[3];

  if ((VAR_20 = (struct update *)FUNC_6(VAR_13,
      &VAR_11, &VAR_21, sizeof(*VAR_20), VAR_12)) == ((void*)0))
   return (VAR_5);

  VAR_20->addr.s_addr = FUNC_2((VAR_22[0] << 24) | (VAR_22[1] << 16) |
      (VAR_22[2] << 8) | (VAR_22[3] << 0));

  switch (VAR_18) {

    case 135:
   if (VAR_20->set & VAR_8)
    return (VAR_1);
   if (VAR_14->v.integer < 0 ||
       VAR_14->v.integer > 0x07fffffff)
    return (VAR_6);
   if (VAR_19 != ((void*)0)) {
    if (VAR_19->ifindex != (u_int)VAR_14->v.integer &&
        VAR_14->v.integer != 0)
     return (VAR_1);
   }
   VAR_20->set |= VAR_8;
   VAR_20->ifindex = (u_int)VAR_14->v.integer;
   break;

    case 134:
   if (VAR_20->set & VAR_9)
    return (VAR_1);
   VAR_20->mask.s_addr = FUNC_2((VAR_14->v.ipaddress[0] << 24)
       | (VAR_14->v.ipaddress[1] << 16)
       | (VAR_14->v.ipaddress[2] << 8)
       | (VAR_14->v.ipaddress[3] << 0));
   VAR_20->set |= VAR_9;
   break;

    case 136:
   if (VAR_20->set & VAR_7)
    return (VAR_1);
   if (VAR_14->v.integer != 0 && VAR_14->v.integer != 1)
    return (VAR_6);
   VAR_20->bcast = VAR_14->v.integer;
   VAR_20->set |= VAR_7;
   break;

  }
  return (VAR_2);

   case 129:
   case 132:
  return (VAR_2);
 }

 switch (VAR_18) {

   case 137:
  VAR_14->v.ipaddress[0] = VAR_19->index.subs[0];
  VAR_14->v.ipaddress[1] = VAR_19->index.subs[1];
  VAR_14->v.ipaddress[2] = VAR_19->index.subs[2];
  VAR_14->v.ipaddress[3] = VAR_19->index.subs[3];
  break;

   case 135:
  if (VAR_19->flags & VAR_0)
   VAR_14->v.integer = 0;
  else
   VAR_14->v.integer = VAR_19->ifindex;
  break;

   case 134:
  VAR_14->v.ipaddress[0] = (FUNC_5(VAR_19->inmask.s_addr) >> 24) & 0xff;
  VAR_14->v.ipaddress[1] = (FUNC_5(VAR_19->inmask.s_addr) >> 16) & 0xff;
  VAR_14->v.ipaddress[2] = (FUNC_5(VAR_19->inmask.s_addr) >> 8) & 0xff;
  VAR_14->v.ipaddress[3] = (FUNC_5(VAR_19->inmask.s_addr) >> 0) & 0xff;
  break;

   case 136:
  VAR_14->v.integer = FUNC_5(VAR_19->inbcast.s_addr) & 1;
  break;


   case 133:
  VAR_14->v.integer = 65535;
  break;
 }
 return (VAR_2);
}
