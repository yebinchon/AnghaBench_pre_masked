
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sc_lock; int sc_modules; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(void)
{

 FUNC_4(&VAR_1->sc_lock);
 FUNC_0(FUNC_1(&VAR_1->sc_modules), ("still have modules"));
 FUNC_5(&VAR_1->sc_lock);

 FUNC_3(&VAR_1->sc_lock);
 FUNC_2(VAR_1, VAR_0);

 return (0);
}
