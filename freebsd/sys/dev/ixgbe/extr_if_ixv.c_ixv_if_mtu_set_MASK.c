
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ifnet {scalar_t__ if_mtu; } ;
struct adapter {scalar_t__ max_frame_size; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ifnet* FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(if_ctx_t VAR_3, uint32_t VAR_4)
{
 struct adapter *VAR_5 = FUNC_2(VAR_3);
 struct ifnet *VAR_6 = FUNC_1(VAR_3);
 int VAR_7 = 0;

 FUNC_0("ioctl: SIOCSIFMTU (Set Interface MTU)");
 if (VAR_4 > VAR_1 - VAR_2) {
  VAR_7 = VAR_0;
 } else {
  VAR_6->if_mtu = VAR_4;
  VAR_5->max_frame_size = VAR_6->if_mtu + VAR_2;
 }

 return VAR_7;
}
