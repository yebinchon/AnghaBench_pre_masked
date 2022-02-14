
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_private_key {int dummy; } ;


 unsigned char* FUNC_0 (int const*,int,size_t*) ;
 struct crypto_private_key* FUNC_1 (unsigned char*,size_t,char const*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 (int ,int const*,int) ;

__attribute__((used)) static struct crypto_private_key * FUNC_5(const u8 *VAR_2,
        size_t VAR_3,
        const char *VAR_4)
{
 const u8 *VAR_5, *VAR_6;
 unsigned char *VAR_7;
 size_t VAR_8;
 struct crypto_private_key *VAR_9;

 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_5 = FUNC_4(VAR_0, VAR_2, VAR_3);
 if (!VAR_5)
  return ((void*)0);
 VAR_5 += FUNC_3(VAR_0);
 VAR_6 = FUNC_4(VAR_1, VAR_5, VAR_2 + VAR_3 - VAR_5);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_5, VAR_6 - VAR_5, &VAR_8);
 if (!VAR_7)
  return ((void*)0);
 VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_4);
 FUNC_2(VAR_7);
 return VAR_9;
}
