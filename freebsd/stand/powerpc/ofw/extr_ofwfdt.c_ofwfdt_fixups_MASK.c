
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int path ;
typedef int node ;
typedef int len ;
typedef scalar_t__ ihandle_t ;
typedef int cell_t ;
typedef int base ;


 int FUNC_0 (char*,scalar_t__,int,int,int ,int*) ;
 void* FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int*,int) ;
 scalar_t__ FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (void*,int,int) ;
 int FUNC_11 (void*,int,char*) ;
 int* FUNC_12 (void*,int,char const*,int*) ;
 int FUNC_13 (void*,char*) ;
 int FUNC_14 (void*,int,char const*,int*,int) ;

__attribute__((used)) static void
FUNC_15(void *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 phandle_t VAR_4;
 ihandle_t VAR_5;
 const void *VAR_6;





 VAR_1 = FUNC_13(VAR_0, "/rtas");
 if (VAR_1 > 0) {
  uint32_t VAR_7;
  void *VAR_8;
  char VAR_9[255];

  VAR_4 = FUNC_2("/rtas");
  FUNC_7(VAR_4, VAR_9, sizeof(VAR_9));
  FUNC_3(VAR_4, "rtas-size", &VAR_2, sizeof(VAR_2));


  VAR_8 = FUNC_1(0, VAR_2, 4096);


  VAR_5 = FUNC_6(VAR_9);
  VAR_7 = 0;
  FUNC_0("instantiate-rtas", VAR_5, 1, 1, (cell_t)VAR_5,
      &VAR_7);


  VAR_7 = FUNC_8(VAR_7);
  FUNC_14(VAR_0, VAR_1, "linux,rtas-entry", &VAR_7,
      sizeof(VAR_7));
  VAR_7 = FUNC_8((uint32_t)VAR_8);
  VAR_1 = FUNC_13(VAR_0, "/rtas");
  FUNC_14(VAR_0, VAR_1, "linux,rtas-base", &VAR_7,
      sizeof(VAR_7));


  FUNC_10(VAR_0, VAR_7, VAR_2);
 } else {





  VAR_1 = FUNC_13(VAR_0, "/memory@0");
  if (VAR_1 > 0)
   FUNC_11(VAR_0, VAR_1, "available");
 }





 VAR_1 = FUNC_13(VAR_0, "/chosen");
 if (VAR_1 > 0) {
  const char *VAR_10[] = {"stdout", "stdin", "mmu", "cpu",
      ((void*)0)};
  const uint32_t *VAR_11;
  for (VAR_3 = 0; VAR_10[VAR_3] != ((void*)0); VAR_3++) {
   VAR_11 = FUNC_12(VAR_0, VAR_1, VAR_10[VAR_3], &VAR_2);
   if (VAR_11 != ((void*)0) && VAR_2 == sizeof(*VAR_11)) {
    VAR_4 = FUNC_5(
        FUNC_9(*VAR_11));
    if (FUNC_4(VAR_4, "phandle"))
     FUNC_3(VAR_4, "phandle", &VAR_4,
         sizeof(VAR_4));
    else if (FUNC_4(VAR_4, "linux,phandle"))
     FUNC_3(VAR_4, "linux,phandle", &VAR_4,
         sizeof(VAR_4));
    else if (FUNC_4(VAR_4, "ibm,phandle"))
     FUNC_3(VAR_4, "ibm,phandle", &VAR_4,
         sizeof(VAR_4));
    VAR_4 = FUNC_8(VAR_4);
    FUNC_14(VAR_0, VAR_1, VAR_10[VAR_3], &VAR_4,
        sizeof(VAR_4));
   }


   VAR_1 = FUNC_13(VAR_0, "/chosen");
  }
 }
}
