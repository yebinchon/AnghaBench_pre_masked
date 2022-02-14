
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int node; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *,struct list_head*) ;
 struct list_head* FUNC_3 (int) ;
 struct perf_evsel* FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct list_head **VAR_1, int *VAR_2,
     char *VAR_3, char *VAR_4)
{
 struct perf_evsel *VAR_5;
 struct list_head *VAR_6 = *VAR_1;

 if (!VAR_6) {
  VAR_6 = FUNC_3(sizeof(*VAR_6));
  if (!VAR_6)
   return -VAR_0;
  FUNC_0(VAR_6);
 }

 VAR_5 = FUNC_4(VAR_3, VAR_4, (*VAR_2)++);
 if (!VAR_5) {
  FUNC_1(VAR_6);
  return -VAR_0;
 }

 FUNC_2(&VAR_5->node, VAR_6);
 *VAR_1 = VAR_6;
 return 0;
}
