
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct amdvi_domain {int id; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdvi_domain*,int ,int) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, uint16_t VAR_1)
{
 struct amdvi_domain *VAR_2;

 VAR_2 = (struct amdvi_domain *)VAR_0;
 FUNC_0(VAR_2 != ((void*)0), ("domain is NULL"));




 FUNC_3(VAR_2, VAR_1, 1);
 FUNC_2(VAR_1);
}
