
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int uid2home_t ;
typedef int uid ;
struct svc_req {int dummy; } ;
struct TYPE_13__ {scalar_t__ na_uid; scalar_t__ na_fileid; void* na_mtime; void* na_ctime; } ;
struct TYPE_10__ {TYPE_4__ ns_attr_u; } ;
struct TYPE_11__ {void* ns_status; TYPE_1__ ns_u; } ;
typedef TYPE_2__ nfsattrstat ;
typedef scalar_t__ gid_t ;
struct TYPE_12__ {int fh_data; } ;
typedef TYPE_3__ am_nfs_fh ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (char*,long,long) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (struct svc_req*,scalar_t__*,scalar_t__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int VAR_4 ;
 int * FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 TYPE_4__ VAR_11 ;

nfsattrstat *
FUNC_6(am_nfs_fh *VAR_12, struct svc_req *VAR_13)
{
  static nfsattrstat VAR_14;
  uid_t VAR_15 = (uid_t) VAR_0;
  gid_t VAR_16 = (gid_t) VAR_0;

  if (!VAR_9) {
    VAR_9++;
    VAR_6.na_ctime = VAR_10;
    VAR_6.na_mtime = VAR_10;
    VAR_8.na_ctime = VAR_10;
    VAR_8.na_mtime = VAR_10;
    VAR_11.na_ctime = VAR_10;
    VAR_11.na_mtime = VAR_10;
  }

  if (FUNC_3(VAR_13, &VAR_15, &VAR_16, VAR_4) < 0) {
    VAR_14.ns_status = VAR_1;
    return &VAR_14;
  }
  if (FUNC_2(VAR_12, &VAR_5)) {
    VAR_14.ns_status = VAR_2;
    VAR_14.ns_u.ns_attr_u = VAR_6;
  } else if (FUNC_2(VAR_12, &VAR_7)) {
    if (VAR_15 != VAR_8.na_uid) {
      FUNC_0(&VAR_8.na_mtime);
      VAR_8.na_uid = VAR_15;
    }


    VAR_14.ns_status = VAR_2;
    VAR_14.ns_u.ns_attr_u = VAR_8;
  } else {
    if (VAR_16 != VAR_3) {
      VAR_14.ns_status = VAR_1;
    } else {
      (void)FUNC_4(&VAR_15, VAR_12->fh_data, sizeof(VAR_15));
      if (FUNC_5(VAR_15) != (uid2home_t *) ((void*)0)) {
 VAR_14.ns_status = VAR_2;
 VAR_11.na_fileid = VAR_15;
 VAR_14.ns_u.ns_attr_u = VAR_11;
 FUNC_1("nfs_getattr: successful search for uid=%ld, gid=%ld",
      (long) VAR_15, (long) VAR_16);
      } else {
 VAR_14.ns_status = VAR_1;
      }
    }
  }
  return &VAR_14;
}
