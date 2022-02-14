
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hard_trap_info {scalar_t__ tt; scalar_t__ signo; } ;


 int FUNC_0 (scalar_t__,int ) ;
 struct hard_trap_info* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_1 (void)
{
  struct hard_trap_info *VAR_3;

  for (VAR_3 = VAR_0; VAR_3->tt && VAR_3->signo; VAR_3++)
    FUNC_0(VAR_3->tt, VAR_2);

  VAR_1 = 1;
}
