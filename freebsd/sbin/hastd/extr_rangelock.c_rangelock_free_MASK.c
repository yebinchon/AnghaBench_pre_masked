
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlock {scalar_t__ rls_magic; int rls_locks; } ;
struct rangelocks {scalar_t__ rls_magic; int rls_locks; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct rlock* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct rlock*,int ) ;
 int FUNC_3 (struct rlock*) ;
 int VAR_1 ;

void
FUNC_4(struct rangelocks *VAR_2)
{
 struct rlock *VAR_3;

 FUNC_0(VAR_2->rls_magic == VAR_0);

 VAR_2->rls_magic = 0;

 while ((VAR_3 = FUNC_1(&VAR_2->rls_locks)) != ((void*)0)) {
  FUNC_2(&VAR_2->rls_locks, VAR_3, VAR_1);
  FUNC_3(VAR_3);
 }
 FUNC_3(VAR_2);
}
