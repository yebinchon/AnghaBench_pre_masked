
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct TYPE_2__ {int (* to_files_info ) (struct target_ops*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct target_ops*) ;

__attribute__((used)) static void
FUNC_2 (struct target_ops *VAR_2)
{
  VAR_0.to_files_info (VAR_2);

  FUNC_0 (VAR_1, "target_files_info (xxx)\n");
}
