
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (TYPE_1__*,char const*,scalar_t__*,scalar_t__*,scalar_t__*) ;

int
FUNC_6(zpool_handle_t *VAR_4, const char *VAR_5,
    uint64_t *VAR_6)
{
 char VAR_7[1024];
 nvlist_t *VAR_8;
 boolean_t VAR_9, VAR_10, VAR_11;
 libzfs_handle_t *VAR_12 = VAR_4->zpool_hdl;

 (void) FUNC_2(VAR_7, sizeof (VAR_7),
     FUNC_0(VAR_2, "cannot determine indirect size of %s"),
     VAR_5);

 if ((VAR_8 = FUNC_5(VAR_4, VAR_5, &VAR_9, &VAR_10,
     &VAR_11)) == ((void*)0))
  return (FUNC_3(VAR_12, VAR_1, VAR_7));

 if (VAR_9 || VAR_10 || VAR_11) {
  *VAR_6 = 0;
  return (0);
 }

 if (FUNC_1(VAR_8, VAR_3, VAR_6) != 0) {
  FUNC_4(VAR_12, FUNC_0(VAR_2,
      "indirect size not available"));
  return (FUNC_3(VAR_12, VAR_0, VAR_7));
 }
 return (0);
}
