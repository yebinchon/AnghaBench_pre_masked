
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_terminal_info ) (char*,int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_2, int VAR_3)
{
  VAR_0.to_terminal_info (VAR_2, VAR_3);

  FUNC_0 (VAR_1, "target_terminal_info (%s, %d)\n", VAR_2,
        VAR_3);
}
