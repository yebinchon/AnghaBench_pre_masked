
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {scalar_t__ cs_id; struct cpuset* cs_parent; int cs_ref; } ;
typedef scalar_t__ cpusetid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpuset*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,struct cpuset*) ;

void
FUNC_6(struct cpuset *VAR_6)
{
 cpusetid_t VAR_7;

 if (FUNC_4(&VAR_6->cs_ref) == 0)
  return;
 FUNC_2(&VAR_1);
 FUNC_0(VAR_6, VAR_5);
 VAR_7 = VAR_6->cs_id;
 if (VAR_7 != VAR_0)
  FUNC_0(VAR_6, VAR_4);
 FUNC_3(&VAR_1);
 FUNC_6(VAR_6->cs_parent);
 FUNC_5(VAR_3, VAR_6);
 if (VAR_7 != VAR_0)
  FUNC_1(VAR_2, VAR_7);
}
