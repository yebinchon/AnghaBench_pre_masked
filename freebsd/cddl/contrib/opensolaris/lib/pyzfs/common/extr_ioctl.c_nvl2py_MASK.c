
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef char* boolean_t ;
typedef int PyObject ;







 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * VAR_1 ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char**) ;
 int FUNC_10 (int *,int **) ;
 int FUNC_11 (int *,char**) ;
 int FUNC_12 (int *,char**) ;

__attribute__((used)) static PyObject *
FUNC_13(nvlist_t *VAR_2)
{
 PyObject *VAR_3;
 nvpair_t *VAR_4;

 VAR_3 = FUNC_0();

 for (VAR_4 = FUNC_6(VAR_2, ((void*)0)); VAR_4;
     VAR_4 = FUNC_6(VAR_2, VAR_4)) {
  PyObject *VAR_5;
  char *VAR_6;
  uint64_t VAR_7;
  boolean_t VAR_8;
  nvlist_t *VAR_9;

  switch (FUNC_8(VAR_4)) {
  case 129:
   (void) FUNC_11(VAR_4, &VAR_6);
   VAR_5 = FUNC_3("s", VAR_6);
   break;

  case 128:
   (void) FUNC_12(VAR_4, &VAR_7);
   VAR_5 = FUNC_3("K", VAR_7);
   break;

  case 130:
   (void) FUNC_10(VAR_4, &VAR_9);
   VAR_5 = FUNC_13(VAR_9);
   break;

  case 132:
   FUNC_5(VAR_1);
   VAR_5 = VAR_1;
   break;

  case 131:
   (void) FUNC_9(VAR_4, &VAR_8);
   VAR_5 = FUNC_3("i", VAR_8);
   break;

  default:
   FUNC_2(VAR_0);
   FUNC_4(VAR_3);
   return (((void*)0));
  }

  FUNC_1(VAR_3, FUNC_7(VAR_4), VAR_5);
  FUNC_4(VAR_5);
 }

 return (VAR_3);
}
