
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_schema_error {char* msg; } ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,int **,int **) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,struct ucl_schema_error*) ;

__attribute__((used)) static PyObject *
FUNC_5 (PyObject *VAR_3, PyObject *VAR_4)
{
 PyObject *VAR_5, *VAR_6;
 ucl_object_t *VAR_7, *VAR_8;
 bool VAR_9;
 struct ucl_schema_error VAR_10;

 if (!FUNC_0 (VAR_4, "OO", &VAR_6, &VAR_5)) {
  FUNC_1 (VAR_0, "Unhandled object type");
  return ((void*)0);
 }

 VAR_8 = FUNC_2(VAR_6);
 if (!VAR_8)
  return ((void*)0);

 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7)
  return ((void*)0);


 VAR_9 = FUNC_4 (VAR_8, VAR_7, &VAR_10);
 FUNC_3 (VAR_8);
 FUNC_3 (VAR_7);

 if (!VAR_9) {
  FUNC_1 (VAR_2, VAR_10.msg);
  return ((void*)0);
 }

 VAR_1;
}
