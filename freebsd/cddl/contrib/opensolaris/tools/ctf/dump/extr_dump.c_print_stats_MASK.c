
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_ndata; scalar_t__ s_nfunc; scalar_t__ s_nargs; scalar_t__ s_argmax; scalar_t__ s_ntypes; scalar_t__* s_types; scalar_t__ s_nsmem; scalar_t__ s_smmax; scalar_t__ s_nsbytes; scalar_t__ s_sbmax; scalar_t__ s_numem; scalar_t__ s_ummax; scalar_t__ s_nubytes; scalar_t__ s_ubmax; scalar_t__ s_nemem; scalar_t__ s_emmax; scalar_t__ s_nstr; scalar_t__ s_strlen; scalar_t__ s_strmax; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,float) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_15 ;

__attribute__((used)) static int
FUNC_4(void)
{
 FUNC_2("- CTF Statistics ");

 FUNC_1("total number of data objects", VAR_15.s_ndata);
 (void) FUNC_3("\n");

 FUNC_1("total number of functions", VAR_15.s_nfunc);
 FUNC_1("total number of function arguments", VAR_15.s_nargs);
 FUNC_1("maximum argument list length", VAR_15.s_argmax);

 if (VAR_15.s_nfunc != 0) {
  FUNC_0("average argument list length",
      (float)VAR_15.s_nargs / (float)VAR_15.s_nfunc);
 }

 (void) FUNC_3("\n");

 FUNC_1("total number of types", VAR_15.s_ntypes);
 FUNC_1("total number of integers", VAR_15.s_types[VAR_6]);
 FUNC_1("total number of floats", VAR_15.s_types[VAR_3]);
 FUNC_1("total number of pointers", VAR_15.s_types[VAR_7]);
 FUNC_1("total number of arrays", VAR_15.s_types[VAR_0]);
 FUNC_1("total number of func types", VAR_15.s_types[VAR_5]);
 FUNC_1("total number of structs", VAR_15.s_types[VAR_9]);
 FUNC_1("total number of unions", VAR_15.s_types[VAR_11]);
 FUNC_1("total number of enums", VAR_15.s_types[VAR_2]);
 FUNC_1("total number of forward tags", VAR_15.s_types[VAR_4]);
 FUNC_1("total number of typedefs", VAR_15.s_types[VAR_10]);
 FUNC_1("total number of volatile types",
     VAR_15.s_types[VAR_13]);
 FUNC_1("total number of const types", VAR_15.s_types[VAR_1]);
 FUNC_1("total number of restrict types",
     VAR_15.s_types[VAR_8]);
 FUNC_1("total number of unknowns (holes)",
     VAR_15.s_types[VAR_12]);

 (void) FUNC_3("\n");

 FUNC_1("total number of struct members", VAR_15.s_nsmem);
 FUNC_1("maximum number of struct members", VAR_15.s_smmax);
 FUNC_1("total size of all structs", VAR_15.s_nsbytes);
 FUNC_1("maximum size of a struct", VAR_15.s_sbmax);

 if (VAR_15.s_types[VAR_9] != 0) {
  FUNC_0("average number of struct members",
      (float)VAR_15.s_nsmem / (float)VAR_15.s_types[VAR_9]);
  FUNC_0("average size of a struct", (float)VAR_15.s_nsbytes /
      (float)VAR_15.s_types[VAR_9]);
 }

 (void) FUNC_3("\n");

 FUNC_1("total number of union members", VAR_15.s_numem);
 FUNC_1("maximum number of union members", VAR_15.s_ummax);
 FUNC_1("total size of all unions", VAR_15.s_nubytes);
 FUNC_1("maximum size of a union", VAR_15.s_ubmax);

 if (VAR_15.s_types[VAR_11] != 0) {
  FUNC_0("average number of union members",
      (float)VAR_15.s_numem / (float)VAR_15.s_types[VAR_11]);
  FUNC_0("average size of a union", (float)VAR_15.s_nubytes /
      (float)VAR_15.s_types[VAR_11]);
 }

 (void) FUNC_3("\n");

 FUNC_1("total number of enum members", VAR_15.s_nemem);
 FUNC_1("maximum number of enum members", VAR_15.s_emmax);

 if (VAR_15.s_types[VAR_2] != 0) {
  FUNC_0("average number of enum members",
      (float)VAR_15.s_nemem / (float)VAR_15.s_types[VAR_2]);
 }

 (void) FUNC_3("\n");

 FUNC_1("total number of unique strings", VAR_15.s_nstr);
 FUNC_1("bytes of string data", VAR_15.s_strlen);
 FUNC_1("maximum string length", VAR_15.s_strmax);

 if (VAR_15.s_nstr != 0) {
  FUNC_0("average string length",
      (float)VAR_15.s_strlen / (float)VAR_15.s_nstr);
 }

 (void) FUNC_3("\n");
 return (VAR_14);
}
