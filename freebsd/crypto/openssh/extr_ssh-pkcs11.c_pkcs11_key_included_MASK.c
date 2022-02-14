
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;


 scalar_t__ FUNC_0 (struct sshkey*,struct sshkey*) ;

__attribute__((used)) static int
FUNC_1(struct sshkey ***VAR_0, int *VAR_1, struct sshkey *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < *VAR_1; VAR_3++)
  if (FUNC_0(VAR_2, (*VAR_0)[VAR_3]))
   return (1);
 return (0);
}
