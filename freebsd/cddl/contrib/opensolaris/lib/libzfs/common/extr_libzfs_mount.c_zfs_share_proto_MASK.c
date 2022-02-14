
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int zprop_source_t ;
typedef size_t zfs_share_proto_t ;
struct TYPE_13__ {int zfs_name; TYPE_2__* zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int shareopts ;
typedef int mountpoint ;
struct TYPE_14__ {int libzfs_sharehdl; } ;
typedef TYPE_2__ libzfs_handle_t ;
struct TYPE_12__ {int p_share_err; int p_name; int p_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int *,char*,int ,int ,char*,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,size_t) ;
 int FUNC_4 (int ,char*,char*) ;
 TYPE_11__* VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,...) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*,int,int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,char*,int,int *,char*,int,int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int *,int ) ;
 int * FUNC_13 (int ,char*) ;

__attribute__((used)) static int
FUNC_14(zfs_handle_t *VAR_13, zfs_share_proto_t *VAR_14)
{
 char VAR_15[VAR_8];
 char VAR_16[VAR_8];
 char VAR_17[VAR_8];
 libzfs_handle_t *VAR_18 = VAR_13->zfs_hdl;
 zfs_share_proto_t *VAR_19;
 zprop_source_t VAR_20;
 int VAR_21, VAR_22;

 if (!FUNC_9(VAR_13, VAR_15, sizeof (VAR_15), ((void*)0)))
  return (0);

 for (VAR_19 = VAR_14; *VAR_19 != VAR_2; VAR_19++) {



  if (FUNC_10(VAR_13, VAR_10[*VAR_19].p_prop,
      VAR_16, sizeof (VAR_16), &VAR_20, VAR_17,
      VAR_8, VAR_0) != 0 ||
      FUNC_5(VAR_16, "off") == 0)
   continue;
  if (FUNC_11(VAR_13, VAR_9))
   continue;
  if (*VAR_19 != VAR_3) {
   FUNC_3(VAR_12, "Unsupported share protocol: %zu.\n",
       *VAR_19);
   continue;
  }

  if (FUNC_5(VAR_16, "on") == 0)
   VAR_21 = FUNC_4(VAR_7, VAR_15, "");
  else
   VAR_21 = FUNC_4(VAR_7, VAR_15, VAR_16);
  if (VAR_21 != 0)

  {
   (void) FUNC_6(VAR_18,
       VAR_10[*VAR_19].p_share_err,
       FUNC_2(VAR_6, "cannot share '%s'"),
       FUNC_7(VAR_13));
   return (-1);
  }

 }
 return (0);
}
