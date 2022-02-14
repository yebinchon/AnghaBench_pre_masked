
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (struct target_ops *VAR_3)
{
  FUNC_0 ("\tUsing the running image of %s %s via %s.\n",
       VAR_0 ? "attached" : "child",
       FUNC_1 (VAR_1), VAR_2);
}
