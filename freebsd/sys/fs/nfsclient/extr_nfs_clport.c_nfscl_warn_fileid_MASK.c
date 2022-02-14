
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct nfsvattr {scalar_t__ na_fileid; } ;
struct TYPE_2__ {char* nmcom_hostname; } ;
struct nfsmount {TYPE_1__ nm_com; scalar_t__* nm_fsid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_1(struct nfsmount *VAR_2, struct nfsvattr *VAR_3,
    struct nfsvattr *VAR_4)
{
 int VAR_5;

 if (VAR_0 >= 0 &&
     VAR_1 >= VAR_0)
  return;
 VAR_5 = 0;
 if (VAR_0 >= 0) {
  if (++VAR_1 >= VAR_0)
   VAR_5 = 1;
 }

 FUNC_0("newnfs: server '%s' error: fileid changed. "
     "fsid %jx:%jx: expected fileid %#jx, got %#jx. "
     "(BROKEN NFS SERVER OR MIDDLEWARE)\n",
     VAR_2->nm_com.nmcom_hostname,
     (uintmax_t)VAR_2->nm_fsid[0],
     (uintmax_t)VAR_2->nm_fsid[1],
     (uintmax_t)VAR_3->na_fileid,
     (uintmax_t)VAR_4->na_fileid);

 if (VAR_5)
  FUNC_0("newnfs: Logged %d times about fileid corruption; "
      "going quiet to avoid spamming logs excessively. (Limit "
      "is: %d).\n", VAR_1,
      VAR_0);
}
