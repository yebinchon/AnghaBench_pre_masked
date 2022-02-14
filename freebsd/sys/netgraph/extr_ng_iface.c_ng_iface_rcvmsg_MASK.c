
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int typecookie; int cmd; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
struct ifnet {int if_flags; int if_index; int if_xname; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_5 (struct ifnet* const,int ) ;
 int FUNC_6 (scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_7(node_p VAR_10, item_p VAR_11, hook_p VAR_12)
{
 const priv_p VAR_13 = FUNC_3(VAR_10);
 struct ifnet *const VAR_14 = VAR_13->ifp;
 struct ng_mesg *VAR_15 = ((void*)0);
 int VAR_16 = 0;
 struct ng_mesg *VAR_17;

 FUNC_0(VAR_11, VAR_17);
 switch (VAR_17->header.typecookie) {
 case 133:
  switch (VAR_17->header.cmd) {
  case 131:
   FUNC_2(VAR_15, VAR_17, VAR_6, VAR_9);
   if (VAR_15 == ((void*)0)) {
    VAR_16 = VAR_2;
    break;
   }
   FUNC_6(VAR_15->data, VAR_14->if_xname, VAR_6);
   break;

  case 130:
  case 134:
      {


   if ((VAR_14->if_flags & VAR_5) != 0)
    return (VAR_0);


   switch (VAR_17->header.cmd) {
   case 130:
    VAR_14->if_flags |= VAR_4;
    VAR_14->if_flags &= ~VAR_3;
    break;
   case 134:
    VAR_14->if_flags &= ~VAR_4;
    VAR_14->if_flags |= VAR_3;
    break;
   }
   break;
      }

  case 132:
   FUNC_2(VAR_15, VAR_17, sizeof(uint32_t), VAR_9);
   if (VAR_15 == ((void*)0)) {
    VAR_16 = VAR_2;
    break;
   }
   *((uint32_t *)VAR_15->data) = VAR_13->ifp->if_index;
   break;

  default:
   VAR_16 = VAR_1;
   break;
  }
  break;
 case 135:
  switch (VAR_17->header.cmd) {
  case 128:
   FUNC_5(VAR_14, VAR_8);
   break;
  case 129:
   FUNC_5(VAR_14, VAR_7);
   break;
  default:
   break;
  }
  break;
 default:
  VAR_16 = VAR_1;
  break;
 }
 FUNC_4(VAR_16, VAR_10, VAR_11, VAR_15);
 FUNC_1(VAR_17);
 return (VAR_16);
}
