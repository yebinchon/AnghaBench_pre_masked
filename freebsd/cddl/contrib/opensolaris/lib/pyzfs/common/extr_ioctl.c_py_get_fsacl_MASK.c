
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_name; int member_0; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,char**) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static PyObject *
FUNC_5(PyObject *VAR_1, PyObject *VAR_2)
{
 zfs_cmd_t VAR_3 = { 0 };
 char *VAR_4;
 PyObject *VAR_5;

 if (!FUNC_0(VAR_2, "s", &VAR_4))
  return (((void*)0));

 (void) FUNC_4(VAR_3.zc_name, VAR_4, sizeof (VAR_3.zc_name));

 VAR_5 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_5 == ((void*)0))
  FUNC_3(FUNC_1("cannot get permissions on %s"), VAR_4);

 return (VAR_5);
}
