
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int HMAC_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,unsigned int*) ;
 int FUNC_3 (int *,int const*,size_t,int const*,int *) ;
 int FUNC_4 (int *,int const*,size_t const) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(const EVP_MD *VAR_0, const u8 *VAR_1,
          size_t VAR_2, size_t VAR_3,
          const u8 *VAR_4[], const size_t *VAR_5, u8 *VAR_6,
          unsigned int VAR_7)
{
 HMAC_CTX *VAR_8;
 size_t VAR_9;
 int VAR_10;

 if (FUNC_5())
  return -1;

 VAR_8 = FUNC_1();
 if (!VAR_8)
  return -1;
 VAR_10 = FUNC_3(VAR_8, VAR_1, VAR_2, VAR_0, ((void*)0));
 if (VAR_10 != 1)
  goto done;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  FUNC_4(VAR_8, VAR_4[VAR_9], VAR_5[VAR_9]);

 VAR_10 = FUNC_2(VAR_8, VAR_6, &VAR_7);
done:
 FUNC_0(VAR_8);

 return VAR_10 == 1 ? 0 : -1;
}
