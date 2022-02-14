
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_authentication {int c_sign_key; } ;
typedef int EVP_PKEY ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *,unsigned char**) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct dpp_authentication *VAR_0, EVP_PKEY *VAR_1)
{
 unsigned char *VAR_2 = ((void*)0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2);
 if (VAR_3 <= 0)
  return;
 FUNC_3(VAR_0->c_sign_key);
 VAR_0->c_sign_key = FUNC_2(VAR_2, VAR_3);
 FUNC_0(VAR_2);
}
