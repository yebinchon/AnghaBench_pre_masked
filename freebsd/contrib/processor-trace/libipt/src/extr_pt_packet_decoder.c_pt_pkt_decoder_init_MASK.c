
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_packet_decoder {int config; } ;
struct pt_config {int dummy; } ;


 int FUNC_0 (struct pt_packet_decoder*,int ,int) ;
 int FUNC_1 (int *,struct pt_config const*) ;
 int VAR_0 ;

int FUNC_2(struct pt_packet_decoder *VAR_1,
   const struct pt_config *VAR_2)
{
 int VAR_3;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_3 = FUNC_1(&VAR_1->config, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
