
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,size_t*,int *,int ) ;

__attribute__((used)) static __inline bool
FUNC_6(void) {
 char VAR_3[1024];
 size_t VAR_4 = sizeof(VAR_3);

 if (FUNC_5("machdep.cpu_brand", VAR_3, &VAR_4, ((void*)0), 0) == -1) {
  if (VAR_2 == VAR_0)
   return 0;
  FUNC_0(VAR_1, "sysctl");
 }
 return FUNC_4(VAR_3, "QEMU") != ((void*)0);




}
