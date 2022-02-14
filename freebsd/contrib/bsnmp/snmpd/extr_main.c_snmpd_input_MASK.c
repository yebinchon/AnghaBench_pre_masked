
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
struct tport {TYPE_5__* transport; int index; } ;
struct sockaddr_in {int sin_addr; } ;
struct snmp_value {int dummy; } ;
struct snmp_pdu {scalar_t__ type; scalar_t__ version; } ;
struct port_input {scalar_t__ length; int peerlen; TYPE_4__* peer; int buf; scalar_t__ priv; scalar_t__ cred; scalar_t__ stream; int consumed; } ;
typedef int ssize_t ;
typedef int int32_t ;
typedef enum snmpd_proxy_err { ____Placeholder_snmpd_proxy_err } snmpd_proxy_err ;
typedef enum snmpd_input_err { ____Placeholder_snmpd_input_err } snmpd_input_err ;
typedef int client ;
struct TYPE_17__ {scalar_t__ private; TYPE_2__* owner; } ;
struct TYPE_16__ {scalar_t__ auth_traps; } ;
struct TYPE_15__ {int silentDrops; int inBadCommunityUses; int inBadPduTypes; int inBadCommunityNames; int proxyDrops; } ;
struct TYPE_14__ {TYPE_3__* vtab; } ;
struct TYPE_13__ {scalar_t__ sa_family; } ;
struct TYPE_12__ {int (* recv ) (struct tport*,struct port_input*) ;int (* send ) (struct tport*,int *,size_t,TYPE_4__*,int ) ;int (* send2 ) (struct tport*,int *,size_t,struct port_input*) ;} ;
struct TYPE_11__ {TYPE_1__* config; } ;
struct TYPE_10__ {int (* proxy ) (struct snmp_pdu*,TYPE_5__*,int *,TYPE_4__*,int ,int,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int * FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_9__* VAR_15 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (scalar_t__,int *,char*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int *,int ,char*,int ) ;
 int FUNC_7 (struct port_input*) ;
 int FUNC_8 (struct snmp_pdu*,int ,scalar_t__,int *,size_t*,char*,int,int ,int *) ;
 int FUNC_9 (int ,scalar_t__,char*,struct snmp_pdu*,int *,int *) ;
 int FUNC_10 (struct snmp_pdu*) ;
 int FUNC_11 (int *,struct snmp_value*) ;
 TYPE_8__ VAR_18 ;
 TYPE_7__ VAR_19 ;
 int FUNC_12 (struct tport*,struct port_input*) ;
 int FUNC_13 (struct snmp_pdu*,TYPE_5__*,int *,TYPE_4__*,int ,int,int ,int) ;
 int FUNC_14 (struct tport*,int *,size_t,TYPE_4__*,int ) ;
 int FUNC_15 (struct tport*,int *,size_t,struct port_input*) ;
 int FUNC_16 (int ,char*,...) ;

int
FUNC_17(struct port_input *VAR_20, struct tport *VAR_21)
{
 u_char *VAR_22;
 size_t VAR_23;
 struct snmp_pdu VAR_24;
 enum snmpd_input_err VAR_25, VAR_26;
 enum snmpd_proxy_err VAR_27;
 ssize_t VAR_28, VAR_29;
 int32_t VAR_30;




 VAR_28 = VAR_21->transport->vtab->recv(VAR_21, VAR_20);
 if (VAR_28 == -1)
  return (-1);
 VAR_25 = FUNC_9(VAR_20->buf, VAR_20->length, "SNMP", &VAR_24, &VAR_30,
     &VAR_20->consumed);
 if (VAR_25 == VAR_9) {


  if (VAR_20->stream) {
   if (VAR_20->length == FUNC_1(0)) {
    VAR_19.silentDrops++;
    return (-1);
   }
   return (0);
  }
  VAR_19.silentDrops++;
  return (-1);
 }




 if (VAR_25 == VAR_7) {

  if (VAR_20->stream)
   return (-1);
  FUNC_7(VAR_20);
  return (0);
 }
 if (VAR_25 == VAR_6) {
  FUNC_7(VAR_20);
  return (0);
 }





 if (VAR_15 != ((void*)0) && VAR_15->owner != ((void*)0) &&
     VAR_15->owner->config->proxy != ((void*)0)) {
  VAR_27 = (*VAR_15->owner->config->proxy)(&VAR_24, VAR_21->transport,
      &VAR_21->index, VAR_20->peer, VAR_20->peerlen, VAR_25, VAR_30,
      !VAR_20->cred || VAR_20->priv);

  switch (VAR_27) {

    case 129:
   FUNC_7(VAR_20);
   return (0);

    case 128:
   break;

    case 130:
   FUNC_7(VAR_20);
   FUNC_10(&VAR_24);
   VAR_19.proxyDrops++;
   return (0);

    case 132:
   FUNC_7(VAR_20);
   FUNC_10(&VAR_24);
   VAR_19.inBadCommunityNames++;
   if (VAR_18.auth_traps)
    FUNC_11(&VAR_16,
        (struct snmp_value *)((void*)0));
   return (0);

    case 131:
   FUNC_7(VAR_20);
   FUNC_10(&VAR_24);
   VAR_19.inBadCommunityUses++;
   if (VAR_18.auth_traps)
    FUNC_11(&VAR_16,
        (struct snmp_value *)((void*)0));
   return (0);
  }
 }




 if (VAR_24.type == VAR_10 ||
     VAR_24.type == VAR_12 ||
     VAR_24.type == VAR_13) {
  VAR_19.silentDrops++;
  VAR_19.inBadPduTypes++;
  FUNC_10(&VAR_24);
  FUNC_7(VAR_20);
  return (0);
 }




 if (VAR_24.version < VAR_14 &&
     ((VAR_20->cred && !VAR_20->priv && VAR_24.type == VAR_11) ||
     (VAR_15 != ((void*)0) && VAR_15->private != VAR_2 &&
            (VAR_24.type == VAR_11 || VAR_15->private != VAR_1)))) {
  VAR_19.inBadCommunityUses++;
  FUNC_10(&VAR_24);
  FUNC_7(VAR_20);
  if (VAR_18.auth_traps)
   FUNC_11(&VAR_16,
       (struct snmp_value *)((void*)0));
  return (0);
 }




 if ((VAR_22 = FUNC_0(1)) == ((void*)0)) {
  VAR_19.silentDrops++;
  FUNC_10(&VAR_24);
  FUNC_7(VAR_20);
  return (0);
 }
 VAR_26 = FUNC_8(&VAR_24, VAR_20->buf, VAR_20->length,
     VAR_22, &VAR_23, "SNMP", VAR_25, VAR_30, ((void*)0));

 if (VAR_26 == VAR_8) {
  if (VAR_21->transport->vtab->send != ((void*)0))
   VAR_29 = VAR_21->transport->vtab->send(VAR_21, VAR_22,
       VAR_23, VAR_20->peer, VAR_20->peerlen);
  else
   VAR_29 = VAR_21->transport->vtab->send2(VAR_21, VAR_22,
       VAR_23, VAR_20);
  if (VAR_29 == -1)
   FUNC_16(VAR_4, "send*: %m");
  else if ((size_t)VAR_29 != VAR_23)
   FUNC_16(VAR_4, "send*: short write %zu/%zu", VAR_23,
       (size_t)VAR_29);
 }

 FUNC_10(&VAR_24);
 FUNC_3(VAR_22);
 FUNC_7(VAR_20);

 return (0);
}
