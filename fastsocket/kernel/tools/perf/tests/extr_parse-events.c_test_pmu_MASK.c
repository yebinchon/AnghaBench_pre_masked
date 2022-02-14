
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (char*,struct stat*) ;
 char* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 struct stat VAR_1;
 char VAR_2[VAR_0];
 int VAR_3;

 FUNC_1(VAR_2, VAR_0, "%s/bus/event_source/devices/cpu/format/",
   FUNC_3());

 VAR_3 = FUNC_2(VAR_2, &VAR_1);
 if (VAR_3)
  FUNC_0("omitting PMU cpu tests\n");
 return !VAR_3;
}
