
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_combining_group {int k; int sense; int count; struct ck_barrier_combining_group* parent; } ;
struct ck_barrier_combining {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct ck_barrier_combining *VAR_0,
    struct ck_barrier_combining_group *VAR_1,
    unsigned int VAR_2)
{





 if (FUNC_0(&VAR_1->count, 1) == VAR_1->k - 1) {




  if (VAR_1->parent != ((void*)0))
   FUNC_6(VAR_0, VAR_1->parent, VAR_2);
  FUNC_5(&VAR_1->count, 0);
  FUNC_2();
  FUNC_5(&VAR_1->sense, ~VAR_1->sense);
 } else {
  while (VAR_2 != FUNC_3(&VAR_1->sense))
   FUNC_4();
 }
 FUNC_1();

 return;
}
