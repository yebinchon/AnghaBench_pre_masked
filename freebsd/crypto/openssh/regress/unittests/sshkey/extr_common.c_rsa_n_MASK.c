
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {struct sshkey* rsa; } ;
typedef int BIGNUM ;


 int FUNC_0 (struct sshkey*,int *) ;
 int FUNC_1 (struct sshkey*,int const**,int *,int *) ;

const BIGNUM *
FUNC_2(struct sshkey *VAR_0)
{
 const BIGNUM *VAR_1 = ((void*)0);

 FUNC_0(VAR_0, ((void*)0));
 FUNC_0(VAR_0->rsa, ((void*)0));
 FUNC_1(VAR_0->rsa, &VAR_1, ((void*)0), ((void*)0));
 return VAR_1;
}
