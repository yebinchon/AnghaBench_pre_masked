
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int dummy; } ;
typedef int BIGNUM ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,char const*) ;
 struct sshbuf* FUNC_2 (char const*) ;
 int FUNC_3 (struct sshbuf*) ;
 scalar_t__ FUNC_4 (struct sshbuf*) ;

BIGNUM *
FUNC_5(const char *VAR_0)
{
 BIGNUM *VAR_1 = ((void*)0);
 struct sshbuf *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 FUNC_0(FUNC_1(&VAR_1, (const char *)FUNC_4(VAR_2)), 0);
 FUNC_3(VAR_2);
 return VAR_1;
}
