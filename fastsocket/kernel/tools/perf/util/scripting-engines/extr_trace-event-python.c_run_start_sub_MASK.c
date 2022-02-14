
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_9(void)
{
 PyObject *VAR_2, *VAR_3;
 int VAR_4 = 0;

 VAR_1 = FUNC_2("__main__");
 if (VAR_1 == ((void*)0))
  return -1;
 FUNC_6(VAR_1);

 VAR_0 = FUNC_3(VAR_1);
 if (VAR_0 == ((void*)0)) {
  VAR_4 = -1;
  goto error;
 }
 FUNC_6(VAR_0);

 VAR_2 = FUNC_1(VAR_0, "trace_begin");
 if (VAR_2 == ((void*)0) || !FUNC_0(VAR_2))
  goto out;

 VAR_3 = FUNC_4(VAR_2, ((void*)0));
 if (VAR_3 == ((void*)0))
  FUNC_8("trace_begin");

 FUNC_5(VAR_3);
 return VAR_4;
error:
 FUNC_7(VAR_0);
 FUNC_7(VAR_1);
out:
 return VAR_4;
}
