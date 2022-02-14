
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {TYPE_3__* real_parent; scalar_t__ ptrace; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(void)
{
 int VAR_5 = -VAR_0;

 FUNC_2(&VAR_4);

 if (!VAR_3->ptrace) {
  VAR_5 = FUNC_1(VAR_3->parent);





  if (!VAR_5 && !(VAR_3->real_parent->flags & VAR_1)) {
   VAR_3->ptrace = VAR_2;
   FUNC_0(VAR_3, VAR_3->real_parent);
  }
 }
 FUNC_3(&VAR_4);

 return VAR_5;
}
