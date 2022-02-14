
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx {scalar_t__ sx_lock; int sx_recurse; int lock_object; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int *,int ,int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,char const*,int) ;
 int FUNC_4 (struct sx*,scalar_t__,char const*,int) ;
 int FUNC_5 (struct sx*,int ,char const*,int) ;
 int FUNC_6 (struct sx*,uintptr_t,char const*,int) ;
 scalar_t__ VAR_3 ;

void
FUNC_7(struct sx *VAR_4, const char *VAR_5, int VAR_6)
{

 FUNC_0(VAR_4->sx_lock != VAR_2,
     ("sx_xunlock() of destroyed sx @ %s:%d", VAR_5, VAR_6));
 FUNC_5(VAR_4, VAR_1, VAR_5, VAR_6);
 FUNC_3(&VAR_4->lock_object, VAR_0, VAR_5, VAR_6);
 FUNC_1("XUNLOCK", &VAR_4->lock_object, 0, VAR_4->sx_recurse, VAR_5,
     VAR_6);



 FUNC_4(VAR_4, VAR_3, VAR_5, VAR_6);

 FUNC_2(VAR_3);
}
