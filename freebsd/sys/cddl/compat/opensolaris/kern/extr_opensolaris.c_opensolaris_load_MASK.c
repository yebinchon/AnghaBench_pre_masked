
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpuid; int cpu_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ,int *) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void
FUNC_1(void *VAR_8)
{
 int VAR_9;






 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_7[VAR_9].cpuid = VAR_9;
  VAR_7[VAR_9].cpu_flags &= VAR_0;
 }

 FUNC_0(&VAR_4, "OpenSolaris CPU lock", VAR_2, ((void*)0));

 VAR_6 = VAR_3 / VAR_5;
}
