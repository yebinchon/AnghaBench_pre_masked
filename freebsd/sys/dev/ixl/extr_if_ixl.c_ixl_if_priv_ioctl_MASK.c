
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ixl_pf {int dummy; } ;
struct ifdrv {scalar_t__ ifd_cmd; } ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ixl_pf* FUNC_0 (int ) ;
 int FUNC_1 (struct ixl_pf*,struct ifdrv*) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_2, u_long VAR_3, caddr_t VAR_4)
{
 struct ixl_pf *VAR_5 = FUNC_0(VAR_2);
 struct ifdrv *VAR_6 = (struct ifdrv *)VAR_4;
 int VAR_7 = 0;


 if (VAR_6->ifd_cmd == VAR_1)
  VAR_7 = FUNC_1(VAR_5, VAR_6);
 else
  VAR_7 = VAR_0;

 return (VAR_7);
}
