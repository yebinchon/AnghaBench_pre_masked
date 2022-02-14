
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_long ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_in {int dummy; } ;
typedef int mntpt ;
typedef int mntlist ;
struct TYPE_18__ {int mf_flags; char* mf_info; int mf_mount; TYPE_1__* mf_server; } ;
typedef TYPE_2__ mntfs ;
typedef int fs_name ;
typedef TYPE_3__* exports ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int caddr_t ;
typedef int am_node ;
typedef TYPE_3__* am_nfs_handle_t ;
typedef int XDRPROC_T_TYPE ;
struct TYPE_20__ {scalar_t__ cl_auth; } ;
struct TYPE_19__ {char* ex_dir; struct TYPE_19__* ex_next; } ;
struct TYPE_17__ {char* fs_host; scalar_t__ fs_version; struct sockaddr_in* fs_ip; } ;
typedef int SVC_IN_ARG_TYPE ;
typedef TYPE_5__ CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_3__**) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*,int ,int ,int ,int ,int ,struct timeval) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (TYPE_3__**,char*,char*,TYPE_2__*) ;
 int FUNC_11 (TYPE_5__*,char*,TYPE_3__**,scalar_t__) ;
 TYPE_5__* FUNC_12 (char*,struct sockaddr_in*,struct timeval*,int*,int ) ;
 int FUNC_13 (char*,int,TYPE_3__*,int ) ;
 int FUNC_14 () ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (TYPE_3__**,int,int,int ) ;
 int * FUNC_17 (int ,int ) ;
 int VAR_17 ;
 char* FUNC_18 (char*,char) ;
 int FUNC_19 () ;
 scalar_t__ VAR_18 ;
 int FUNC_20 (int ,int ) ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_23(am_node *VAR_20, mntfs *VAR_21)
{
  struct timeval VAR_22;
  CLIENT *VAR_23;
  enum clnt_stat VAR_24;
  int VAR_25;
  int VAR_26, VAR_27;
  exports VAR_28 = 0, VAR_29;
  exports *VAR_30 = ((void*)0);
  am_nfs_handle_t *VAR_31 = ((void*)0);
  char *VAR_32;
  int VAR_33 = 0;
  struct sockaddr_in VAR_34;
  int VAR_35 = VAR_9;
  int VAR_36 = VAR_3;
  mntlist *VAR_37;
  char VAR_38[VAR_4], *VAR_39;
  char VAR_40[VAR_4];
  struct timeval VAR_41;
  u_long VAR_42;




  if (VAR_21->mf_flags & VAR_5) {
    FUNC_15(VAR_12, "amfs_host_mount: cannot support WebNFS");
    return VAR_2;
  }




  VAR_37 = FUNC_17(VAR_21->mf_mount, VAR_15);
  VAR_32 = VAR_21->mf_server->fs_host;
  VAR_34 = *VAR_21->mf_server->fs_ip;
  FUNC_15(VAR_14, "amfs_host_mount: NFS version %d", (int) VAR_21->mf_server->fs_version);





    VAR_42 = VAR_7;
  VAR_41.tv_sec = 2;
  VAR_41.tv_usec = 0;




  VAR_23 = FUNC_12(VAR_32, &VAR_34, &VAR_41, &VAR_35, VAR_42);
  if (VAR_23 == ((void*)0)) {




    FUNC_15(VAR_12, "get_mount_client failed for %s", VAR_32);

    VAR_33 = VAR_2;
    goto out;
  }
  if (!VAR_16) {
    VAR_33 = FUNC_14();
    if (VAR_33)
      goto out;
  }
  VAR_23->cl_auth = VAR_16;

  FUNC_9("Fetching export list from %s", VAR_32);




  VAR_22 = 10;
  VAR_22 = 0;
  VAR_24 = FUNC_4(VAR_23,
   VAR_6,
   (XDRPROC_T_TYPE) VAR_19,
   0,
   (XDRPROC_T_TYPE) VAR_18,
   (SVC_IN_ARG_TYPE) & VAR_28,
   VAR_22);
  if (VAR_24 != VAR_10) {
    const char *VAR_43 = FUNC_7(VAR_24);
    FUNC_15(VAR_12, "host_mount rpc failed: %s", VAR_43);

    VAR_33 = VAR_2;
    goto out;
  }




  for (VAR_25 = 0, VAR_29 = VAR_28; VAR_29; VAR_29 = VAR_29->ex_next) {
    VAR_25++;
  }






  VAR_30 = (exports *) FUNC_21(VAR_25 * sizeof(exports));
  for (VAR_26 = 0, VAR_29 = VAR_28; VAR_29; VAR_29 = VAR_29->ex_next) {
    FUNC_13(VAR_40, sizeof(VAR_40), VAR_29, VAR_21->mf_mount);
    if (FUNC_2(VAR_37, VAR_40))

      VAR_36 = VAR_11;
    else
      VAR_30[VAR_26++] = VAR_29;
  }
  VAR_25 = VAR_26;







  FUNC_16(VAR_30, VAR_25, sizeof(exports), VAR_17);




  VAR_31 = (am_nfs_handle_t *) FUNC_21(VAR_25 * sizeof(am_nfs_handle_t));






  for (VAR_26 = VAR_27 = 0; VAR_26 < VAR_25; VAR_26++) {

    if (VAR_26 > VAR_27 && VAR_30[VAR_27] && FUNC_0(VAR_30[VAR_26]->ex_dir, VAR_30[VAR_27]->ex_dir)) {
      FUNC_9("avoiding dup fhandle requested for %s", VAR_30[VAR_26]->ex_dir);
      VAR_30[VAR_26] = ((void*)0);
    } else {
      VAR_27 = VAR_26;
      VAR_33 = FUNC_11(VAR_23, VAR_30[VAR_26]->ex_dir, &VAR_31[VAR_26],
       VAR_21->mf_server->fs_version);
      if (VAR_33)
 VAR_30[VAR_26] = ((void*)0);
    }
  }







  FUNC_22(VAR_38, VAR_21->mf_info, sizeof(VAR_38));
  if ((VAR_39 = FUNC_18(VAR_38, ':')) == (char *) ((void*)0)) {
    FUNC_15(VAR_13, "amfs_host_mount: mf_info has no colon");
    VAR_33 = VAR_1;
    goto out;
  }
  ++VAR_39;
  for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++) {
    VAR_29 = VAR_30[VAR_26];
    if (VAR_29) {






      FUNC_22(VAR_39, VAR_29->ex_dir, sizeof(VAR_38) - (VAR_39 - VAR_38));
      FUNC_13(VAR_40, sizeof(VAR_40), VAR_29, VAR_21->mf_mount);
      if (FUNC_10(&VAR_31[VAR_26], VAR_40, VAR_38, VAR_21) == 0)
 VAR_36 = VAR_11;
    }
  }




out:
  FUNC_8(VAR_37);
  FUNC_1(VAR_30);
  FUNC_1(VAR_31);
  if (VAR_35 != VAR_9)
    (void) FUNC_3(VAR_35);
  if (VAR_23)
    FUNC_5(VAR_23);
  if (VAR_28)
    FUNC_20((XDRPROC_T_TYPE) VAR_18, (caddr_t) &VAR_28);
  if (VAR_36)
    return 0;
  return VAR_33;
}
