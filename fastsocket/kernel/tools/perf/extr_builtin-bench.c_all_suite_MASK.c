
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bench_suite {char* name; int (* fn ) (int,char const**,int *) ;} ;
struct bench_subsys {char* name; struct bench_suite* suites; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char const**,int *) ;

__attribute__((used)) static void FUNC_2(struct bench_subsys *VAR_0)
{
 int VAR_1;
 const char *VAR_2[2];
 struct bench_suite *VAR_3 = VAR_0->suites;

 VAR_2[1] = ((void*)0);






 for (VAR_1 = 0; VAR_3[VAR_1].fn; VAR_1++) {
  FUNC_0("# Running %s/%s benchmark...\n",
         VAR_0->name,
         VAR_3[VAR_1].name);

  VAR_2[1] = VAR_3[VAR_1].name;
  VAR_3[VAR_1].fn(1, VAR_2, ((void*)0));
  FUNC_0("\n");
 }
}
