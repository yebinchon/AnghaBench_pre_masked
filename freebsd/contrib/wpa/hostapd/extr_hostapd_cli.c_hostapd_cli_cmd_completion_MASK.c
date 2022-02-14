
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** (* completion ) (char const*,int) ;char* usage; scalar_t__ cmd; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,char const*) ;
 int FUNC_3 (char*,char*) ;
 char** FUNC_4 (char const*,int) ;

__attribute__((used)) static char ** FUNC_5(const char *VAR_1, const char *VAR_2,
          int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_0[VAR_4].cmd; VAR_4++) {
  if (FUNC_2(VAR_0[VAR_4].cmd, VAR_1) != 0)
   continue;
  if (VAR_0[VAR_4].completion)
   return VAR_0[VAR_4].completion(VAR_2, VAR_3);
  if (!VAR_0[VAR_4].usage)
   return ((void*)0);
  FUNC_0();
  FUNC_3("\r%s\n", VAR_0[VAR_4].usage);
  FUNC_1();
  break;
 }

 return ((void*)0);
}
