
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(void)
{
 PyObject *VAR_2, *VAR_3;
 int VAR_4 = 0;

 VAR_2 = FUNC_1(VAR_0, "trace_end");
 if (VAR_2 == ((void*)0) || !FUNC_0(VAR_2))
  goto out;

 VAR_3 = FUNC_2(VAR_2, ((void*)0));
 if (VAR_3 == ((void*)0))
  FUNC_6("trace_end");
 else
  FUNC_3(VAR_3);
out:
 FUNC_5(VAR_0);
 FUNC_5(VAR_1);
 FUNC_4();

 return VAR_4;
}
