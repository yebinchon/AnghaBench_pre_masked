
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int ifq_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_hwassist; TYPE_1__ if_snd; int if_output; int if_ioctl; int if_mtu; } ;
struct if_clone {int dummy; } ;
typedef int caddr_t ;


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
 int VAR_10 ;
 struct ifnet* VAR_11 ;
 int FUNC_0 (struct ifnet*,int ,int) ;
 struct ifnet* FUNC_1 (int ) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_4(struct if_clone *VAR_16, int VAR_17, caddr_t VAR_18)
{
 struct ifnet *VAR_19;

 VAR_19 = FUNC_1(VAR_7);
 if (VAR_19 == ((void*)0))
  return (VAR_1);

 FUNC_3(VAR_19, VAR_14, VAR_17);
 VAR_19->if_mtu = VAR_8;
 VAR_19->if_flags = VAR_5 | VAR_6;
 VAR_19->if_ioctl = VAR_13;
 VAR_19->if_output = VAR_15;
 VAR_19->if_snd.ifq_maxlen = VAR_12;
 VAR_19->if_capabilities = VAR_19->if_capenable =
     VAR_2 | VAR_3 | VAR_4;
 VAR_19->if_hwassist = VAR_9 | VAR_10;
 FUNC_2(VAR_19);
 FUNC_0(VAR_19, VAR_0, sizeof(u_int32_t));
 if (VAR_11 == ((void*)0))
  VAR_11 = VAR_19;

 return (0);
}
