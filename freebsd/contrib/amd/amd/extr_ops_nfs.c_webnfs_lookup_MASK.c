
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int wchan_t ;
typedef TYPE_4__* voidp ;
typedef int u_long ;
struct rpc_msg {int dummy; } ;
typedef int opaque_t ;
struct TYPE_14__ {scalar_t__ am_fh3_length; } ;
struct TYPE_15__ {char* name; TYPE_2__ dir; } ;
struct TYPE_16__ {char* da_name; int da_fhandle; TYPE_3__ what; } ;
typedef TYPE_4__ nfsdiropargs ;
typedef int iobuf ;
typedef int fwd_fun ;
struct TYPE_12__ {scalar_t__ sin_port; } ;
struct TYPE_17__ {scalar_t__ fh_nfs_version; scalar_t__ fh_id; TYPE_10__ fh_sin; int fh_path; TYPE_1__* fh_fs; } ;
typedef TYPE_6__ fh_cache ;
typedef TYPE_4__ am_LOOKUP3args ;
typedef scalar_t__ XDRPROC_T_TYPE ;
struct TYPE_13__ {int fs_host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,char*,int,TYPE_10__*,TYPE_10__*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,int ,struct rpc_msg*,TYPE_4__*,scalar_t__,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_10 ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (struct rpc_msg*,int ,scalar_t__,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_10 (size_t) ;
 int FUNC_11 (char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_12(fh_cache *VAR_13, fwd_fun VAR_14, wchan_t VAR_15)
{
  struct rpc_msg VAR_16;
  int VAR_17;
  char VAR_18[VAR_7];
  int VAR_19;
  u_long VAR_20;
  XDRPROC_T_TYPE VAR_21;
  voidp VAR_22;
  nfsdiropargs VAR_23;



  char *VAR_24;
  size_t VAR_25;

  if (!VAR_10) {
    VAR_19 = FUNC_4();
    if (VAR_19)
      return VAR_19;
  }

  if (VAR_13->fh_sin.sin_port == 0) {

    FUNC_7(VAR_9, "webnfs_lookup: port == 0 for nfs on %s, fixed",
  VAR_13->fh_fs->fs_host);
    VAR_13->fh_sin.sin_port = FUNC_3(VAR_3);
  }




  VAR_25 = FUNC_9(VAR_13->fh_path) + 2;
  VAR_24 = (char *) FUNC_10(VAR_25);
  VAR_24[0] = 0x80;
  FUNC_11(VAR_24 + 1, VAR_13->fh_path, VAR_25 - 1);
    VAR_20 = VAR_1;
    VAR_21 = (XDRPROC_T_TYPE) VAR_12;
    VAR_22 = &VAR_23;

    FUNC_6(&VAR_23.da_fhandle, 0, VAR_2);
    VAR_23.da_name = VAR_24;




  FUNC_7(VAR_8, "webnfs_lookup: NFS version %d", (int) VAR_13->fh_nfs_version);

  FUNC_8(&VAR_16, VAR_4, VAR_13->fh_nfs_version, VAR_20);
  VAR_17 = FUNC_5(VAR_18,
   sizeof(VAR_18),
   VAR_20,
   &VAR_16,
   VAR_22,
   (XDRPROC_T_TYPE) VAR_21,
   VAR_10);

  if (VAR_17 > 0) {
    VAR_19 = FUNC_2(FUNC_0(VAR_6, VAR_13->fh_id),
         VAR_18,
         VAR_17,
         &VAR_13->fh_sin,
         &VAR_13->fh_sin,
         (opaque_t) ((long) VAR_13->fh_id),
         VAR_14);
  } else {
    VAR_19 = -VAR_17;
  }

  FUNC_1(VAR_24);
  return VAR_19;
}
