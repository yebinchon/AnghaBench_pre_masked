
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct list_head*) ;
 int FUNC_1 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 char* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(char *VAR_1, struct list_head *VAR_2)
{
 struct stat VAR_3;
 char VAR_4[VAR_0];
 const char *VAR_5;

 VAR_5 = FUNC_3();
 if (!VAR_5)
  return -1;

 FUNC_1(VAR_4, VAR_0,
   "%s/bus/event_source/devices/%s/events", VAR_5, VAR_1);

 if (FUNC_2(VAR_4, &VAR_3) < 0)
  return 0;

 if (FUNC_0(VAR_4, VAR_2))
  return -1;

 return 0;
}
