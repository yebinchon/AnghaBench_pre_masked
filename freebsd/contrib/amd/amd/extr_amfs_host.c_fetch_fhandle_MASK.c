
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char* voidp ;
typedef scalar_t__ u_long ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct fhstatus {int fhs_status; int fhs_fh; } ;
struct TYPE_7__ {int * fhandle3_val; int fhandle3_len; } ;
struct TYPE_8__ {TYPE_1__ fhandle; } ;
struct TYPE_9__ {TYPE_2__ mountinfo; } ;
struct am_mountres3 {int fhs_status; TYPE_3__ mountres3_u; } ;
typedef int res3 ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_10__ {int am_fh3_length; int * am_fh3_data; } ;
struct TYPE_11__ {int v2; TYPE_4__ v3; } ;
typedef TYPE_5__ am_nfs_handle_t ;
typedef int am_nfs_fh3 ;
typedef int XDRPROC_T_TYPE ;
typedef int SVC_IN_ARG_TYPE ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,struct timeval) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int VAR_8 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int
FUNC_6(CLIENT *VAR_12, char *VAR_13, am_nfs_handle_t *VAR_14, u_long VAR_15)
{
  struct timeval VAR_16;
  enum clnt_stat VAR_17;
  struct fhstatus VAR_18;







  VAR_16.tv_sec = 20;
  VAR_16.tv_usec = 0;

  FUNC_2("Fetching fhandle for %s", VAR_13);






  FUNC_5(VAR_7, "fetch_fhandle: NFS version %d", (int) VAR_15);
    VAR_17 = FUNC_0(VAR_12,
     VAR_1,
     (XDRPROC_T_TYPE) VAR_10,
     (SVC_IN_ARG_TYPE) &VAR_13,
     (XDRPROC_T_TYPE) VAR_11,
     (SVC_IN_ARG_TYPE) &VAR_18,
     VAR_16);
    if (VAR_17 != VAR_5) {
      FUNC_5(VAR_6, "mountd rpc failed: %s", FUNC_1(VAR_17));
      return VAR_0;
    }

    if (VAR_18.fhs_status) {
      VAR_8 = VAR_18.fhs_status;
      FUNC_2("fhandle fetch for mount version 1 failed: %m");
      return VAR_8;
    }
    FUNC_3(&VAR_14->v2, &VAR_18.fhs_fh, VAR_2);





  return 0;
}
