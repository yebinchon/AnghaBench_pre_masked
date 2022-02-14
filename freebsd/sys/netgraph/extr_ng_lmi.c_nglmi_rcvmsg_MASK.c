
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nglmistat {int autod; int fixed; int* up; int* seen; int hook; int proto; } ;
struct TYPE_4__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {char* data; TYPE_1__ header; } ;
typedef TYPE_2__* sc_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {char* protoname; int flags; int liv_rate; int* dlci_state; int seq_retries; int lmi_channel0; int lmi_channel; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ng_mesg*) ;




 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,struct ng_mesg*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 sc_p VAR_10 = FUNC_3(VAR_7);
 struct ng_mesg *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 struct ng_mesg *VAR_13;

 FUNC_0(VAR_8, VAR_13);
 switch (VAR_13->header.typecookie) {
 case 131:
  switch (VAR_13->header.cmd) {
  case 128:
      {
   char *VAR_14;
   int VAR_15, VAR_16;

   FUNC_2(VAR_11, VAR_13, VAR_4, VAR_3);
   if (VAR_11 == ((void*)0)) {
    VAR_12 = VAR_1;
    break;
   }
   VAR_14 = VAR_11->data;
   VAR_15 = FUNC_5(VAR_14, "protocol %s ", VAR_10->protoname);
   if (VAR_10->flags & VAR_6)
    VAR_15 += FUNC_5(VAR_14 + VAR_15, "fixed\n");
   else if (VAR_10->flags & VAR_5)
    VAR_15 += FUNC_5(VAR_14 + VAR_15, "auto-detecting\n");
   else
    VAR_15 += FUNC_5(VAR_14 + VAR_15, "auto on dlci %d\n",
        (VAR_10->lmi_channel == VAR_10->lmi_channel0) ?
        0 : 1023);
   VAR_15 += FUNC_5(VAR_14 + VAR_15,
       "keepalive period: %d seconds\n", VAR_10->liv_rate);
   VAR_15 += FUNC_5(VAR_14 + VAR_15,
       "unacknowledged keepalives: %ld\n",
       VAR_10->seq_retries);
   for (VAR_16 = 0;
        ((VAR_16 <= VAR_2)
         && (VAR_15 < (VAR_4 - 20)));
        VAR_16++) {
    if (VAR_10->dlci_state[VAR_16]) {
     VAR_15 += FUNC_5(VAR_14 + VAR_15,
            "dlci %d %s\n", VAR_16,
            (VAR_10->dlci_state[VAR_16]
     == 132) ? "up" : "down");
    }
   }
   VAR_11->header.arglen = VAR_15 + 1;
   break;
      }
  default:
   VAR_12 = VAR_0;
   break;
  }
  break;
 case 130:
  switch (VAR_13->header.cmd) {
  case 129:
      {
   struct nglmistat *VAR_17;
   int VAR_18;

   FUNC_2(VAR_11, VAR_13, sizeof(*VAR_17), VAR_3);
   if (!VAR_11) {
    VAR_12 = VAR_1;
    break;
   }
   VAR_17 = (struct nglmistat *) VAR_11->data;
   FUNC_6(VAR_17->proto,
        VAR_10->protoname, sizeof(VAR_17->proto) - 1);
   FUNC_6(VAR_17->hook,
         VAR_10->protoname, sizeof(VAR_17->hook) - 1);
   VAR_17->autod = !!(VAR_10->flags & VAR_5);
   VAR_17->fixed = !!(VAR_10->flags & VAR_6);
   for (VAR_18 = 0; VAR_18 <= VAR_2; VAR_18++) {
    switch (VAR_10->dlci_state[VAR_18]) {
    case 132:
     VAR_17->up[VAR_18 / 8] |= (1 << (VAR_18 % 8));

    case 133:
     VAR_17->seen[VAR_18 / 8] |= (1 << (VAR_18 % 8));
     break;
    }
   }
   break;
      }
  default:
   VAR_12 = VAR_0;
   break;
  }
  break;
 default:
  VAR_12 = VAR_0;
  break;
 }

 FUNC_4(VAR_12, VAR_7, VAR_8, VAR_11);
 FUNC_1(VAR_13);
 return (VAR_12);
}
