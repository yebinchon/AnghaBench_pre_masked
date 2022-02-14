
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_6__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
struct ng_etfstat {int packets_out; int packets_in; } ;
struct ng_etffilter {int ethertype; int matchhook; } ;
struct filter {int ethertype; int * match_hook; } ;
typedef int node_p ;
typedef int item_p ;
typedef int * hook_p ;
typedef TYPE_3__* etf_p ;
struct TYPE_7__ {int * hook; } ;
struct TYPE_8__ {scalar_t__ hashtable; TYPE_2__ downstream_hook; int flags; int packets_out; int packets_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,struct filter*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,struct ng_mesg*) ;




 int FUNC_3 (struct ng_mesg*) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int,int) ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_7 (int ) ;
 struct filter* FUNC_8 (int,int ,int) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_3__* const,int ) ;
 int * FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_8, item_p VAR_9, hook_p VAR_10)
{
 const etf_p VAR_11 = FUNC_5(VAR_8);
 struct ng_mesg *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 struct ng_mesg *VAR_14;

 FUNC_2(VAR_9, VAR_14);

 switch (VAR_14->header.typecookie) {
 case 131:
  switch (VAR_14->header.cmd) {
  case 130:
      {
   struct ng_etfstat *VAR_15;

   FUNC_4(VAR_12, VAR_14, sizeof(*VAR_15), VAR_5);
   if (!VAR_12) {
    VAR_13 = VAR_3;
    break;
   }
   VAR_15 = (struct ng_etfstat *) VAR_12->data;
   VAR_15->packets_in = VAR_11->packets_in;
   VAR_15->packets_out = VAR_11->packets_out;
   break;
      }
  case 128:
   if (VAR_14->header.arglen != sizeof(u_int32_t)) {
    VAR_13 = VAR_1;
    break;
   }
   VAR_11->flags = *((u_int32_t *) VAR_14->data);
   break;
  case 129:
   {
    struct ng_etffilter *VAR_16;
    struct filter *VAR_17;
    hook_p VAR_18;


    if (VAR_14->header.arglen != sizeof(*VAR_16)) {
     VAR_13 = VAR_1;
     break;
    }


    VAR_16 = (struct ng_etffilter *)VAR_14->data;
    VAR_18 = FUNC_10(VAR_8, VAR_16->matchhook);
    if (VAR_18 == ((void*)0)) {
     VAR_13 = VAR_2;
     break;
    }


    if (VAR_18 == VAR_11->downstream_hook.hook) {
     VAR_13 = VAR_1;
     break;
    }


    if (FUNC_9(VAR_11,
      FUNC_7(VAR_16->ethertype))) {
     VAR_13 = VAR_0;
     break;
    }





    VAR_17 = FUNC_8(sizeof(*VAR_17),
     VAR_4, VAR_5 | VAR_6);
    if (VAR_17 == ((void*)0)) {
     VAR_13 = VAR_3;
     break;
    }

    VAR_17->match_hook = VAR_18;
    VAR_17->ethertype = FUNC_7(VAR_16->ethertype);
    FUNC_1( VAR_11->hashtable
     + FUNC_0(VAR_17->ethertype),
      VAR_17, VAR_7);
   }
   break;
  default:
   VAR_13 = VAR_1;
   break;
  }
  break;
 default:
  VAR_13 = VAR_1;
  break;
 }


 FUNC_6(VAR_13, VAR_8, VAR_9, VAR_12);

 FUNC_3(VAR_14);
 return(VAR_13);
}
