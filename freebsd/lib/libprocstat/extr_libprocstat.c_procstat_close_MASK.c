
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {scalar_t__ type; int core; int kd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct procstat*) ;
 int FUNC_1 (struct procstat*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct procstat*) ;
 int FUNC_5 (struct procstat*) ;

void
FUNC_6(struct procstat *VAR_2)
{

 FUNC_0(VAR_2);
 if (VAR_2->type == VAR_1)
  FUNC_2(VAR_2->kd);
 else if (VAR_2->type == VAR_0)
  FUNC_3(VAR_2->core);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_1(VAR_2);
}
