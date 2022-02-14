
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {TYPE_5__* real_parent; int ptrace; int parent; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_5__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(void)
{
 bool VAR_5 = 1;
 int VAR_6 = FUNC_3(VAR_3, 0);

 if (FUNC_5(VAR_6))
  return VAR_6;

 VAR_6 = -VAR_0;
 FUNC_6(&VAR_4);
 FUNC_0(VAR_3->ptrace);
 VAR_6 = FUNC_4(VAR_3->parent);





 if (!VAR_6 && !(VAR_3->real_parent->flags & VAR_1)) {
  VAR_3->ptrace = VAR_2;
  FUNC_1(VAR_3, VAR_3->real_parent);
  VAR_5 = 0;
 }
 FUNC_7(&VAR_4);

 if (VAR_5)
  FUNC_2(VAR_3);
 return VAR_6;
}
