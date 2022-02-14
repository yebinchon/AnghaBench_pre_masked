
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int taskq_ent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_4)
{

 VAR_3 = FUNC_1("taskq_zone", sizeof(taskq_ent_t),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0);
 VAR_2 = FUNC_0("system_taskq", VAR_1, VAR_0,
     0, 0, 0);
}
