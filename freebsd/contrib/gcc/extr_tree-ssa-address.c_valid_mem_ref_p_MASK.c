
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_address {int dummy; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (struct mem_address*,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static bool
FUNC_2 (enum machine_mode VAR_0, struct mem_address *VAR_1)
{
  rtx VAR_2;

  VAR_2 = FUNC_0 (VAR_1, 0);
  if (!VAR_2)
    return 0;

  return FUNC_1 (VAR_0, VAR_2);
}
