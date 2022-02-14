
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tdq {int tdq_lowpri; } ;
struct TYPE_3__ {int td_priority; int td_lock; } ;


 int FUNC_0 (struct tdq*) ;
 int FUNC_1 (struct tdq*) ;
 struct tdq* FUNC_2 () ;
 int FUNC_3 (struct tdq*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct tdq*,TYPE_1__*) ;
 int FUNC_6 (struct tdq*,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct tdq *VAR_2;




 FUNC_6(FUNC_2(), 0);

 VAR_2 = FUNC_2();


 FUNC_0(VAR_2);
 VAR_0 = FUNC_1(FUNC_2());
 FUNC_5(VAR_2, &VAR_0);
 VAR_2->tdq_lowpri = VAR_0;
 FUNC_3(VAR_2);
}
