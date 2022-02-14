
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_acl {int acl_head; int acl_p; scalar_t__ acl_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct archive_acl*,int) ;

int
FUNC_1(struct archive_acl *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_3);






 if ((VAR_3 & VAR_0) != 0)
  VAR_5 = 3;
 else
  VAR_5 = 0;

 if (VAR_4 > VAR_5)
  VAR_2->acl_state = VAR_1;
 else
  VAR_2->acl_state = 0;
 VAR_2->acl_p = VAR_2->acl_head;
 return (VAR_4);
}
