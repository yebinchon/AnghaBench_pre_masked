
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,char*) ;
 int * FUNC_3 (char*,int ) ;
 void* VAR_0 ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_5(void)
{
 PyObject *VAR_3 = FUNC_3("zfs.ioctl", VAR_2);
 PyObject *VAR_4 = FUNC_0("zfs.util");
 PyObject *VAR_5;

 if (VAR_4 == ((void*)0))
  return;

 VAR_0 = FUNC_2(VAR_4, "ZFSError");
 VAR_5 = FUNC_2(VAR_4, "dev");
 VAR_1 = FUNC_1(VAR_5);

 FUNC_4();
}
