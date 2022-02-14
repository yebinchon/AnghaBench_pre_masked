
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sc_modules; int sc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int ,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int
FUNC_3(void)
{

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0, VAR_2 | VAR_1);
 FUNC_2(&VAR_3->sc_lock, "icl");
 FUNC_0(&VAR_3->sc_modules);

 return (0);
}
