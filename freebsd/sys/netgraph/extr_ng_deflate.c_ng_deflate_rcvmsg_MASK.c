
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ typecookie; int cmd; int arglen; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
struct ng_deflate_stats {int dummy; } ;
struct ng_deflate_config {int windowBits; int enable; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_10__ {int msg; int * next_in; } ;
struct TYPE_9__ {int stats; int ctrlnode; int seqnum; struct ng_deflate_config cfg; TYPE_3__ cx; int compress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct ng_mesg*) ;
 int FUNC_2 (int ) ;


 scalar_t__ VAR_4 ;



 int FUNC_3 (struct ng_mesg*) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,struct ng_mesg*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,scalar_t__,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int ,int ,int,int,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (int ,char*,int,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(node_p VAR_9, item_p VAR_10, hook_p VAR_11)
{
 const priv_p VAR_12 = FUNC_5(VAR_9);
 struct ng_mesg *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 struct ng_mesg *VAR_15;

 FUNC_1(VAR_10, VAR_15);

 if (VAR_15->header.typecookie != VAR_4)
  FUNC_0(VAR_0);

 switch (VAR_15->header.cmd) {
 case 131:
     {
  struct ng_deflate_config *const VAR_16
      = (struct ng_deflate_config *)VAR_15->data;


  if (VAR_15->header.arglen != sizeof(*VAR_16))
   FUNC_0(VAR_0);
  if (VAR_16->enable) {
      if (VAR_16->windowBits < 8 || VAR_16->windowBits > 15)
   FUNC_0(VAR_0);
  } else
      VAR_16->windowBits = 0;


  if (VAR_12->cfg.enable) {
   if (VAR_12->compress)
    FUNC_9(&VAR_12->cx);
   else
    FUNC_11(&VAR_12->cx);
   VAR_12->cfg.enable = 0;
  }


  VAR_12->cfg = *VAR_16;

  if (VAR_12->cfg.enable) {
   VAR_12->cx.next_in = ((void*)0);
   int VAR_17;
   if (VAR_12->compress) {
    if ((VAR_17 = FUNC_10(&VAR_12->cx,
        VAR_5, VAR_7,
        -VAR_16->windowBits, 8,
        VAR_6)) != VAR_8) {
     FUNC_13(VAR_2,
         "deflateInit2: error %d, %s\n",
         VAR_17, VAR_12->cx.msg);
     VAR_12->cfg.enable = 0;
     FUNC_0(VAR_1);
    }
   } else {
    if ((VAR_17 = FUNC_12(&VAR_12->cx,
        -VAR_16->windowBits)) != VAR_8) {
     FUNC_13(VAR_2,
         "inflateInit2: error %d, %s\n",
         VAR_17, VAR_12->cx.msg);
     VAR_12->cfg.enable = 0;
     FUNC_0(VAR_1);
    }
   }
  }


  VAR_12->seqnum = 0;


  VAR_12->ctrlnode = FUNC_2(VAR_10);
  break;
     }

 case 128:
  FUNC_14(VAR_9);
  break;

 case 129:
 case 132:
 case 130:

  if (VAR_15->header.cmd != 132) {
   FUNC_4(VAR_13, VAR_15,
       sizeof(struct ng_deflate_stats), VAR_3);
   if (VAR_13 == ((void*)0))
    FUNC_0(VAR_1);
   FUNC_7(&VAR_12->stats, VAR_13->data,
       sizeof(struct ng_deflate_stats));
  }


  if (VAR_15->header.cmd != 129)
   FUNC_8(&VAR_12->stats,
       sizeof(struct ng_deflate_stats));
  break;

 default:
  VAR_14 = VAR_0;
  break;
 }
done:
 FUNC_6(VAR_14, VAR_9, VAR_10, VAR_13);
 FUNC_3(VAR_15);
 return (VAR_14);
}
