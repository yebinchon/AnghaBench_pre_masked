
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_insert_watchpoint ) (scalar_t__,int,int) ;} ;
typedef scalar_t__ CORE_ADDR ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,int,int,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5;

  VAR_5 = VAR_0.to_insert_watchpoint (VAR_2, VAR_3, VAR_4);

  FUNC_0 (VAR_1,
        "target_insert_watchpoint (0x%lx, %d, %d) = %ld\n",
        (unsigned long) VAR_2, VAR_3, VAR_4, (unsigned long) VAR_5);
  return VAR_5;
}
