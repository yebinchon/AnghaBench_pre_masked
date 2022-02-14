
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwlock {int dummy; } ;
struct celockstate {struct rwlock** blp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rwlock**,struct rwlock**) ;
 int FUNC_2 (struct rwlock*) ;

__attribute__((used)) static void
FUNC_3(struct celockstate *VAR_0, struct rwlock *VAR_1,
    struct rwlock *VAR_2)
{

 FUNC_0(VAR_0->blp[0] == ((void*)0));
 FUNC_0(VAR_0->blp[1] == ((void*)0));

 FUNC_1(&VAR_1, &VAR_2);

 if (VAR_1 != ((void*)0)) {
  FUNC_2(VAR_1);
  VAR_0->blp[0] = VAR_1;
 }
 FUNC_2(VAR_2);
 VAR_0->blp[1] = VAR_2;
}
