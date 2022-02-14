
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int size; int addr; } ;
typedef TYPE_1__ procfs_break ;
typedef int brk ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*,int,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_4, int VAR_5, int VAR_6)
{
  procfs_break VAR_7;

  VAR_7.type = VAR_5;
  VAR_7.addr = VAR_4;
  VAR_7.size = VAR_6;
  VAR_3 = FUNC_0 (VAR_2, VAR_0, &VAR_7, sizeof (VAR_7), 0);
  if (VAR_3 != VAR_1)
    return 1;
  return 0;
}
