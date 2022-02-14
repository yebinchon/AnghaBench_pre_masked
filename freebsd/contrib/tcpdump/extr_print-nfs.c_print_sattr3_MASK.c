
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nfsv3_nsec; int nfsv3_sec; } ;
struct TYPE_3__ {int nfsv3_nsec; int nfsv3_sec; } ;
struct nfsv3_sattr {scalar_t__ sa_atimetype; scalar_t__ sa_mtimetype; TYPE_2__ sa_mtime; TYPE_1__ sa_atime; int sa_gid; scalar_t__ sa_gidset; int sa_uid; scalar_t__ sa_uidset; int sa_mode; scalar_t__ sa_modeset; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(netdissect_options *VAR_1,
             const struct nfsv3_sattr *VAR_2, int VAR_3)
{
 if (VAR_2->sa_modeset)
  FUNC_0((VAR_1, " mode %o", VAR_2->sa_mode));
 if (VAR_2->sa_uidset)
  FUNC_0((VAR_1, " uid %u", VAR_2->sa_uid));
 if (VAR_2->sa_gidset)
  FUNC_0((VAR_1, " gid %u", VAR_2->sa_gid));
 if (VAR_3 > 1) {
  if (VAR_2->sa_atimetype == VAR_0)
   FUNC_0((VAR_1, " atime %u.%06u", VAR_2->sa_atime.nfsv3_sec,
          VAR_2->sa_atime.nfsv3_nsec));
  if (VAR_2->sa_mtimetype == VAR_0)
   FUNC_0((VAR_1, " mtime %u.%06u", VAR_2->sa_mtime.nfsv3_sec,
          VAR_2->sa_mtime.nfsv3_nsec));
 }
}
