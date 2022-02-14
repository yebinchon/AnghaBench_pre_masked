
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ zoneid_t ;
typedef int uint32_t ;
typedef scalar_t__ uid_t ;
struct TYPE_7__ {TYPE_1__* dtpr_provider; } ;
typedef TYPE_3__ dtrace_probe_t ;
struct TYPE_6__ {int dtpp_flags; scalar_t__ dtpp_uid; scalar_t__ dtpp_zoneid; } ;
struct TYPE_5__ {TYPE_2__ dtpv_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(const dtrace_probe_t *VAR_6, uint32_t VAR_7, uid_t VAR_8,
    zoneid_t VAR_9)
{
 if (VAR_7 != VAR_0) {
  uint32_t VAR_10 = VAR_6->dtpr_provider->dtpv_priv.dtpp_flags;
  uint32_t VAR_11 = VAR_7 & VAR_10;




  if ((VAR_7 & (VAR_3 | VAR_4 |
      VAR_1)) == 0)
   return (0);




  if (VAR_11 == 0 && VAR_10 != 0)
   return (0);




  if (((VAR_10 & ~VAR_11) & VAR_2) != 0 &&
      VAR_8 != VAR_6->dtpr_provider->dtpv_priv.dtpp_uid) {
   return (0);
  }





  if (((VAR_10 & ~VAR_11) & VAR_5) != 0 &&
      VAR_9 != VAR_6->dtpr_provider->dtpv_priv.dtpp_zoneid) {
   return (0);
  }
 }

 return (1);
}
