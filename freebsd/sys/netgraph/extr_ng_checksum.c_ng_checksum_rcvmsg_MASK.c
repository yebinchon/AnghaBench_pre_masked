
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ typecookie; int cmd; int arglen; } ;
struct ng_mesg {TYPE_1__ header; struct ng_checksum_config* data; } ;
struct ng_checksum_stats {int dummy; } ;
struct ng_checksum_config {int csum_flags; int csum_offload; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {struct ng_checksum_config stats; struct ng_checksum_config* conf; int dlt; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct ng_mesg*) ;

 scalar_t__ VAR_5 ;






 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ng_mesg*) ;
 int FUNC_3 (struct ng_mesg*,struct ng_mesg*,int,int) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_6 (struct ng_checksum_config*,struct ng_checksum_config*,int) ;
 int FUNC_7 (struct ng_checksum_config*,int) ;
 int FUNC_8 (struct ng_checksum_config*,int ) ;
 struct ng_checksum_config* FUNC_9 (int,int ,int) ;

__attribute__((used)) static int
FUNC_10(node_p VAR_8, item_p VAR_9, hook_p VAR_10)
{
 const priv_p VAR_11 = FUNC_4(VAR_8);
 struct ng_checksum_config *VAR_12, *VAR_13;
 struct ng_mesg *VAR_14;
 struct ng_mesg *VAR_15 = ((void*)0);
 int VAR_16 = 0;

 FUNC_1(VAR_9, VAR_14);

 if (VAR_14->header.typecookie != VAR_5)
  FUNC_0(VAR_0);

 switch (VAR_14->header.cmd)
 {
  case 131:
   FUNC_3(VAR_15, VAR_14, sizeof(uint8_t), VAR_3);

   if (VAR_15 == ((void*)0))
    FUNC_0(VAR_1);

   *((uint8_t *) VAR_15->data) = VAR_11->dlt;

   break;

  case 128:
   if (VAR_14->header.arglen != sizeof(uint8_t))
    FUNC_0(VAR_0);

   switch (*(uint8_t *) VAR_14->data)
   {
    case 136:
    case 135:
     VAR_11->dlt = *(uint8_t *) VAR_14->data;
     break;

    default:
     FUNC_0(VAR_0);
   }

   break;

  case 132:
   if (VAR_11->conf == ((void*)0))
    FUNC_0(0);

   FUNC_3(VAR_15, VAR_14, sizeof(struct ng_checksum_config), VAR_3);

   if (VAR_15 == ((void*)0))
    FUNC_0(VAR_1);

   FUNC_6(VAR_11->conf, VAR_15->data, sizeof(struct ng_checksum_config));

   break;

  case 129:
   VAR_12 = (struct ng_checksum_config *) VAR_14->data;

   if (VAR_14->header.arglen != sizeof(struct ng_checksum_config))
    FUNC_0(VAR_0);

   VAR_12->csum_flags &= VAR_6|VAR_7;
   VAR_12->csum_offload &= VAR_6|VAR_7;

   VAR_13 = FUNC_9(sizeof(struct ng_checksum_config), VAR_2, VAR_3|VAR_4);

   FUNC_6(VAR_12, VAR_13, sizeof(struct ng_checksum_config));

   if (VAR_11->conf)
    FUNC_8(VAR_11->conf, VAR_2);

   VAR_11->conf = VAR_13;

   break;

  case 130:
  case 134:
  case 133:
   if (VAR_14->header.cmd != 134) {
    FUNC_3(VAR_15, VAR_14, sizeof(struct ng_checksum_stats), VAR_3);

    if (VAR_15 == ((void*)0))
     FUNC_0(VAR_1);

    FUNC_6(&(VAR_11->stats), VAR_15->data, sizeof(struct ng_checksum_stats));
   }

   if (VAR_14->header.cmd != 130)
    FUNC_7(&(VAR_11->stats), sizeof(struct ng_checksum_stats));

   break;

  default:
   FUNC_0(VAR_0);
 }

done:
 FUNC_5(VAR_16, VAR_8, VAR_9, VAR_15);
 FUNC_2(VAR_14);

 return (VAR_16);
}
