
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int type; } ;


 int FUNC_0 (int ) ;

int
FUNC_1(const struct sshkey *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;
 return FUNC_0(VAR_0->type);
}
