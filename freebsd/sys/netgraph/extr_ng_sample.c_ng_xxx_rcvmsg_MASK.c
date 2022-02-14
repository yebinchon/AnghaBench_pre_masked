
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* xxx_p ;
typedef int u_int32_t ;
struct ngxxxstat {int packets_out; int packets_in; } ;
struct TYPE_4__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {int flags; int packets_out; int packets_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ng_mesg*) ;



 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,struct ng_mesg*) ;

__attribute__((used)) static int
FUNC_5(node_p VAR_3, item_p VAR_4, hook_p VAR_5)
{
 const xxx_p VAR_6 = FUNC_3(VAR_3);
 struct ng_mesg *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 struct ng_mesg *VAR_9;

 FUNC_0(VAR_4, VAR_9);

 switch (VAR_9->header.typecookie) {
 case 130:
  switch (VAR_9->header.cmd) {
  case 129:
      {
   struct ngxxxstat *VAR_10;

   FUNC_2(VAR_7, VAR_9, sizeof(*VAR_10), VAR_2);
   if (!VAR_7) {
    VAR_8 = VAR_1;
    break;
   }
   VAR_10 = (struct ngxxxstat *) VAR_7->data;
   VAR_10->packets_in = VAR_6->packets_in;
   VAR_10->packets_out = VAR_6->packets_out;
   break;
      }
  case 128:
   if (VAR_9->header.arglen != sizeof(u_int32_t)) {
    VAR_8 = VAR_0;
    break;
   }
   VAR_6->flags = *((u_int32_t *) VAR_9->data);
   break;
  default:
   VAR_8 = VAR_0;
   break;
  }
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }


 FUNC_4(VAR_8, VAR_3, VAR_4, VAR_7);

 FUNC_1(VAR_9);
 return(VAR_8);
}
