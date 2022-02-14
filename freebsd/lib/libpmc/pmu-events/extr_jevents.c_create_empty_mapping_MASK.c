
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(const char *VAR_1)
{
 FILE *VAR_2;

 FUNC_5("%s: Creating empty pmu_events_map[] table\n", VAR_0);


 VAR_2 = FUNC_2(VAR_1, "w");
 if (!VAR_2) {
  FUNC_4("fopen()");
  FUNC_0(1);
 }

 FUNC_3(VAR_2, "#include \"pmu-events/pmu-events.h\"\n");
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);
 FUNC_1(VAR_2);
}
