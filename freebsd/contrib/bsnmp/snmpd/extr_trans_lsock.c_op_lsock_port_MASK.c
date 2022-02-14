
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_9__ {int integer; } ;
struct TYPE_10__ {int* subs; int len; } ;
struct snmp_value {TYPE_2__ v; TYPE_3__ var; } ;
struct snmp_context {int dummy; } ;
struct TYPE_8__ {int index; } ;
struct lsock_port {int type; TYPE_1__ tport; } ;
struct lsock_dep {size_t pathlen; int set; int type; int status; struct lsock_port* port; int * path; } ;
struct asn_oid {int dummy; } ;
typedef enum snmp_op { ____Placeholder_snmp_op } snmp_op ;
typedef int asn_subid_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct asn_oid*,TYPE_3__*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int,int *) ;
 int FUNC_6 (TYPE_3__*,int,int,int **,size_t*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (struct snmp_context*,int *,struct asn_oid*,int,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_9 (int ,TYPE_3__*,int) ;

int
FUNC_10(struct snmp_context *VAR_11, struct snmp_value *VAR_12,
    u_int VAR_13, u_int VAR_14, enum snmp_op VAR_15)
{
 asn_subid_t VAR_16 = VAR_12->var.subs[VAR_13-1];
 struct lsock_port *VAR_17;
 u_char *VAR_18;
 size_t VAR_19;
 struct lsock_dep *VAR_20;
 struct asn_oid VAR_21;

 switch (VAR_15) {

   case 130:
  if ((VAR_17 = (struct lsock_port *)FUNC_9(VAR_9,
      &VAR_12->var, VAR_13)) == ((void*)0))
   return (VAR_5);
  FUNC_5(&VAR_12->var, VAR_13, &VAR_17->tport.index);
  break;

   case 131:
  if ((VAR_17 = (struct lsock_port *)FUNC_8(VAR_9,
      &VAR_12->var, VAR_13)) == ((void*)0))
   return (VAR_5);
  break;

   case 128:
  VAR_17 = (struct lsock_port *)FUNC_8(VAR_9,
      &VAR_12->var, VAR_13);

  if (FUNC_6(&VAR_12->var, VAR_13, VAR_14, &VAR_18, &VAR_19))
   return (VAR_6);

  FUNC_3(&VAR_21, &VAR_12->var, VAR_13, VAR_12->var.len);
  if ((VAR_20 = (struct lsock_dep *)(void *)FUNC_7(VAR_11,
      &VAR_10, &VAR_21, sizeof(*VAR_20),
      VAR_8)) == ((void*)0)) {
   FUNC_4(VAR_18);
   return (VAR_2);
  }

  if (VAR_20->path == ((void*)0)) {
   VAR_20->path = VAR_18;
   VAR_20->pathlen = VAR_19;
  } else {
   FUNC_4(VAR_18);
  }
  VAR_20->port = VAR_17;

  switch (VAR_16) {

    case 134:
   if (VAR_20->set & VAR_0)
    return (VAR_3);
   if (!FUNC_1(VAR_12->v.integer))
    return (VAR_7);

   VAR_20->status = FUNC_0(VAR_12->v.integer);
   VAR_20->set |= VAR_0;
   break;

    case 133:
   if (VAR_20->set & VAR_1)
    return (VAR_3);
   if (VAR_12->v.integer < 1 || VAR_12->v.integer > 4)
    return (VAR_7);

   VAR_20->type = VAR_12->v.integer;
   VAR_20->set |= VAR_1;
   break;
  }
  return (VAR_4);

   case 129:
   case 132:
  return (VAR_4);

   default:
  FUNC_2();
 }




 switch (VAR_16) {

   case 134:
  VAR_12->v.integer = 1;
  break;

   case 133:
  VAR_12->v.integer = VAR_17->type;
  break;

   default:
  FUNC_2();
 }

 return (VAR_4);
}
