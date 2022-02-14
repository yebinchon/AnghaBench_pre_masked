
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_can_use_hw_breakpoint ) (int,int,int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static int
FUNC_2 (int VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5;

  VAR_5 = VAR_0.to_can_use_hw_breakpoint (VAR_2, VAR_3, VAR_4);

  FUNC_0 (VAR_1,
        "target_can_use_hw_breakpoint (%ld, %ld, %ld) = %ld\n",
        (unsigned long) VAR_2,
        (unsigned long) VAR_3,
        (unsigned long) VAR_4,
        (unsigned long) VAR_5);
  return VAR_5;
}
