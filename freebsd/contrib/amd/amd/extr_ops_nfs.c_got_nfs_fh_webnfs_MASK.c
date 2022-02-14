
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int voidp ;
struct sockaddr_in {int dummy; } ;
typedef int res3 ;
typedef int res ;
typedef int opaque_t ;
struct TYPE_17__ {int drok_fhandle; } ;
struct TYPE_18__ {TYPE_5__ dr_drok_u; } ;
struct TYPE_13__ {int * am_fh3_data; int am_fh3_length; } ;
struct TYPE_14__ {TYPE_1__ object; } ;
struct TYPE_15__ {TYPE_2__ ok; } ;
struct TYPE_20__ {TYPE_6__ dr_u; int dr_status; int am_fh3_length; TYPE_3__ res_u; int * am_fh3_data; int status; } ;
typedef TYPE_8__ nfsdiropres ;
struct TYPE_16__ {int v2; TYPE_8__ v3; } ;
struct TYPE_21__ {scalar_t__ fh_nfs_version; scalar_t__ fh_wchan; void* fh_error; int fh_path; TYPE_7__* fh_fs; TYPE_4__ fh_nfs_handle; void* fh_status; } ;
typedef TYPE_9__ fh_cache ;
typedef int am_nfs_fh3 ;
typedef TYPE_8__ am_LOOKUP3res ;
typedef int XDRPROC_T_TYPE ;
struct TYPE_19__ {int fs_host; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,unsigned long,...) ;
 TYPE_9__* FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_8__*,int ,int) ;
 void* FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_8(voidp VAR_6, int VAR_7, struct sockaddr_in *VAR_8, struct sockaddr_in *VAR_9, opaque_t VAR_10, int VAR_11)
{
  fh_cache *VAR_12;
  nfsdiropres VAR_13;




  VAR_12 = FUNC_1(VAR_10, VAR_11);
  if (!VAR_12)
    return;
    FUNC_3(&VAR_13, 0, sizeof(VAR_13));
    VAR_12->fh_error = FUNC_4(VAR_6, VAR_7, (voidp) &VAR_13,
        (XDRPROC_T_TYPE) VAR_5);
    VAR_12->fh_status = FUNC_6(VAR_13.dr_status);
    FUNC_2(&VAR_12->fh_nfs_handle.v2, &VAR_13.dr_u.dr_drok_u.drok_fhandle, VAR_1);




  if (!VAR_12->fh_error) {
    FUNC_0("got filehandle for %s:%s", VAR_12->fh_fs->fs_host, VAR_12->fh_path);
  } else {
    FUNC_5(VAR_3, "filehandle denied for %s:%s", VAR_12->fh_fs->fs_host, VAR_12->fh_path);





    VAR_12->fh_error = VAR_0;
  }




  if (VAR_12->fh_wchan) {
    FUNC_0("Calling wakeup on %#lx", (unsigned long) VAR_12->fh_wchan);
    FUNC_7(VAR_12->fh_wchan);
  }
}
