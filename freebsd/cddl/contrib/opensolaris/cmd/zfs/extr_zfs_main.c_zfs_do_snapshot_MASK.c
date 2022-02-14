
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {char* sd_snapname; int * sd_nvl; void* sd_recursive; int member_0; } ;
typedef TYPE_1__ snap_cbdata_t ;
typedef int nvlist_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int ) ;
 int VAR_9 ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (void*) ;
 int * FUNC_9 (int ,char*,int) ;
 scalar_t__ FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_12(int VAR_10, char **VAR_11)
{
 int VAR_12 = 0;
 int VAR_13;
 nvlist_t *VAR_14;
 snap_cbdata_t VAR_15 = { 0 };
 boolean_t VAR_16 = VAR_0;

 if (FUNC_4(&VAR_14, VAR_2, 0) != 0)
  FUNC_3();
 if (FUNC_4(&VAR_15.sd_nvl, VAR_2, 0) != 0)
  FUNC_3();


 while ((VAR_13 = FUNC_1(VAR_10, VAR_11, "ro:")) != -1) {
  switch (VAR_13) {
  case 'o':
   if (FUNC_6(VAR_14, VAR_6) != 0)
    return (1);
   break;
  case 'r':
   VAR_15.sd_recursive = VAR_1;
   VAR_16 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_9, FUNC_2("invalid option '%c'\n"),
       VAR_8);
   goto usage;
  }
 }

 VAR_10 -= VAR_7;
 VAR_11 += VAR_7;


 if (VAR_10 < 1) {
  (void) FUNC_0(VAR_9, "%s", FUNC_2("missing snapshot argument\n"));
  goto usage;
 }

 if (VAR_10 > 1)
  VAR_16 = VAR_1;
 for (; VAR_10 > 0; VAR_10--, VAR_11++) {
  char *VAR_17;
  zfs_handle_t *VAR_18;

  VAR_17 = FUNC_7(VAR_11[0], '@');
  if (VAR_17 == ((void*)0))
   goto usage;
  *VAR_17 = '\0';
  VAR_15.sd_snapname = VAR_17 + 1;
  VAR_18 = FUNC_9(VAR_5, VAR_11[0],
      VAR_3 | VAR_4);
  if (VAR_18 == ((void*)0))
   goto usage;
  if (FUNC_10(VAR_18, &VAR_15) != 0)
   goto usage;
 }

 VAR_12 = FUNC_11(VAR_5, VAR_15.sd_nvl, VAR_14);
 FUNC_5(VAR_15.sd_nvl);
 FUNC_5(VAR_14);
 if (VAR_12 != 0 && VAR_16)
  (void) FUNC_0(VAR_9, "%s", FUNC_2("no snapshots were created\n"));
 return (VAR_12 != 0);

usage:
 FUNC_5(VAR_15.sd_nvl);
 FUNC_5(VAR_14);
 FUNC_8(VAR_0);
 return (-1);
}
