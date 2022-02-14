
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test__event_st {int (* check ) (struct perf_evlist*) ;int name; } ;
struct perf_evlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_evlist*,int ,int ) ;
 int FUNC_1 (struct perf_evlist*) ;
 struct perf_evlist* FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct perf_evlist*) ;

__attribute__((used)) static int FUNC_5(struct test__event_st *VAR_1)
{
 struct perf_evlist *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(((void*)0), ((void*)0));
 if (VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2, VAR_1->name, 0);
 if (VAR_3) {
  FUNC_3("failed to parse event '%s', err %d\n",
    VAR_1->name, VAR_3);
  return VAR_3;
 }

 VAR_3 = VAR_1->check(VAR_2);
 FUNC_1(VAR_2);

 return VAR_3;
}
