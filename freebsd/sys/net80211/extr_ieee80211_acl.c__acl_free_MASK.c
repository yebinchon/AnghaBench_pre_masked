
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aclstate {int as_nacls; int as_list; } ;
struct acl {int dummy; } ;


 int FUNC_0 (struct aclstate*) ;
 int FUNC_1 (struct acl*,int ) ;
 int FUNC_2 (struct acl*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,struct acl*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct aclstate *VAR_3, struct acl *VAR_4)
{
 FUNC_0(VAR_3);

 FUNC_3(&VAR_3->as_list, VAR_4, VAR_2);
 FUNC_2(VAR_4, VAR_1);
 FUNC_1(VAR_4, VAR_0);
 VAR_3->as_nacls--;
}
