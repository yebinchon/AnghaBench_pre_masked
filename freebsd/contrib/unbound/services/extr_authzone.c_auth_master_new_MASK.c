
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_master {struct auth_master* next; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct auth_master*
FUNC_2(struct auth_master*** VAR_0)
{
 struct auth_master *VAR_1;
 VAR_1 = (struct auth_master*)FUNC_0(1, sizeof(*VAR_1));
 if(!VAR_1) {
  FUNC_1("malloc failure");
  return ((void*)0);
 }

 (**VAR_0) = VAR_1;

 (*VAR_0) = &(VAR_1->next);
 return VAR_1;
}
