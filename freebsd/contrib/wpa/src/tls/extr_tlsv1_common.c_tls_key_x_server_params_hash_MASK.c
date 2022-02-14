
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct crypto_hash {int dummy; } ;
typedef int hash ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct crypto_hash*,int *,size_t*) ;
 struct crypto_hash* FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct crypto_hash*,int const*,size_t) ;

int FUNC_3(u16 VAR_4, const u8 *VAR_5,
     const u8 *VAR_6,
     const u8 *VAR_7,
     size_t VAR_8, u8 *VAR_9)
{
 u8 *VAR_10;
 size_t VAR_11;
 struct crypto_hash *VAR_12;

 VAR_10 = VAR_9;

 VAR_12 = FUNC_1(VAR_0, ((void*)0), 0);
 if (VAR_12 == ((void*)0))
  return -1;
 FUNC_2(VAR_12, VAR_5, VAR_3);
 FUNC_2(VAR_12, VAR_6, VAR_3);
 FUNC_2(VAR_12, VAR_7, VAR_8);
 VAR_11 = VAR_2;
 if (FUNC_0(VAR_12, VAR_9, &VAR_11) < 0)
  return -1;
 VAR_10 += VAR_11;

 VAR_12 = FUNC_1(VAR_1, ((void*)0), 0);
 if (VAR_12 == ((void*)0))
  return -1;
 FUNC_2(VAR_12, VAR_5, VAR_3);
 FUNC_2(VAR_12, VAR_6, VAR_3);
 FUNC_2(VAR_12, VAR_7, VAR_8);
 VAR_11 = VAR_9 + sizeof(VAR_9) - VAR_10;
 if (FUNC_0(VAR_12, VAR_10, &VAR_11) < 0)
  return -1;
 VAR_10 += VAR_11;
 return VAR_10 - VAR_9;
}
