
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct ifnet {int if_flags; int if_drv_flags; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct ifnet *VAR_4, u_long VAR_5, caddr_t VAR_6)
{

 if (VAR_5 != VAR_3)
  return (VAR_0);
 if (VAR_4->if_flags & VAR_2)
  VAR_4->if_drv_flags |= VAR_1;
 else
  VAR_4->if_drv_flags &= ~VAR_1;
 return (0);
}
