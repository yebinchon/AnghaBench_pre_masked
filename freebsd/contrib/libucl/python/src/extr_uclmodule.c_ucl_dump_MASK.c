
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef scalar_t__ ucl_emitter_t ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,int **,scalar_t__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_2 (char*) ;
 int * FUNC_3 (char*) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static PyObject *
FUNC_8 (PyObject *VAR_5, PyObject *VAR_6)
{
 PyObject *VAR_7;
 ucl_emitter_t VAR_8;
 ucl_object_t *VAR_9 = ((void*)0);

 VAR_8 = VAR_3;

 if (!FUNC_0(VAR_6, "O|i", &VAR_7, &VAR_8)) {
  FUNC_1(VAR_0, "Unhandled object type");
  return ((void*)0);
 }

 if (VAR_8 >= VAR_4) {
  FUNC_1(VAR_0, "Invalid emitter type");
  return ((void*)0);
 }

 if (VAR_7 == VAR_1) {
  VAR_2;
 }

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9) {
  PyObject *VAR_10;
  char *VAR_11;

  VAR_11 = (char *) FUNC_6 (VAR_9, VAR_8);
  FUNC_7 (VAR_9);

  VAR_10 = FUNC_2 (VAR_11);



  FUNC_5(VAR_11);

  return VAR_10;
 }

 return ((void*)0);
}
