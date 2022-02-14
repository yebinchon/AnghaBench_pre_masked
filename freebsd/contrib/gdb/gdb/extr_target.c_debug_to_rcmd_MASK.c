
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct TYPE_2__ {int (* to_rcmd ) (char*,struct ui_file*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,struct ui_file*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_2,
        struct ui_file *VAR_3)
{
  VAR_0.to_rcmd (VAR_2, VAR_3);
  FUNC_0 (VAR_1, "target_rcmd (%s, ...)\n", VAR_2);
}
