
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_af_alg_skcipher {scalar_t__ s; scalar_t__ t; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct linux_af_alg_skcipher*) ;

__attribute__((used)) static void FUNC_2(struct linux_af_alg_skcipher *VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0->s >= 0)
  FUNC_0(VAR_0->s);
 if (VAR_0->t >= 0)
  FUNC_0(VAR_0->t);
 FUNC_1(VAR_0);
}
