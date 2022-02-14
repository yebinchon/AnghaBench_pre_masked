
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu__format {int value; int list; int bits; int name; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int ,unsigned long*,int) ;
 int FUNC_2 (char*) ;
 struct perf_pmu__format* FUNC_3 (int) ;

int FUNC_4(struct list_head *VAR_1, char *VAR_2,
    int VAR_3, unsigned long *VAR_4)
{
 struct perf_pmu__format *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5));
 if (!VAR_5)
  return -VAR_0;

 VAR_5->name = FUNC_2(VAR_2);
 VAR_5->value = VAR_3;
 FUNC_1(VAR_5->bits, VAR_4, sizeof(VAR_5->bits));

 FUNC_0(&VAR_5->list, VAR_1);
 return 0;
}
