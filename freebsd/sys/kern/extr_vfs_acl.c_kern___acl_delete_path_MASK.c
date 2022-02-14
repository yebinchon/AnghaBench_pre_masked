
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct nameidata {int ni_vp; } ;
typedef int acl_type_t ;


 int VAR_0 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int FUNC_1 (struct nameidata*,int ,int,int ,char const*,struct thread*) ;
 int VAR_1 ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (struct thread*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_2, const char *VAR_3,
    acl_type_t VAR_4, int VAR_5)
{
 struct nameidata VAR_6;
 int VAR_7;

 FUNC_1(&VAR_6, VAR_0, VAR_5, VAR_1, VAR_3, VAR_2);
 VAR_7 = FUNC_2(&VAR_6);
 if (VAR_7 == 0) {
  VAR_7 = FUNC_3(VAR_2, VAR_6.ni_vp, VAR_4);
  FUNC_0(&VAR_6, 0);
 }
 return (VAR_7);
}
