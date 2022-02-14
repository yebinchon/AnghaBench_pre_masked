
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; int release; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_1("%s %.*s\n", FUNC_0()->release,
  (int)FUNC_2(FUNC_0()->version, " "),
  FUNC_0()->version);
}
