
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,char,int,int *,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, uint64_t VAR_1, int VAR_2)
{
 char VAR_3;

 if (VAR_1 > 0xFFFFFFFF) {
  FUNC_1("address space too big for S-Record file");
  return;
 }

 if (VAR_2)
  VAR_3 = '7';
 else {
  if (VAR_1 <= 0xFFFF)
   VAR_3 = '9';
  else if (VAR_1 <= 0xFFFFFF)
   VAR_3 = '8';
  else
   VAR_3 = '7';
 }

 FUNC_0(VAR_0, VAR_3, VAR_1, ((void*)0), 0);
}
