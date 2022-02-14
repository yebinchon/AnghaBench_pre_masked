
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void CRITICAL_SECTION ;


 scalar_t__ FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void *
FUNC_3(unsigned VAR_1)
{
 CRITICAL_SECTION *VAR_2 = FUNC_2(sizeof(CRITICAL_SECTION));
 if (!VAR_2)
  return ((void*)0);
 if (FUNC_0(VAR_2, VAR_0) == 0) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 return VAR_2;
}
