
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu {scalar_t__ pc_dynamic; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (void*,void*,int ) ;
 struct pcpu* FUNC_1 (int) ;

void
FUNC_2(void *VAR_3, int VAR_4)
{
 struct pcpu *VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 VAR_5->pc_dynamic = (uintptr_t)VAR_3 - VAR_1;




 FUNC_0(VAR_3, (void *)VAR_1, VAR_0);




 VAR_2[VAR_4] = VAR_5->pc_dynamic;
}
