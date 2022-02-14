
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ng_pred1_stats {int dummy; } ;
struct ng_pred1_config {int dummy; } ;
struct TYPE_4__ {scalar_t__ typecookie; int cmd; int arglen; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {int stats; int ctrlnode; struct ng_pred1_config cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct ng_mesg*) ;
 int FUNC_2 (int ) ;


 scalar_t__ VAR_3 ;



 int FUNC_3 (struct ng_mesg*) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int
FUNC_10(node_p VAR_4, item_p VAR_5, hook_p VAR_6)
{
 const priv_p VAR_7 = FUNC_5(VAR_4);
 struct ng_mesg *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 struct ng_mesg *VAR_10;

 FUNC_1(VAR_5, VAR_10);

 if (VAR_10->header.typecookie != VAR_3)
  FUNC_0(VAR_0);

 switch (VAR_10->header.cmd) {
 case 131:
     {
  struct ng_pred1_config *const VAR_11 =
      (struct ng_pred1_config *)VAR_10->data;


  if (VAR_10->header.arglen != sizeof(*VAR_11))
   FUNC_0(VAR_0);


  VAR_7->cfg = *VAR_11;


  VAR_7->ctrlnode = FUNC_2(VAR_5);


  FUNC_7(VAR_4);

  break;
     }
 case 128:
  FUNC_7(VAR_4);
  break;

 case 129:
 case 132:
 case 130:
     {

  if (VAR_10->header.cmd != 132) {
   FUNC_4(VAR_8, VAR_10,
       sizeof(struct ng_pred1_stats), VAR_2);
   if (VAR_8 == ((void*)0))
    FUNC_0(VAR_1);
   FUNC_8(&VAR_7->stats, VAR_8->data,
       sizeof(struct ng_pred1_stats));
  }

  if (VAR_10->header.cmd != 129)
   FUNC_9(&VAR_7->stats, sizeof(struct ng_pred1_stats));
  break;
     }

 default:
  VAR_9 = VAR_0;
  break;
 }
done:
 FUNC_6(VAR_9, VAR_4, VAR_5, VAR_8);
 FUNC_3(VAR_10);
 return (VAR_9);
}
