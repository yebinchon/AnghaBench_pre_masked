
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_short ;
typedef scalar_t__ u_char ;
struct ifnet {int if_mtu; int if_flags; int if_capenable; int if_capabilities; int if_snd; int if_start; scalar_t__ if_ioctl; void* if_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (struct ifnet*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int) ;
 struct ifnet* FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*,char const*,int ) ;
 int VAR_9 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 () ;
 int VAR_11 ;
 int VAR_12 ;

int
FUNC_8(const char *VAR_13, struct ifnet **VAR_14)
{
 struct ifnet *VAR_15;
 u_short VAR_16;
 uint32_t VAR_17;
 u_char VAR_18[6];
 int VAR_19 = FUNC_7();

 if (VAR_19 < 0)
  return VAR_0;




 VAR_16 = FUNC_3(0x00be);
 VAR_17 = (uint32_t) VAR_12;
 FUNC_1(&VAR_16, VAR_18, sizeof(short));
 FUNC_1(&VAR_17, &VAR_18[2], sizeof(uint32_t));
 VAR_18[5] = (uint8_t)VAR_19;

 VAR_15 = FUNC_4(VAR_7);
 if (VAR_15 == ((void*)0)) {
  FUNC_6("if_alloc failed");
  return VAR_1;
 }
 FUNC_5(VAR_15, VAR_13, VAR_8);
 VAR_15->if_mtu = 65536;
 VAR_15->if_flags = VAR_6 | VAR_5 | VAR_4;
 VAR_15->if_init = (void *)VAR_10;
 VAR_15->if_ioctl = VAR_10;
 VAR_15->if_start = VAR_11;
 VAR_15->if_mtu = VAR_2;
 FUNC_0(&VAR_15->if_snd, VAR_9);
 VAR_15->if_capabilities |= VAR_3;
 VAR_15->if_capenable |= VAR_3;

 FUNC_2(VAR_15, VAR_18);
 *VAR_14 = VAR_15;
 return 0;
}
