
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct nameidata {int ni_vp; } ;
struct acl {int dummy; } ;
typedef int acl_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int FUNC_1 (struct nameidata*,int ,int,int ,char const*,struct thread*) ;
 int VAR_2 ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (struct thread*,int ,int ,struct acl const*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_3, const char *VAR_4,
    acl_type_t VAR_5, const struct acl *VAR_6, int VAR_7)
{
 struct nameidata VAR_8;
 int VAR_9;

 FUNC_1(&VAR_8, VAR_1, VAR_7 | VAR_0, VAR_2, VAR_4, VAR_3);
 VAR_9 = FUNC_2(&VAR_8);
 if (VAR_9 == 0) {
  VAR_9 = FUNC_3(VAR_3, VAR_8.ni_vp, VAR_5, VAR_6);
  FUNC_0(&VAR_8, 0);
 }
 return (VAR_9);
}
