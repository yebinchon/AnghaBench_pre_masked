
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int pos; int config; int tcal; int time; } ;
struct pt_packet_tma {int dummy; } ;


 int FUNC_0 (struct pt_packet_tma*,int,int *) ;
 int FUNC_1 (int *,int *,struct pt_packet_tma*,int *) ;
 int VAR_0 ;

int FUNC_2(struct pt_query_decoder *VAR_1)
{
 struct pt_packet_tma VAR_2;
 int VAR_3, VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_0(&VAR_2, VAR_1->pos, &VAR_1->config);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = FUNC_1(&VAR_1->time, &VAR_1->tcal,
       &VAR_2, &VAR_1->config);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_1->pos += VAR_3;
 return 0;
}
