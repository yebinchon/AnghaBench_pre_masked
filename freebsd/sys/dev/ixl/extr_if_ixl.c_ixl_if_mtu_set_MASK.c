
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ixl_vsi {TYPE_1__* shared; } ;
struct ixl_pf {struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;
struct TYPE_2__ {scalar_t__ isc_max_frame_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 struct ixl_pf* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_5, uint32_t VAR_6)
{
 struct ixl_pf *VAR_7 = FUNC_1(VAR_5);
 struct ixl_vsi *VAR_8 = &VAR_7->vsi;

 FUNC_0("ioctl: SIOCSIFMTU (Set Interface MTU)");
 if (VAR_6 > VAR_4 - VAR_2 - VAR_1 -
  VAR_3)
  return (VAR_0);

 VAR_8->shared->isc_max_frame_size = VAR_6 + VAR_2 + VAR_1 +
  VAR_3;

 return (0);
}
