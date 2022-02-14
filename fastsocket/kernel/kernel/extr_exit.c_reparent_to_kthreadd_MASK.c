
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int usage; } ;
struct TYPE_15__ {TYPE_2__* signal; } ;
struct TYPE_14__ {int children; } ;
struct TYPE_13__ {TYPE_1__* signal; int exit_signal; TYPE_6__* real_parent; int sibling; TYPE_6__* parent; } ;
struct TYPE_12__ {int rlim; } ;
struct TYPE_11__ {int rlim; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_8__*) ;
 TYPE_3__* VAR_1 ;
 TYPE_8__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void)
{
 FUNC_7(&VAR_5);

 FUNC_4(VAR_1);

 VAR_1->real_parent = VAR_1->parent = VAR_4;
 FUNC_2(&VAR_1->sibling, &VAR_1->real_parent->children);


 VAR_1->exit_signal = VAR_0;

 if (FUNC_6(VAR_1) < 0)
  FUNC_5(VAR_1, 0);



 FUNC_3(VAR_1->signal->rlim, VAR_3.signal->rlim,
        sizeof(VAR_1->signal->rlim));

 FUNC_0(&VAR_2.usage);
 FUNC_1(&VAR_2);
 FUNC_8(&VAR_5);
}
