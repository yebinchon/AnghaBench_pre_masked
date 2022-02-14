
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct nameidata {int ni_vp; } ;
struct acl {int dummy; } ;
typedef int acl_type_t ;


 int VAR_0 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int FUNC_1 (struct nameidata*,int ,int,int ,char const*,struct thread*) ;
 int VAR_1 ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (struct thread*,int ,int ,struct acl*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_2, const char *VAR_3, acl_type_t VAR_4,
    struct acl *VAR_5, int VAR_6)
{
 struct nameidata VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7, VAR_0, VAR_6, VAR_1, VAR_3, VAR_2);
 VAR_8 = FUNC_2(&VAR_7);
 if (VAR_8 == 0) {
  VAR_8 = FUNC_3(VAR_2, VAR_7.ni_vp, VAR_4, VAR_5);
  FUNC_0(&VAR_7, 0);
 }
 return (VAR_8);
}
