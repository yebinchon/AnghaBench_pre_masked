
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oldacl {int acl_maxcnt; } ;
struct acl {int acl_maxcnt; } ;
typedef int old ;
typedef int acl_type_t ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct oldacl*,struct oldacl*) ;
 int FUNC_1 (void const*,struct oldacl*,int) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_2, struct acl *VAR_3, acl_type_t VAR_4)
{
 int VAR_5;
 struct oldacl VAR_6;

 switch (VAR_4) {
 case 129:
 case 128:
  VAR_5 = FUNC_1(VAR_2, &VAR_6, sizeof(VAR_6));
  if (VAR_5 != 0)
   break;
  FUNC_0(&VAR_6, VAR_3);
  break;

 default:
  VAR_5 = FUNC_1(VAR_2, VAR_3, sizeof(*VAR_3));
  if (VAR_3->acl_maxcnt != VAR_0)
   return (VAR_1);
 }

 return (VAR_5);
}
