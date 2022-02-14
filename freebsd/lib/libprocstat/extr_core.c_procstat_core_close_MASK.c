
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_core {scalar_t__ pc_magic; int pc_fd; int pc_elf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct procstat_core*) ;

void
FUNC_4(struct procstat_core *VAR_1)
{

 FUNC_0(VAR_1->pc_magic == VAR_0);

 FUNC_2(VAR_1->pc_elf);
 FUNC_1(VAR_1->pc_fd);
 FUNC_3(VAR_1);
}
