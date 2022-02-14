
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_query_decoder {int pos; int config; } ;
struct TYPE_2__ {int tsx; int exec; } ;
struct pt_packet_mode {int leaf; TYPE_1__ bits; } ;




 int FUNC_0 (struct pt_packet_mode*,int,int *) ;
 int FUNC_1 (struct pt_query_decoder*,int *) ;
 int FUNC_2 (struct pt_query_decoder*,int *) ;
 int VAR_0 ;

int FUNC_3(struct pt_query_decoder *VAR_1)
{
 struct pt_packet_mode VAR_2;
 int VAR_3, VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_0(&VAR_2, VAR_1->pos, &VAR_1->config);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = 0;
 switch (VAR_2.leaf) {
 case 129:
  VAR_4 = FUNC_1(VAR_1, &VAR_2.bits.exec);
  break;

 case 128:
  VAR_4 = FUNC_2(VAR_1, &VAR_2.bits.tsx);
  break;
 }

 if (VAR_4 < 0)
  return VAR_4;

 VAR_1->pos += VAR_3;
 return 0;
}
