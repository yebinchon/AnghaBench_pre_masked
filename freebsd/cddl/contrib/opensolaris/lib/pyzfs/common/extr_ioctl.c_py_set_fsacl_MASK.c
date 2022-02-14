
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t zc_nvlist_src_size; uintptr_t zc_nvlist_src; int zc_perm_action; int zc_name; int member_0; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char**,int*,int *,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (int *,char**,size_t*,int ,int ) ;
 int FUNC_8 (int *,size_t*,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,int) ;

__attribute__((used)) static PyObject *
FUNC_11(PyObject *VAR_4, PyObject *VAR_5)
{
 int VAR_6;
 size_t VAR_7;
 zfs_cmd_t VAR_8 = { 0 };
 char *VAR_9, *VAR_10;
 PyObject *VAR_11, *VAR_12;
 nvlist_t *VAR_13;
 int VAR_14;

 if (!FUNC_0(VAR_5, "siO!", &VAR_9, &VAR_6,
     &VAR_1, &VAR_11))
  return (((void*)0));

 VAR_13 = FUNC_3(VAR_11);
 if (VAR_13 == ((void*)0))
  return (((void*)0));

 VAR_14 = FUNC_8(VAR_13, &VAR_7, VAR_0);
 FUNC_2(VAR_14 == 0);
 VAR_10 = FUNC_6(VAR_7);
 VAR_14 = FUNC_7(VAR_13, &VAR_10, &VAR_7, VAR_0, 0);
 FUNC_2(VAR_14 == 0);

 (void) FUNC_10(VAR_8.zc_name, VAR_9, sizeof (VAR_8.zc_name));
 VAR_8.zc_nvlist_src_size = VAR_7;
 VAR_8.zc_nvlist_src = (uintptr_t)VAR_10;
 VAR_8.zc_perm_action = VAR_6;

 VAR_14 = FUNC_5(VAR_3, &VAR_8);
 FUNC_4(VAR_10);
 if (VAR_14) {
  FUNC_9(FUNC_1("cannot set permissions on %s"), VAR_9);
  return (((void*)0));
 }

 VAR_2;
}
