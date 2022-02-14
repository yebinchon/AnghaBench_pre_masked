
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cmd; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,char const*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1, const char *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, "commands:\n");
 for (VAR_3 = 0; VAR_0[VAR_3].cmd; VAR_3++) {
  if (VAR_2 == ((void*)0) || FUNC_2(VAR_0[VAR_3].cmd, VAR_2))
   FUNC_1(VAR_1, &VAR_0[VAR_3], "  ");
 }
}
