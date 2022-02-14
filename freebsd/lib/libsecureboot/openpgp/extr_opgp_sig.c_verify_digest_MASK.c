
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int digest; } ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef TYPE_1__ EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned char*,size_t,unsigned char*,size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (char const*) ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8 (EVP_PKEY *VAR_0,
    const char *VAR_1,
    unsigned char *VAR_2, size_t VAR_3,
    unsigned char *VAR_4, size_t VAR_5)
{
 EVP_MD_CTX VAR_6;
 const EVP_MD *VAR_7 = ((void*)0);
 EVP_PKEY_CTX *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 int VAR_10 = -1;

 FUNC_7();
 VAR_7 = FUNC_6(VAR_1);
 FUNC_0(&VAR_6, VAR_7);

 VAR_8 = FUNC_2(VAR_0, ((void*)0));
 if (!VAR_8)
  goto fail;
 if (FUNC_5(VAR_8) <= 0)
  goto fail;
 if (FUNC_3(VAR_8, VAR_6.digest) <= 0)
  goto fail;
 VAR_10 = FUNC_4(VAR_8, VAR_4, VAR_5, VAR_2, VAR_3);
 if (VAR_10 >= 0)
  VAR_9 = VAR_10;
fail:
 FUNC_1(VAR_8);
 return (VAR_9);
}
