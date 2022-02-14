
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int voidp ;
struct TYPE_8__ {char* mnt_dir; char* mnt_fsname; char* mnt_opts; int mnt_type; } ;
typedef TYPE_1__ mntent_t ;
typedef int mnt ;
struct TYPE_9__ {int flags; int iso_flags; char* fspec; scalar_t__ ssector; scalar_t__ norrip; int iso_pgthresh; } ;
typedef TYPE_2__ cdfs_args_t ;
typedef int cdfs_args ;
typedef int caddr_t ;
typedef int MTYPE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_23 ;
 int FUNC_5 (TYPE_1__*,int,int ,int ,int ,int ,int *,int ,int) ;

__attribute__((used)) static int
FUNC_6(char *VAR_24, char *VAR_25, char *VAR_26, int VAR_27)
{
  cdfs_args_t VAR_28;
  mntent_t VAR_29;
  int VAR_30, VAR_31, VAR_32;




  MTYPE_TYPE VAR_33 = VAR_22;

  FUNC_4((voidp) &VAR_28, 0, sizeof(VAR_28));
  VAR_31 = 0;




  FUNC_4((voidp) &VAR_29, 0, sizeof(VAR_29));
  VAR_29.mnt_dir = VAR_24;
  VAR_29.mnt_fsname = VAR_25;
  VAR_29.mnt_type = VAR_21;
  VAR_29.mnt_opts = VAR_26;
  VAR_30 = FUNC_2(&VAR_29);
  VAR_32 = FUNC_5(&VAR_29, VAR_30, (caddr_t) &VAR_28, 0, VAR_33, 0, ((void*)0), VAR_23, VAR_27);

  return VAR_32;
}
