
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zfs_type_t ;
struct TYPE_6__ {scalar_t__ zfs_type; int * zfs_hdl; int zfs_name; int zpool_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint64_t ;
typedef int parent ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,char const*,int *,int ,int *) ;
 char* FUNC_3 (int ,char*) ;
 int VAR_10 ;
 int FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (int *,int,char*) ;
 int * FUNC_12 (int *,int ,int *,int ,TYPE_1__*,int ,char*) ;
 int FUNC_13 (int *,char const*,int ,int ) ;

int
FUNC_14(zfs_handle_t *VAR_11, const char *VAR_12, nvlist_t *VAR_13)
{
 char VAR_14[VAR_6];
 int VAR_15;
 char VAR_16[1024];
 libzfs_handle_t *VAR_17 = VAR_11->zfs_hdl;
 uint64_t VAR_18;

 FUNC_1(VAR_11->zfs_type == VAR_8);

 (void) FUNC_7(VAR_16, sizeof (VAR_16), FUNC_3(VAR_5,
     "cannot create '%s'"), VAR_12);


 if (!FUNC_13(VAR_17, VAR_12, VAR_7, VAR_1))
  return (FUNC_8(VAR_17, VAR_3, VAR_16));


 if (FUNC_2(VAR_17, VAR_12, &VAR_18, VAR_0, ((void*)0)) != 0)
  return (-1);

 (void) FUNC_6(VAR_12, VAR_14, sizeof (VAR_14));



 if (VAR_13) {
  zfs_type_t VAR_19;

  if (FUNC_0(VAR_11)) {
   VAR_19 = VAR_9;
  } else {
   VAR_19 = VAR_7;
  }
  if ((VAR_13 = FUNC_12(VAR_17, VAR_19, VAR_13, VAR_18,
      VAR_11, VAR_11->zpool_hdl, VAR_16)) == ((void*)0))
   return (-1);
  if (FUNC_10(VAR_11, VAR_13) == -1) {
   FUNC_5(VAR_13);
   return (-1);
  }
 }

 VAR_15 = FUNC_4(VAR_12, VAR_11->zfs_name, VAR_13);
 FUNC_5(VAR_13);

 if (VAR_15 != 0) {
  switch (VAR_10) {

  case 129:
   FUNC_9(VAR_11->zfs_hdl, FUNC_3(VAR_5,
       "no such parent '%s'"), VAR_14);
   return (FUNC_8(VAR_11->zfs_hdl, VAR_4, VAR_16));

  case 128:
   FUNC_9(VAR_11->zfs_hdl, FUNC_3(VAR_5,
       "source and target pools differ"));
   return (FUNC_8(VAR_11->zfs_hdl, VAR_2,
       VAR_16));

  default:
   return (FUNC_11(VAR_11->zfs_hdl, VAR_10,
       VAR_16));
  }
 }

 return (VAR_15);
}
