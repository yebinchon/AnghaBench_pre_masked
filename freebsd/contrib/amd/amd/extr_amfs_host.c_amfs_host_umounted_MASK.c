
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_long ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_in {int dummy; } ;
struct TYPE_9__ {int mf_refc; int mf_flags; TYPE_1__* mf_server; scalar_t__ mf_error; } ;
typedef TYPE_2__ mntfs ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int XDRPROC_T_TYPE ;
struct TYPE_10__ {scalar_t__ cl_auth; } ;
struct TYPE_8__ {char* fs_host; scalar_t__ fs_version; struct sockaddr_in* fs_ip; } ;
typedef TYPE_3__ CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int ,int ,struct timeval) ;
 int FUNC_2 (TYPE_3__*) ;
 char const* FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;
 TYPE_3__* FUNC_6 (char*,struct sockaddr_in*,struct timeval*,int*,int ) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_9(mntfs *VAR_12)
{
  char *VAR_13;
  CLIENT *VAR_14;
  enum clnt_stat VAR_15;
  struct sockaddr_in VAR_16;
  int VAR_17 = VAR_5;
  struct timeval VAR_18;
  u_long VAR_19;

  if (VAR_12->mf_error || VAR_12->mf_refc > 1 || !VAR_12->mf_server)
    return;




  if (VAR_12->mf_flags & VAR_1) {
    FUNC_8(VAR_8, "amfs_host_umounted: cannot support WebNFS");
    return;
  }





  VAR_13 = VAR_12->mf_server->fs_host;
  VAR_16 = *VAR_12->mf_server->fs_ip;
  FUNC_8(VAR_9, "amfs_host_umounted: NFS version %d", (int) VAR_12->mf_server->fs_version);





    VAR_19 = VAR_3;




  VAR_18.tv_sec = 10;
  VAR_18.tv_usec = 0;
  VAR_14 = FUNC_6(VAR_13, &VAR_16, &VAR_18, &VAR_17, VAR_19);
  if (VAR_14 == ((void*)0)) {




    FUNC_8(VAR_8, "get_mount_client failed for %s", VAR_13);

    goto out;
  }

  if (!VAR_10) {
    if (FUNC_7())
      goto out;
  }
  VAR_14->cl_auth = VAR_10;

  FUNC_5("Unmounting all from %s", VAR_13);

  VAR_15 = FUNC_1(VAR_14,
   VAR_2,
   (XDRPROC_T_TYPE) VAR_11,
   0,
   (XDRPROC_T_TYPE) VAR_11,
   0,
   VAR_18);
  if (VAR_15 != VAR_6 && VAR_15 != VAR_7) {

    const char *VAR_20 = FUNC_4(VAR_15);
    FUNC_8(VAR_8, "unmount all from %s rpc failed: %s", VAR_13, VAR_20);
    goto out;
  }

out:
  if (VAR_17 != VAR_5)
    (void) FUNC_0(VAR_17);
  if (VAR_14)
    FUNC_2(VAR_14);
}
