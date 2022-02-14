
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_cookie; int zc_name; int member_0; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int PyObject ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,char**,int*,int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * FUNC_2 (char*,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ VAR_4 ;
 int * FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static PyObject *
FUNC_9(PyObject *VAR_5, PyObject *VAR_6)
{
 int VAR_7;
 uint64_t VAR_8;
 zfs_cmd_t VAR_9 = { 0 };
 int VAR_10;
 char *VAR_11;
 PyObject *VAR_12;
 PyObject *VAR_13 = ((void*)0);

 if (!FUNC_0(VAR_6, "siK", &VAR_11, &VAR_10, &VAR_8))
  return (((void*)0));

 (void) FUNC_8(VAR_9.zc_name, VAR_11, sizeof (VAR_9.zc_name));
 VAR_9.zc_cookie = VAR_8;

 if (VAR_10)
  VAR_7 = VAR_3;
 else
  VAR_7 = VAR_2;

 VAR_12 = FUNC_6(VAR_7, &VAR_9);
 if (VAR_12) {
  FUNC_5(&VAR_9, VAR_12);
  VAR_13 = FUNC_2("sKO", VAR_9.zc_name, VAR_9.zc_cookie, VAR_12);
  FUNC_3(VAR_12);
 } else if (VAR_4 == VAR_0) {
  FUNC_1(VAR_1);
 } else {
  if (VAR_10)
   FUNC_7(FUNC_4("cannot get snapshots of %s"), VAR_11);
  else
   FUNC_7(FUNC_4("cannot get child datasets of %s"), VAR_11);
 }
 return (VAR_13);
}
