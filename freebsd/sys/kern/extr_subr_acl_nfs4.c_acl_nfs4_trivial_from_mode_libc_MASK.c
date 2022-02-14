
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl {scalar_t__ acl_cnt; } ;


 int FUNC_0 (struct acl*,int,int) ;
 int FUNC_1 (struct acl*,int) ;

void
FUNC_2(struct acl *VAR_0, int VAR_1, int VAR_2)
{

 VAR_0->acl_cnt = 0;
 if (VAR_2)
  FUNC_0(VAR_0, VAR_1, -1);
 else
  FUNC_1(VAR_0, VAR_1);
}
