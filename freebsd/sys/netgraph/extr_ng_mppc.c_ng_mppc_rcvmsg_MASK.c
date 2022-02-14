
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ng_mppc_config {int bits; int * startkey; int enable; } ;
struct ng_mppc_dir {int flushed; int cc; int key; int rc4; int * history; struct ng_mppc_config cfg; } ;
struct TYPE_4__ {int typecookie; int const cmd; int arglen; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {int ctrlnode; struct ng_mppc_dir recv; struct ng_mppc_dir xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,struct ng_mesg*) ;
 int FUNC_7 (int ) ;




 int FUNC_8 (struct ng_mesg*) ;
 TYPE_2__* FUNC_9 (int ) ;
 int FUNC_10 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_11 (int *,int ,int const) ;
 int FUNC_12 (int *,int ) ;
 int * FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int *,int ,int const) ;
 int FUNC_15 (int ) ;
 int VAR_10 ;
 int FUNC_16 (int *,int ,int const) ;

__attribute__((used)) static int
FUNC_17(node_p VAR_11, item_p VAR_12, hook_p VAR_13)
{
 const priv_p VAR_14 = FUNC_9(VAR_11);
 struct ng_mesg *VAR_15 = ((void*)0);
 int VAR_16 = 0;
 struct ng_mesg *VAR_17;

 FUNC_6(VAR_12, VAR_17);
 switch (VAR_17->header.typecookie) {
 case 129:
  switch (VAR_17->header.cmd) {
  case 131:
  case 130:
      {
   struct ng_mppc_config *const VAR_18
       = (struct ng_mppc_config *)VAR_17->data;
   const int VAR_19 =
       VAR_17->header.cmd == 131;
   struct ng_mppc_dir *const VAR_20 = VAR_19 ?
       &VAR_14->xmit : &VAR_14->recv;


   if (VAR_17->header.arglen != sizeof(*VAR_18))
    FUNC_0(VAR_0);
   if (VAR_18->enable) {
    if ((VAR_18->bits & ~VAR_4) != 0)
     FUNC_0(VAR_0);

    if ((VAR_18->bits & VAR_3) != 0)
     FUNC_0(VAR_2);


    if ((VAR_18->bits & VAR_7) != 0)
     FUNC_0(VAR_2);

   } else
    VAR_18->bits = 0;


   if (!VAR_19)
    VAR_14->ctrlnode = FUNC_7(VAR_12);


   VAR_20->cfg = *VAR_18;
   VAR_20->cc = 0;
   VAR_20->flushed = 0;
   break;
      }

  case 128:
   FUNC_15(VAR_11);
   break;

  default:
   VAR_16 = VAR_0;
   break;
  }
  break;
 default:
  VAR_16 = VAR_0;
  break;
 }
done:
 FUNC_10(VAR_16, VAR_11, VAR_12, VAR_15);
 FUNC_8(VAR_17);
 return (VAR_16);
}
