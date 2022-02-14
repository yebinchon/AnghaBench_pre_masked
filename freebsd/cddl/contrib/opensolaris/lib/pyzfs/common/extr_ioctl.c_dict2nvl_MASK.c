
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;
typedef int PyObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int*,int **,int **) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int *,char*,int *) ;
 int FUNC_12 (int *,char*,char*) ;
 int FUNC_13 (int *,char*,int ) ;
 int FUNC_14 (int **,int ,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static nvlist_t *
FUNC_16(PyObject *VAR_7)
{
 nvlist_t *VAR_8;
 int VAR_9;
 PyObject *VAR_10, *VAR_11;
 int VAR_12 = 0;

 if (!FUNC_1(VAR_7)) {
  FUNC_3(VAR_4, VAR_7);
  return (((void*)0));
 }

 VAR_9 = FUNC_14(&VAR_8, VAR_2, 0);
 FUNC_8(VAR_9 == 0);

 while (FUNC_2(VAR_7, &VAR_12, &VAR_10, &VAR_11)) {
  char *VAR_13 = FUNC_6(VAR_10);
  if (VAR_13 == ((void*)0)) {
   FUNC_3(VAR_3, VAR_10);
   FUNC_15(VAR_8);
   return (((void*)0));
  }

  if (FUNC_1(VAR_11)) {
   nvlist_t *VAR_14 = FUNC_16(VAR_11);
   VAR_9 = FUNC_11(VAR_8, VAR_13, VAR_14);
   FUNC_15(VAR_14);
  } else if (VAR_11 == VAR_5) {
   VAR_9 = FUNC_9(VAR_8, VAR_13);
  } else if (FUNC_7(VAR_11)) {
   char *VAR_15 = FUNC_6(VAR_11);
   VAR_9 = FUNC_12(VAR_8, VAR_13, VAR_15);
  } else if (FUNC_5(VAR_11)) {
   uint64_t VAR_16 = FUNC_4(VAR_11);
   VAR_9 = FUNC_13(VAR_8, VAR_13, VAR_16);
  } else if (FUNC_0(VAR_11)) {
   boolean_t VAR_17 = VAR_11 == VAR_6 ? VAR_1 : VAR_0;
   VAR_9 = FUNC_10(VAR_8, VAR_13, VAR_17);
  } else {
   FUNC_3(VAR_4, VAR_11);
   FUNC_15(VAR_8);
   return (((void*)0));
  }
  FUNC_8(VAR_9 == 0);
 }

 return (VAR_8);
}
