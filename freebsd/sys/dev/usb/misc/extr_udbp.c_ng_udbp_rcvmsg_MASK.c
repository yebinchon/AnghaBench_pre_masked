
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct udbp_softc {int sc_mtx; int sc_packets_out; int sc_packets_in; } ;
struct ngudbpstat {int packets_out; int packets_in; } ;
struct TYPE_2__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct ng_mesg*) ;



 int FUNC_2 (struct ng_mesg*) ;
 int FUNC_3 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 struct udbp_softc* FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(node_p VAR_3, item_p VAR_4, hook_p VAR_5)
{
 struct udbp_softc *VAR_6 = FUNC_4(VAR_3);
 struct ng_mesg *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 struct ng_mesg *VAR_9;

 FUNC_1(VAR_4, VAR_9);

 switch (VAR_9->header.typecookie) {
 case 130:
  switch (VAR_9->header.cmd) {
  case 129:
   {
    struct ngudbpstat *VAR_10;

    FUNC_3(VAR_7, VAR_9, sizeof(*VAR_10), VAR_2);
    if (!VAR_7) {
     VAR_8 = VAR_1;
     break;
    }
    VAR_10 = (struct ngudbpstat *)VAR_7->data;
    FUNC_6(&VAR_6->sc_mtx);
    VAR_10->packets_in = VAR_6->sc_packets_in;
    VAR_10->packets_out = VAR_6->sc_packets_out;
    FUNC_7(&VAR_6->sc_mtx);
    break;
   }
  case 128:
   if (VAR_9->header.arglen != sizeof(uint32_t)) {
    VAR_8 = VAR_0;
    break;
   }
   FUNC_0("flags = 0x%08x\n",
       *((uint32_t *)VAR_9->data));
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


 FUNC_5(VAR_8, VAR_3, VAR_4, VAR_7);
 FUNC_2(VAR_9);
 return (VAR_8);
}
