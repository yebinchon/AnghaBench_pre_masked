
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuzz {scalar_t__ slen; int seed; } ;


 scalar_t__ FUNC_0 (struct fuzz*) ;
 int FUNC_1 (struct fuzz*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

int
FUNC_3(struct fuzz *VAR_0)
{
 if (FUNC_0(VAR_0) != VAR_0->slen)
  return 0;
 return FUNC_2(FUNC_1(VAR_0), VAR_0->seed, VAR_0->slen) == 0;
}
