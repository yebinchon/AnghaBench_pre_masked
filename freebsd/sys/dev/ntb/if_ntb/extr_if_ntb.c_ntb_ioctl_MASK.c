
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ntb_net_ctx {int media; scalar_t__ mtu; } ;
struct ifreq {int ifr_reqcap; scalar_t__ ifr_mtu; } ;
typedef int if_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_0 (int ,int,scalar_t__) ;
 struct ntb_net_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_6(if_t VAR_8, u_long VAR_9, caddr_t VAR_10)
{
 struct ntb_net_ctx *VAR_11 = FUNC_1(VAR_8);
 struct ifreq *VAR_12 = (struct ifreq *)VAR_10;
 int VAR_13 = 0;

 switch (VAR_9) {
 case 130:
 case 134:
 case 133:
  break;

 case 128:
     {
  if (VAR_12->ifr_mtu > VAR_11->mtu - VAR_1) {
   VAR_13 = VAR_0;
   break;
  }

  FUNC_4(VAR_8, VAR_12->ifr_mtu);
  break;
     }

 case 129:
 case 132:
  VAR_13 = FUNC_5(VAR_8, VAR_12, &VAR_11->media, VAR_9);
  break;

 case 131:
  if (VAR_12->ifr_reqcap & VAR_2)
   FUNC_2(VAR_8, VAR_2, 0);
  else
   FUNC_2(VAR_8, 0, VAR_2);
  if (VAR_12->ifr_reqcap & VAR_4) {
   FUNC_2(VAR_8, VAR_4, 0);
   FUNC_3(VAR_8, VAR_6, 0);
  } else {
   FUNC_2(VAR_8, 0, VAR_4);
   FUNC_3(VAR_8, 0, VAR_6);
  }
  if (VAR_12->ifr_reqcap & VAR_3)
   FUNC_2(VAR_8, VAR_3, 0);
  else
   FUNC_2(VAR_8, 0, VAR_3);
  if (VAR_12->ifr_reqcap & VAR_5) {
   FUNC_2(VAR_8, VAR_5, 0);
   FUNC_3(VAR_8, VAR_7, 0);
  } else {
   FUNC_2(VAR_8, 0, VAR_5);
   FUNC_3(VAR_8, 0, VAR_7);
  }
  break;

 default:
  VAR_13 = FUNC_0(VAR_8, VAR_9, VAR_10);
  break;
 }

 return (VAR_13);
}
