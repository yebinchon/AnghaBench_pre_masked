
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int config; int ip; int pos; } ;
struct pt_packet_ip {int dummy; } ;


 int FUNC_0 (int *,struct pt_packet_ip*,int *) ;
 int FUNC_1 (struct pt_packet_ip*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct pt_query_decoder *VAR_1)
{
 struct pt_packet_ip VAR_2;
 int VAR_3, VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_1(&VAR_2, VAR_1->pos, &VAR_1->config);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = FUNC_0(&VAR_1->ip, &VAR_2, &VAR_1->config);
 if (VAR_3 < 0)
  return VAR_3;



 return VAR_4;
}
