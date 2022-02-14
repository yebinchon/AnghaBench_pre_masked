
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int,int ,int,int *,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, uint64_t VAR_1)
{

 if (VAR_1 > 0xFFFFFFFF) {
  FUNC_1("address space too big for Intel Hex file");
  return;
 }

 FUNC_0(VAR_0, 5, 0, VAR_1, ((void*)0), 4);
}
