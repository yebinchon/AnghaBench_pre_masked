
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {scalar_t__ type; int cert; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sshkey const*,struct sshkey const*) ;
 scalar_t__ FUNC_2 (struct sshkey const*) ;

int
FUNC_3(const struct sshkey *VAR_0, const struct sshkey *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_0->type != VAR_1->type)
  return 0;
 if (FUNC_2(VAR_0)) {
  if (!FUNC_0(VAR_0->cert, VAR_1->cert))
   return 0;
 }
 return FUNC_1(VAR_0, VAR_1);
}
