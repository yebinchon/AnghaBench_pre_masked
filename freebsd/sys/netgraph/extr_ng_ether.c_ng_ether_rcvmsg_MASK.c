
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_char ;
struct sockaddr_dl {int sdl_len; int sdl_alen; void* sdl_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_11__ {int typecookie; int arglen; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
struct ifmultiaddr {int dummy; } ;
struct epoch_tracker {int dummy; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_13__ {int if_index; int if_xname; } ;
struct TYPE_12__ {int promisc; int autoSrcAddr; TYPE_3__* ifp; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (struct sockaddr_dl*) ;
 int VAR_6 ;
 int FUNC_2 (struct epoch_tracker) ;
 int FUNC_3 (struct epoch_tracker) ;
 int FUNC_4 (int ,struct ng_mesg*) ;
 int FUNC_5 (struct ng_mesg*) ;
 int FUNC_6 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_2__* FUNC_7 (int ) ;
 int FUNC_8 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_9 (void*,scalar_t__,int) ;
 int FUNC_10 (struct sockaddr_dl*,int) ;
 int FUNC_11 (TYPE_3__*,struct sockaddr*,struct ifmultiaddr**) ;
 int FUNC_12 (TYPE_3__*,struct sockaddr*) ;
 struct ifmultiaddr* FUNC_13 (TYPE_3__*,struct sockaddr*) ;
 int FUNC_14 (TYPE_3__*,int*,int) ;
 int FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_18(node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 const priv_p VAR_10 = FUNC_7(VAR_7);
 struct ng_mesg *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 struct ng_mesg *VAR_13;

 FUNC_4(VAR_8, VAR_13);
 switch (VAR_13->header.typecookie) {
 case 138:
  switch (VAR_13->header.cmd) {
  case 132:
   FUNC_6(VAR_11, VAR_13, VAR_5, VAR_6);
   if (VAR_11 == ((void*)0)) {
    VAR_12 = VAR_3;
    break;
   }
   FUNC_17(VAR_11->data, VAR_10->ifp->if_xname, VAR_5);
   break;
  case 133:
   FUNC_6(VAR_11, VAR_13, sizeof(u_int32_t), VAR_6);
   if (VAR_11 == ((void*)0)) {
    VAR_12 = VAR_3;
    break;
   }
   *((u_int32_t *)VAR_11->data) = VAR_10->ifp->if_index;
   break;
  case 134:
   FUNC_6(VAR_11, VAR_13, VAR_4, VAR_6);
   if (VAR_11 == ((void*)0)) {
    VAR_12 = VAR_3;
    break;
   }
   FUNC_9(FUNC_0(VAR_10->ifp),
       VAR_11->data, VAR_4);
   break;
  case 129:
      {
   if (VAR_13->header.arglen != VAR_4) {
    VAR_12 = VAR_2;
    break;
   }
   VAR_12 = FUNC_14(VAR_10->ifp,
       (u_char *)VAR_13->data, VAR_4);
   break;
      }
  case 131:
   FUNC_6(VAR_11, VAR_13, sizeof(u_int32_t), VAR_6);
   if (VAR_11 == ((void*)0)) {
    VAR_12 = VAR_3;
    break;
   }
   *((u_int32_t *)VAR_11->data) = VAR_10->promisc;
   break;
  case 128:
      {
   u_char VAR_14;

   if (VAR_13->header.arglen != sizeof(u_int32_t)) {
    VAR_12 = VAR_2;
    break;
   }
   VAR_14 = !!*((u_int32_t *)VAR_13->data);
   if (VAR_14 ^ VAR_10->promisc) {
    if ((VAR_12 = FUNC_15(VAR_10->ifp, VAR_14)) != 0)
     break;
    VAR_10->promisc = VAR_14;
   }
   break;
      }
  case 135:
   FUNC_6(VAR_11, VAR_13, sizeof(u_int32_t), VAR_6);
   if (VAR_11 == ((void*)0)) {
    VAR_12 = VAR_3;
    break;
   }
   *((u_int32_t *)VAR_11->data) = VAR_10->autoSrcAddr;
   break;
  case 130:
   if (VAR_13->header.arglen != sizeof(u_int32_t)) {
    VAR_12 = VAR_2;
    break;
   }
   VAR_10->autoSrcAddr = !!*((u_int32_t *)VAR_13->data);
   break;
  case 139:
      {
   struct sockaddr_dl VAR_15;
   struct epoch_tracker VAR_16;
   struct ifmultiaddr *VAR_17;

   if (VAR_13->header.arglen != VAR_4) {
    VAR_12 = VAR_2;
    break;
   }
   FUNC_10(&VAR_15, sizeof(struct sockaddr_dl));
   VAR_15.sdl_len = sizeof(struct sockaddr_dl);
   VAR_15.sdl_family = VAR_0;
   VAR_15.sdl_alen = VAR_4;
   FUNC_9((void *)VAR_13->data, FUNC_1(&VAR_15),
       VAR_4);







   FUNC_2(VAR_16);
   VAR_17 = FUNC_13(VAR_10->ifp,
       (struct sockaddr *)&VAR_15);
   FUNC_3(VAR_16);
   if (VAR_17 != ((void*)0)) {
    VAR_12 = VAR_1;
   } else {
    VAR_12 = FUNC_11(VAR_10->ifp,
        (struct sockaddr *)&VAR_15, &VAR_17);
   }
   break;
      }
  case 137:
      {
   struct sockaddr_dl VAR_18;

   if (VAR_13->header.arglen != VAR_4) {
    VAR_12 = VAR_2;
    break;
   }
   FUNC_10(&VAR_18, sizeof(struct sockaddr_dl));
   VAR_18.sdl_len = sizeof(struct sockaddr_dl);
   VAR_18.sdl_family = VAR_0;
   VAR_18.sdl_alen = VAR_4;
   FUNC_9((void *)VAR_13->data, FUNC_1(&VAR_18),
       VAR_4);
   VAR_12 = FUNC_12(VAR_10->ifp,
       (struct sockaddr *)&VAR_18);
   break;
      }
  case 136:
   FUNC_16(VAR_10->ifp);
   break;
  default:
   VAR_12 = VAR_2;
   break;
  }
  break;
 default:
  VAR_12 = VAR_2;
  break;
 }
 FUNC_8(VAR_12, VAR_7, VAR_8, VAR_11);
 FUNC_5(VAR_13);
 return (VAR_12);
}
