
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
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static PyObject *
FUNC_5(PyObject *VAR_3, PyObject *VAR_4)
{
 zfs_cmd_t VAR_5 = { 0 };
 char *VAR_6;
 int VAR_7;

 if (!FUNC_0(VAR_4, "s", &VAR_6))
  return (((void*)0));

 (void) FUNC_4(VAR_5.zc_name, VAR_6, sizeof (VAR_5.zc_name));
 VAR_7 = FUNC_2(VAR_2, VAR_1, &VAR_5);

 if (VAR_7 != 0) {
  FUNC_3(FUNC_1("cannot initialize user accounting information on %s"),
      VAR_6);
  return (((void*)0));
 }

 VAR_0;
}
