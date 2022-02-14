
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid_namespace {TYPE_1__* pidmap; int proc_inum; } ;
struct TYPE_2__ {int page; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct pid_namespace*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pid_namespace *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2->proc_inum);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2->pidmap[VAR_3].page);
 FUNC_1(VAR_1, VAR_2);
}
