
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int id; } ;
struct TYPE_4__ {int lock; int cond; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct list_head* FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void *FUNC_8(void *VAR_1)
{
 struct list_head *VAR_2;
 do {
  FUNC_4(&VAR_0.lock);
  if (FUNC_0(&VAR_0))
   FUNC_3(&VAR_0.cond, &VAR_0.lock);
  VAR_2 = FUNC_1(&VAR_0);
  FUNC_5(&VAR_0.lock);
  FUNC_7(VAR_2->id);
  FUNC_6(VAR_2->id);
  FUNC_2(VAR_2);
 } while (1);
 return ((void*)0);
}
