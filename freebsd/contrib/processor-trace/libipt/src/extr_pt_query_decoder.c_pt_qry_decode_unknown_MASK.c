
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int pos; int config; } ;
struct pt_packet {int dummy; } ;


 int FUNC_0 (struct pt_packet*,int,int *) ;
 int VAR_0 ;

int FUNC_1(struct pt_query_decoder *VAR_1)
{
 struct pt_packet VAR_2;
 int VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_0(&VAR_2, VAR_1->pos, &VAR_1->config);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->pos += VAR_3;
 return 0;
}
