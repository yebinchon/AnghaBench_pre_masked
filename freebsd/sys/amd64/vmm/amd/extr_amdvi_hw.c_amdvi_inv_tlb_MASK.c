
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_domain {int id; } ;


 int FUNC_0 (struct amdvi_domain*,char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct amdvi_domain *VAR_1;

 VAR_1 = (struct amdvi_domain *)VAR_0;
 FUNC_0(VAR_1, ("domain is NULL"));
 FUNC_1(VAR_1->id, 0);
}
