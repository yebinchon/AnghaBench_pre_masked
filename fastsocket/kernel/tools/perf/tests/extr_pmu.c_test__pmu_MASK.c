
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int config; int config1; int config2; } ;
struct list_head {int dummy; } ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct perf_event_attr*,int ,int) ;
 int FUNC_2 (int *,struct perf_event_attr*,struct list_head*) ;
 int FUNC_3 (char*,int *) ;
 char* FUNC_4 () ;
 int FUNC_5 (char*) ;
 struct list_head* FUNC_6 () ;

int FUNC_7(void)
{
 char *VAR_2 = FUNC_4();
 FUNC_0(VAR_1);
 struct list_head *VAR_3 = FUNC_6();
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 do {
  struct perf_event_attr VAR_5;

  FUNC_1(&VAR_5, 0, sizeof(VAR_5));

  VAR_4 = FUNC_3(VAR_2, &VAR_1);
  if (VAR_4)
   break;

  VAR_4 = FUNC_2(&VAR_1, &VAR_5, VAR_3);
  if (VAR_4)
   break;

  VAR_4 = -VAR_0;

  if (VAR_5.config != 0xc00000000002a823)
   break;
  if (VAR_5.config1 != 0x8000400000000145)
   break;
  if (VAR_5.config2 != 0x0400000020041d07)
   break;

  VAR_4 = 0;
 } while (0);

 FUNC_5(VAR_2);
 return VAR_4;
}
