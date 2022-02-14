
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock {int lock_object; int lk_recurse; } ;


 int FUNC_0 (int ,struct lock*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *,int ,int ,char const*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct lock *VAR_4, const char *VAR_5, int VAR_6)
{

 FUNC_0(VAR_3, VAR_4, VAR_0);
 FUNC_1("XUNLOCK", &VAR_4->lock_object, 0, VAR_4->lk_recurse, VAR_5,
     VAR_6);
 FUNC_3(&VAR_4->lock_object, VAR_1, VAR_5, VAR_6);
 FUNC_2(VAR_2);
}
