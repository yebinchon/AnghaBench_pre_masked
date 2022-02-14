
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int time; } ;
struct pt_event {int has_tsc; int lost_cyc; int lost_mtc; int tsc; } ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pt_event *VAR_2,
        const struct pt_query_decoder *VAR_3)
{
 int VAR_4;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(&VAR_2->tsc, &VAR_2->lost_mtc,
        &VAR_2->lost_cyc, &VAR_3->time);
 if (VAR_4 < 0) {
  if (VAR_4 != -VAR_1)
   return VAR_4;
 } else
  VAR_2->has_tsc = 1;

 return 0;
}
