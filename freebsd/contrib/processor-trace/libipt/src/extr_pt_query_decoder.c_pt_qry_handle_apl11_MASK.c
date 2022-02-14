
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_query_decoder {int config; } ;
struct pt_packet_decoder {int dummy; } ;


 int FUNC_0 (struct pt_query_decoder*,struct pt_packet_decoder*) ;
 int FUNC_1 (struct pt_packet_decoder*) ;
 int FUNC_2 (struct pt_packet_decoder*,int *) ;
 int FUNC_3 (struct pt_packet_decoder*,int ) ;
 int FUNC_4 (struct pt_query_decoder*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct pt_query_decoder *VAR_1)
{
 struct pt_packet_decoder VAR_2;
 uint64_t VAR_3;
 int VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(&VAR_2, &VAR_1->config);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_3(&VAR_2, VAR_3);
 if (VAR_4 >= 0)
  VAR_4 = FUNC_0(VAR_1, &VAR_2);

 FUNC_1(&VAR_2);
 return VAR_4;
}
