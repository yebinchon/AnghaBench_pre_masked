
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint16_t ;
struct ng_pptpgre_conf {size_t cid; } ;
struct TYPE_10__ {int typecookie; int const cmd; int arglen; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef TYPE_3__* hpriv_p ;
typedef int hook_p ;
struct TYPE_12__ {struct ng_pptpgre_conf conf; } ;
struct TYPE_11__ {struct ng_pptpgre_conf stats; TYPE_3__ uppersess; int * sesshash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,struct ng_mesg*) ;






 int FUNC_4 (struct ng_mesg*) ;
 int FUNC_5 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int,int ,int ,struct ng_mesg*) ;
 size_t FUNC_8 (size_t) ;
 int FUNC_9 (struct ng_pptpgre_conf*,scalar_t__,int) ;
 int FUNC_10 (struct ng_pptpgre_conf*,int) ;
 TYPE_3__* FUNC_11 (TYPE_2__* const,size_t) ;
 int FUNC_12 (TYPE_3__*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_13(node_p VAR_4, item_p VAR_5, hook_p VAR_6)
{
 const priv_p VAR_7 = FUNC_6(VAR_4);
 struct ng_mesg *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 struct ng_mesg *VAR_10;

 FUNC_3(VAR_5, VAR_10);
 switch (VAR_10->header.typecookie) {
 case 132:
  switch (VAR_10->header.cmd) {
  case 128:
      {
   struct ng_pptpgre_conf *const VAR_11 =
    (struct ng_pptpgre_conf *) VAR_10->data;
   hpriv_p VAR_12;
   uint16_t VAR_13;


   if (VAR_10->header.arglen != sizeof(*VAR_11))
    FUNC_0(VAR_0);

   VAR_12 = FUNC_11(VAR_7, VAR_11->cid);

   if (VAR_12 == ((void*)0)) {
    VAR_12 = &VAR_7->uppersess;
    FUNC_2(VAR_12, VAR_3);
    VAR_13 = FUNC_8(VAR_11->cid);
    FUNC_1(&VAR_7->sesshash[VAR_13], VAR_12,
        VAR_3);
   }
   FUNC_12(VAR_12);
   VAR_12->conf = *VAR_11;
   break;
      }
  case 130:
      {
   hpriv_p VAR_14;

   if (VAR_10->header.arglen == 2) {

        VAR_14 = FUNC_11(VAR_7,
        *((uint16_t *)VAR_10->data));
    if (VAR_14 == ((void*)0))
     FUNC_0(VAR_0);
   } else if (VAR_10->header.arglen == 0) {

    VAR_14 = &VAR_7->uppersess;
   } else
    FUNC_0(VAR_0);
   FUNC_5(VAR_8, VAR_10, sizeof(VAR_14->conf), VAR_2);
   if (VAR_8 == ((void*)0))
    FUNC_0(VAR_1);
   FUNC_9(&VAR_14->conf, VAR_8->data, sizeof(VAR_14->conf));
   break;
      }
  case 129:
  case 133:
  case 131:
      {
   if (VAR_10->header.cmd != 133) {
    FUNC_5(VAR_8, VAR_10,
        sizeof(VAR_7->stats), VAR_2);
    if (VAR_8 == ((void*)0))
     FUNC_0(VAR_1);
    FUNC_9(&VAR_7->stats,
        VAR_8->data, sizeof(VAR_7->stats));
   }
   if (VAR_10->header.cmd != 129)
    FUNC_10(&VAR_7->stats, sizeof(VAR_7->stats));
   break;
      }
  default:
   VAR_9 = VAR_0;
   break;
  }
  break;
 default:
  VAR_9 = VAR_0;
  break;
 }
done:
 FUNC_7(VAR_9, VAR_4, VAR_5, VAR_8);
 FUNC_4(VAR_10);
 return (VAR_9);
}
