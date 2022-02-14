
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_name; int member_0; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,char**) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static PyObject *
FUNC_6(PyObject *VAR_1, PyObject *VAR_2)
{
 zfs_cmd_t VAR_3 = { 0 };
 int VAR_4;
 char *VAR_5;
 PyObject *VAR_6;

 if (!FUNC_0(VAR_2, "s", &VAR_5))
  return (((void*)0));

 (void) FUNC_5(VAR_3.zc_name, VAR_5, sizeof (VAR_3.zc_name));

 VAR_6 = FUNC_3(VAR_0, &VAR_3);
 if (VAR_6) {
  FUNC_2(&VAR_3, VAR_6);
 } else {
  FUNC_4(FUNC_1("cannot access dataset %s"), VAR_5);
 }
 return (VAR_6);
}
