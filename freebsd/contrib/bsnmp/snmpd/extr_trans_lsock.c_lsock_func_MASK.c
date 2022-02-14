
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_dependency {int dummy; } ;
struct snmp_context {int code; } ;
struct lsock_dep {int set; int path; TYPE_1__* port; int status; int type; int pathlen; } ;
typedef enum snmp_depop { ____Placeholder_snmp_depop } snmp_depop ;
struct TYPE_2__ {int tport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,TYPE_1__**,int ) ;

__attribute__((used)) static int
FUNC_4(struct snmp_context *VAR_7, struct snmp_dependency *VAR_8,
    enum snmp_depop VAR_9)
{
 struct lsock_dep *VAR_10 = (struct lsock_dep *)(void *)VAR_8;
 int VAR_11 = VAR_4;

 switch (VAR_9) {

   case 130:
  if (!(VAR_10->set & VAR_2))
   VAR_11 = VAR_3;
  else if (VAR_10->port == ((void*)0)) {
   if (!VAR_10->status)
    VAR_11 = VAR_3;

   else {

    VAR_11 = FUNC_3(VAR_10->path, VAR_10->pathlen,
        &VAR_10->port, VAR_10->type);
    if (VAR_11 == VAR_4)
     VAR_10->set |= VAR_0;
   }
  } else if (!VAR_10->status) {

   VAR_10->set |= VAR_1;
  } else

   VAR_11 = VAR_5;

  return (VAR_11);

   case 128:
  if (VAR_10->set & VAR_0) {

   FUNC_2(&VAR_10->port->tport);
  }
  return (VAR_4);

   case 129:
  if ((VAR_10->set & VAR_1) && VAR_7->code == VAR_6)
   FUNC_2(&VAR_10->port->tport);
  FUNC_1(VAR_10->path);
  return (VAR_4);
 }
 FUNC_0();
}
