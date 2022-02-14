
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;


 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*,int **,int **) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (int *,scalar_t__) ;
 scalar_t__ FUNC_13 (int *) ;
 char* FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_19 (int *,int *) ;
 int * FUNC_20 (int) ;
 int * FUNC_21 (int ) ;
 int * FUNC_22 (int ) ;
 int * FUNC_23 (char*) ;
 int FUNC_24 (int *,int *,char*,int ,int) ;
 int * FUNC_25 () ;
 int * FUNC_26 (int ) ;

__attribute__((used)) static ucl_object_t *
FUNC_27 (PyObject *VAR_5)
{
 if (VAR_5 == VAR_1) {
  return FUNC_25();
 }
 else if (FUNC_0 (VAR_5)) {
  return FUNC_20 (VAR_5 == VAR_2);
 }

 else if (FUNC_8 (VAR_5)) {
  return FUNC_22 (FUNC_7 (VAR_5));
 }

 else if (FUNC_10 (VAR_5)) {
  return FUNC_22 (FUNC_9 (VAR_5));
 }
 else if (FUNC_6 (VAR_5)) {
  return FUNC_21 (FUNC_5 (VAR_5));
 }
 else if (FUNC_17 (VAR_5)) {
  ucl_object_t *VAR_6;
  PyObject *VAR_7 = FUNC_16(VAR_5);
  VAR_6 = FUNC_23 (FUNC_1 (VAR_7));
  FUNC_18(VAR_7);
  return VAR_6;
 }

 else if (FUNC_15 (VAR_5)) {
  return FUNC_23 (FUNC_14 (VAR_5));
 }

 else if (FUNC_2(VAR_5)) {
  PyObject *VAR_8, *VAR_9;
  Py_ssize_t VAR_10 = 0;
  ucl_object_t *VAR_11, *VAR_12;
  char *VAR_13 = ((void*)0);

  VAR_11 = FUNC_26 (VAR_4);

  while (FUNC_3(VAR_5, &VAR_10, &VAR_8, &VAR_9)) {
   VAR_12 = FUNC_27(VAR_9);

   if (FUNC_17(VAR_8)) {
    PyObject *VAR_14 = FUNC_16(VAR_8);
    VAR_13 = FUNC_1(VAR_14);
    FUNC_18(VAR_14);
   }

   else if (FUNC_15(VAR_8)) {
    VAR_13 = FUNC_14(VAR_8);
   }

   else {
    FUNC_4(VAR_0, "Unknown key type");
    return ((void*)0);
   }

   FUNC_24 (VAR_11, VAR_12, VAR_13, 0, 1);
  }

  return VAR_11;
 }
 else if (FUNC_11(VAR_5)) {
  PyObject *VAR_15;
  Py_ssize_t VAR_16, VAR_17;
  ucl_object_t *VAR_18, *VAR_19;

  VAR_16 = FUNC_13(VAR_5);
  VAR_18 = FUNC_26 (VAR_3);

  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   VAR_15 = FUNC_12(VAR_5, VAR_17);
   VAR_19 = FUNC_27(VAR_15);
   FUNC_19(VAR_18, VAR_19);
  }

  return VAR_18;
 }
 else {
  FUNC_4(VAR_0, "Unhandled object type");
  return ((void*)0);
 }

 return ((void*)0);
}
