
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int voidp ;
struct sockaddr_in {int dummy; } ;
struct TYPE_10__ {int * auth_flavors_val; } ;
struct TYPE_9__ {int * fhandle3_val; int fhandle3_len; } ;
struct TYPE_11__ {TYPE_2__ auth_flavors; TYPE_1__ fhandle; } ;
struct TYPE_12__ {TYPE_3__ mountinfo; } ;
struct fhstatus {int fhs_fh; int fhs_status; TYPE_4__ mountres3_u; int am_fh3_length; int * am_fh3_data; } ;
struct am_mountres3 {int fhs_fh; int fhs_status; TYPE_4__ mountres3_u; int am_fh3_length; int * am_fh3_data; } ;
typedef int res3 ;
typedef int res ;
typedef int opaque_t ;
struct TYPE_13__ {int v2; struct fhstatus v3; } ;
struct TYPE_15__ {scalar_t__ fh_nfs_version; scalar_t__ fh_wchan; void* fh_error; int fh_path; TYPE_6__* fh_fs; TYPE_5__ fh_nfs_handle; void* fh_status; } ;
typedef TYPE_7__ fh_cache ;
typedef int am_nfs_fh3 ;
typedef int XDRPROC_T_TYPE ;
struct TYPE_14__ {int fs_host; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (char*,unsigned long,...) ;
 TYPE_7__* FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct fhstatus*,int ,int) ;
 void* FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_9(voidp VAR_6, int VAR_7, struct sockaddr_in *VAR_8, struct sockaddr_in *VAR_9, opaque_t VAR_10, int VAR_11)
{
  fh_cache *VAR_12;
  struct fhstatus VAR_13;




  VAR_12 = FUNC_2(VAR_10, VAR_11);
  if (!VAR_12)
    return;
    FUNC_4(&VAR_13, 0, sizeof(VAR_13));
    VAR_12->fh_error = FUNC_5(VAR_6, VAR_7, (voidp) &VAR_13,
        (XDRPROC_T_TYPE) VAR_5);
    VAR_12->fh_status = FUNC_7(VAR_13.fhs_status);
    FUNC_3(&VAR_12->fh_nfs_handle.v2, &VAR_13.fhs_fh, VAR_1);




  if (!VAR_12->fh_error) {
    FUNC_1("got filehandle for %s:%s", VAR_12->fh_fs->fs_host, VAR_12->fh_path);
  } else {
    FUNC_6(VAR_3, "filehandle denied for %s:%s", VAR_12->fh_fs->fs_host, VAR_12->fh_path);





    VAR_12->fh_error = VAR_0;
  }




  if (VAR_12->fh_wchan) {
    FUNC_1("Calling wakeup on %#lx", (unsigned long) VAR_12->fh_wchan);
    FUNC_8(VAR_12->fh_wchan);
  }
}
