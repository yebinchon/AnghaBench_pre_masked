
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {void* nfsv3_nsec; void* nfsv3_sec; } ;
struct TYPE_3__ {void* nfsv3_nsec; void* nfsv3_sec; } ;
struct nfsv3_sattr {scalar_t__ sa_atimetype; scalar_t__ sa_mtimetype; TYPE_2__ sa_mtime; TYPE_1__ sa_atime; void* sa_size; void* sa_sizeset; void* sa_gid; void* sa_gidset; void* sa_uid; void* sa_uidset; void* sa_mode; void* sa_modeset; } ;
typedef int netdissect_options ;


 void* FUNC_0 (int const*) ;
 int FUNC_1 (int const) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static const uint32_t *
FUNC_2(netdissect_options *VAR_1,
             const uint32_t *VAR_2, struct nfsv3_sattr *VAR_3)
{
 FUNC_1(VAR_2[0]);
 VAR_3->sa_modeset = FUNC_0(VAR_2);
 VAR_2++;
 if (VAR_3->sa_modeset) {
  FUNC_1(VAR_2[0]);
  VAR_3->sa_mode = FUNC_0(VAR_2);
  VAR_2++;
 }

 FUNC_1(VAR_2[0]);
 VAR_3->sa_uidset = FUNC_0(VAR_2);
 VAR_2++;
 if (VAR_3->sa_uidset) {
  FUNC_1(VAR_2[0]);
  VAR_3->sa_uid = FUNC_0(VAR_2);
  VAR_2++;
 }

 FUNC_1(VAR_2[0]);
 VAR_3->sa_gidset = FUNC_0(VAR_2);
 VAR_2++;
 if (VAR_3->sa_gidset) {
  FUNC_1(VAR_2[0]);
  VAR_3->sa_gid = FUNC_0(VAR_2);
  VAR_2++;
 }

 FUNC_1(VAR_2[0]);
 VAR_3->sa_sizeset = FUNC_0(VAR_2);
 VAR_2++;
 if (VAR_3->sa_sizeset) {
  FUNC_1(VAR_2[0]);
  VAR_3->sa_size = FUNC_0(VAR_2);
  VAR_2++;
 }

 FUNC_1(VAR_2[0]);
 VAR_3->sa_atimetype = FUNC_0(VAR_2);
 VAR_2++;
 if (VAR_3->sa_atimetype == VAR_0) {
  FUNC_1(VAR_2[1]);
  VAR_3->sa_atime.nfsv3_sec = FUNC_0(VAR_2);
  VAR_2++;
  VAR_3->sa_atime.nfsv3_nsec = FUNC_0(VAR_2);
  VAR_2++;
 }

 FUNC_1(VAR_2[0]);
 VAR_3->sa_mtimetype = FUNC_0(VAR_2);
 VAR_2++;
 if (VAR_3->sa_mtimetype == VAR_0) {
  FUNC_1(VAR_2[1]);
  VAR_3->sa_mtime.nfsv3_sec = FUNC_0(VAR_2);
  VAR_2++;
  VAR_3->sa_mtime.nfsv3_nsec = FUNC_0(VAR_2);
  VAR_2++;
 }

 return VAR_2;
trunc:
 return ((void*)0);
}
