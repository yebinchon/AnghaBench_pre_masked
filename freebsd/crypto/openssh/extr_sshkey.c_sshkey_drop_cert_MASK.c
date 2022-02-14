
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int type; int * cert; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct sshkey *VAR_1)
{
 if (!FUNC_1(VAR_1->type))
  return VAR_0;
 FUNC_0(VAR_1->cert);
 VAR_1->cert = ((void*)0);
 VAR_1->type = FUNC_2(VAR_1->type);
 return 0;
}
