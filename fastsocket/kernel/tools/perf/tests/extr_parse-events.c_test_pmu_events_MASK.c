
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test__event_st {char* name; int check; } ;
struct stat {int dummy; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 struct dirent* FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (struct test__event_st*) ;

__attribute__((used)) static int FUNC_9(void)
{
 struct stat VAR_3;
 char VAR_4[VAR_1];
 struct dirent *VAR_5;
 DIR *VAR_6;
 int VAR_7;

 FUNC_4(VAR_4, VAR_1, "%s/bus/event_source/devices/cpu/events/",
   FUNC_7());

 VAR_7 = FUNC_5(VAR_4, &VAR_3);
 if (VAR_7) {
  FUNC_2("ommiting PMU cpu events tests\n");
  return 0;
 }

 VAR_6 = FUNC_1(VAR_4);
 if (!VAR_6) {
  FUNC_2("can't open pmu event dir");
  return -1;
 }

 while (!VAR_7 && (VAR_5 = FUNC_3(VAR_6))) {

  struct test__event_st VAR_8;
  char VAR_9[100];

  if (!FUNC_6(VAR_5->d_name, ".") ||
      !FUNC_6(VAR_5->d_name, ".."))
   continue;

  FUNC_4(VAR_9, 100, "cpu/event=%s/u", VAR_5->d_name);

  VAR_8.name = VAR_9;
  VAR_8.check = VAR_2;

  VAR_7 = FUNC_8(&VAR_8);

 }

 FUNC_0(VAR_6);
 return VAR_7;
}
