
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scripting_context {int dummy; } ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,int **) ;
 struct scripting_context* FUNC_1 (int *) ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (struct scripting_context*) ;

__attribute__((used)) static PyObject *FUNC_4(PyObject *VAR_0,
       PyObject *VAR_1)
{
 static struct scripting_context *VAR_2;
 PyObject *VAR_3;
 int VAR_4;

 if (!FUNC_0(VAR_1, "O", &VAR_3))
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_3);
 VAR_4 = FUNC_3(VAR_2);

 return FUNC_2("i", VAR_4);
}
