
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t zfs_share_proto_t ;
typedef int * sa_share_t ;
struct TYPE_8__ {int libzfs_sharehdl; } ;
typedef TYPE_1__ libzfs_handle_t ;
struct TYPE_9__ {int p_unshare_err; int p_name; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char const*) ;
 TYPE_7__* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ,char const*,...) ;
 int FUNC_8 (TYPE_1__*,int ,void*) ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int ,char*) ;
 char* FUNC_11 (TYPE_1__*,char const*) ;

__attribute__((used)) static int
FUNC_12(libzfs_handle_t *VAR_10, const char *VAR_11, const char *VAR_12,
    zfs_share_proto_t VAR_13)
{
 char VAR_14[VAR_2];
 FILE *VAR_15;
 int VAR_16;

 if (VAR_13 != VAR_3) {
  FUNC_2(VAR_9, "No SMB support in FreeBSD yet.\n");
  return (VAR_0);
 }

 VAR_16 = FUNC_4(VAR_7, VAR_12);
 if (VAR_16 != 0) {
  FUNC_6(VAR_10, "%s", FUNC_5(VAR_16));
  return (FUNC_7(VAR_10, VAR_1,
      FUNC_1(VAR_6,
      "cannot unshare '%s'"), VAR_11));
 }

 return (0);
}
