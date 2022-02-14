
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_remove_exec_catchpoint ) (int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (int VAR_2)
{
  int VAR_3;

  VAR_3 = VAR_0.to_remove_exec_catchpoint (VAR_2);

  FUNC_0 (VAR_1, "target_remove_exec_catchpoint (%d) = %d\n",
        VAR_2, VAR_3);

  return VAR_3;
}
