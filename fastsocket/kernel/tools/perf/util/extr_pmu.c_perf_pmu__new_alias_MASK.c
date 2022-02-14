
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu__alias {int list; int name; int terms; } ;
struct list_head {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (struct perf_pmu__alias*) ;
 int FUNC_3 (int *,struct list_head*) ;
 struct perf_pmu__alias* FUNC_4 (int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct list_head *VAR_2, char *VAR_3, FILE *VAR_4)
{
 struct perf_pmu__alias *VAR_5;
 char VAR_6[256];
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6, 1, sizeof(VAR_6), VAR_4);
 if (VAR_7 == 0)
  return -VAR_0;
 VAR_6[VAR_7] = 0;

 VAR_5 = FUNC_4(sizeof(*VAR_5));
 if (!VAR_5)
  return -VAR_1;

 FUNC_0(&VAR_5->terms);
 VAR_7 = FUNC_5(&VAR_5->terms, VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_5);
  return VAR_7;
 }

 VAR_5->name = FUNC_6(VAR_3);
 FUNC_3(&VAR_5->list, VAR_2);
 return 0;
}
