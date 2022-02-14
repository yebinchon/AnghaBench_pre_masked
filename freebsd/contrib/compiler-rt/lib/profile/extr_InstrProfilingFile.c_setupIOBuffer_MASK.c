
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3() {
  const char *VAR_2 = 0;
  VAR_2 = FUNC_2("LLVM_VP_BUFFER_SIZE");
  if (VAR_2 && VAR_2[0]) {
    VAR_1 = FUNC_0(VAR_2);
    VAR_0 = (uint8_t *)FUNC_1(VAR_1, 1);
  }
}
