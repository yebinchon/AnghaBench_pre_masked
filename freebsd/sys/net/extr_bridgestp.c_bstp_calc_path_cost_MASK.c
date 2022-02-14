
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {scalar_t__ if_link_state; int if_baudrate; } ;
struct bstp_port {int bp_flags; int bp_path_cost; scalar_t__ bp_protover; struct ifnet* bp_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static uint32_t
FUNC_0(struct bstp_port *VAR_6)
{
 struct ifnet *VAR_7 = VAR_6->bp_ifp;
 uint32_t VAR_8;


 if (VAR_6->bp_flags & VAR_2)
  return VAR_6->bp_path_cost;

 if (VAR_7->if_link_state == VAR_5) {

  VAR_6->bp_flags |= VAR_3;
  return (VAR_0);
 }

 if (VAR_7->if_baudrate < 1000)
  return (VAR_0);


 VAR_8 = 20000000000ULL / (VAR_7->if_baudrate / 1000);

 if (VAR_8 > VAR_1)
  VAR_8 = VAR_1;


 if (VAR_6->bp_protover == VAR_4 && VAR_8 > 65535)
  VAR_8 = 65535;

 return (VAR_8);
}
