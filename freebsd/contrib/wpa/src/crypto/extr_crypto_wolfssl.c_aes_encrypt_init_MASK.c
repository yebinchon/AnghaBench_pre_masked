
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void Aes ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (void*,int const*,size_t,int *,int ) ;

void * FUNC_4(const u8 *VAR_1, size_t VAR_2)
{
 Aes *VAR_3;

 if (FUNC_0())
  return ((void*)0);

 VAR_3 = FUNC_2(sizeof(Aes));
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_3(VAR_3, VAR_1, VAR_2, ((void*)0), VAR_0) < 0) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
