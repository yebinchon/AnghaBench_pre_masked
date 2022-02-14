
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (void*,int,char*) ;
 void* FUNC_4 (void*,int,char*,int*) ;
 int FUNC_5 (void*,char*) ;
 int FUNC_6 (void*,int,char*,void const*,int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_0)
{
 int VAR_1, VAR_2;
 const void *VAR_3;






 VAR_1 = FUNC_5(VAR_0, "/memory@0");
 if (VAR_1 > 0)
  FUNC_3(VAR_0, VAR_1, "available");





 VAR_1 = FUNC_5(VAR_0, "/ibm,opal");
 if (VAR_1 > 0) {
  const uint64_t *VAR_4, *VAR_5;
  VAR_4 = FUNC_4(VAR_0, VAR_1, "opal-base-address",
      &VAR_2);
  VAR_5 = FUNC_4(VAR_0, VAR_1, "opal-runtime-size",
      &VAR_2);
  if (VAR_4 != ((void*)0) && VAR_5 != ((void*)0))
   FUNC_2(VAR_0, FUNC_1(*VAR_4),
       FUNC_1(*VAR_5));
 }
 VAR_1 = FUNC_5(VAR_0, "/rtas");
 if (VAR_1 > 0) {
  const uint32_t *VAR_6, *VAR_7;
  VAR_6 = FUNC_4(VAR_0, VAR_1, "linux,rtas-base", &VAR_2);
  VAR_7 = FUNC_4(VAR_0, VAR_1, "rtas-size", &VAR_2);
  if (VAR_6 != ((void*)0) && VAR_7 != ((void*)0))
   FUNC_2(VAR_0, FUNC_0(*VAR_6),
       FUNC_0(*VAR_7));
 }





 VAR_1 = FUNC_5(VAR_0, "/chosen");
 if (VAR_1 > 0) {
  FUNC_3(VAR_0, VAR_1, "cpu");

  VAR_1 = FUNC_5(VAR_0, "/chosen");
  VAR_3 = FUNC_4(VAR_0, VAR_1, "linux,stdout-package", &VAR_2);
  if (VAR_3 != ((void*)0)) {
   FUNC_6(VAR_0, VAR_1, "stdout", VAR_3, VAR_2);
   VAR_1 = FUNC_5(VAR_0, "/chosen");
   FUNC_6(VAR_0, VAR_1, "stdin", VAR_3, VAR_2);
  }
 }
}
