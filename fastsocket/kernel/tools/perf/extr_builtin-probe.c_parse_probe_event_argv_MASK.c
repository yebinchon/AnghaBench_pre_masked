
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mod_events; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(int VAR_2, const char **VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 char *VAR_8;

 VAR_7 = FUNC_2(VAR_3[0]);
 if (VAR_7 && VAR_2 == 1)
  return 0;


 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_4 == 0 && VAR_7)
   continue;

  VAR_5 += FUNC_4(VAR_3[VAR_4]) + 1;
 }
 VAR_8 = FUNC_5(VAR_5 + 1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_4 == 0 && VAR_7)
   continue;

  VAR_5 += FUNC_3(&VAR_8[VAR_5], "%s ", VAR_3[VAR_4]);
 }
 VAR_1.mod_events = 1;
 VAR_6 = FUNC_1(VAR_8);
 FUNC_0(VAR_8);
 return VAR_6;
}
