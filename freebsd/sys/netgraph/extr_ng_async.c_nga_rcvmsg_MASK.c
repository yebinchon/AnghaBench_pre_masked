
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
struct ng_async_stat {int dummy; } ;
struct ng_async_cfg {int enabled; int amru; int smru; } ;
typedef TYPE_2__* sc_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {struct ng_async_cfg cfg; int slen; void* amode; int * sbuf; int * abuf; struct ng_async_stat stats; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,struct ng_mesg*) ;





 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct ng_mesg*) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ng_async_stat*,int) ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 const sc_p VAR_10 = FUNC_5(VAR_7);
 struct ng_mesg *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 struct ng_mesg *VAR_13;

 FUNC_2(VAR_8, VAR_13);
 switch (VAR_13->header.typecookie) {
 case 128:
  switch (VAR_13->header.cmd) {
  case 130:
   FUNC_4(VAR_11, VAR_13, sizeof(VAR_10->stats), VAR_4);
   if (VAR_11 == ((void*)0))
    FUNC_1(VAR_1);
   *((struct ng_async_stat *) VAR_11->data) = VAR_10->stats;
   break;
  case 132:
   FUNC_8(&VAR_10->stats, sizeof(VAR_10->stats));
   break;
  case 129:
      {
   struct ng_async_cfg *const VAR_14 =
    (struct ng_async_cfg *) VAR_13->data;
   u_char *VAR_15;

   if (VAR_13->header.arglen != sizeof(*VAR_14))
    FUNC_1(VAR_0);
   if (VAR_14->amru < VAR_6
       || VAR_14->amru > VAR_5
       || VAR_14->smru < VAR_6
       || VAR_14->smru > VAR_5)
    FUNC_1(VAR_0);
   VAR_14->enabled = !!VAR_14->enabled;
   if (VAR_14->smru > VAR_10->cfg.smru) {
    VAR_15 = FUNC_10(FUNC_0(VAR_14->smru),
        VAR_3, VAR_4);
    if (!VAR_15)
     FUNC_1(VAR_1);
    FUNC_9(VAR_10->abuf, VAR_3);
    VAR_10->abuf = VAR_15;
   }
   if (VAR_14->amru > VAR_10->cfg.amru) {
    VAR_15 = FUNC_10(FUNC_7(VAR_14->amru),
        VAR_3, VAR_4);
    if (!VAR_15)
     FUNC_1(VAR_1);
    FUNC_9(VAR_10->sbuf, VAR_3);
    VAR_10->sbuf = VAR_15;
    VAR_10->amode = VAR_2;
    VAR_10->slen = 0;
   }
   if (!VAR_14->enabled) {
    VAR_10->amode = VAR_2;
    VAR_10->slen = 0;
   }
   VAR_10->cfg = *VAR_14;
   break;
      }
  case 131:
   FUNC_4(VAR_11, VAR_13, sizeof(VAR_10->cfg), VAR_4);
   if (!VAR_11)
    FUNC_1(VAR_1);
   *((struct ng_async_cfg *) VAR_11->data) = VAR_10->cfg;
   break;
  default:
   FUNC_1(VAR_0);
  }
  break;
 default:
  FUNC_1(VAR_0);
 }
done:
 FUNC_6(VAR_12, VAR_7, VAR_8, VAR_11);
 FUNC_3(VAR_13);
 return (VAR_12);
}
