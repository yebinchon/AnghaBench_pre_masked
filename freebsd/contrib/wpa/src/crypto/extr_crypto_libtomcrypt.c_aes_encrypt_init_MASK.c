
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void symmetric_key ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,size_t,int ,void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;

void * FUNC_3(const u8 *VAR_1, size_t VAR_2)
{
 symmetric_key *VAR_3;
 VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 if (FUNC_0(VAR_1, VAR_2, 0, VAR_3) != VAR_0) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
