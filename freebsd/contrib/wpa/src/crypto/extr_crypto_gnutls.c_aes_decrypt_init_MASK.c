
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* gcry_cipher_hd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void**,int ,int ,int ) ;
 scalar_t__ FUNC_3 (void*,int const*,size_t) ;

void * FUNC_4(const u8 *VAR_3, size_t VAR_4)
{
 gcry_cipher_hd_t VAR_5;

 if (FUNC_0())
  return ((void*)0);

 if (FUNC_2(&VAR_5, VAR_0, VAR_1, 0) !=
     VAR_2)
  return ((void*)0);
 if (FUNC_3(VAR_5, VAR_3, VAR_4) != VAR_2) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
