
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_query_decoder {int config; } ;
struct pt_packet_decoder {int dummy; } ;


 int FUNC_0 (struct pt_query_decoder*,struct pt_packet_decoder*,unsigned int) ;
 int FUNC_1 (struct pt_packet_decoder*) ;
 int FUNC_2 (struct pt_packet_decoder*) ;
 int FUNC_3 (struct pt_packet_decoder*,int *) ;
 int FUNC_4 (struct pt_packet_decoder*,scalar_t__) ;
 int FUNC_5 (struct pt_query_decoder*,scalar_t__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct pt_query_decoder *VAR_1,
          unsigned int VAR_2)
{
 struct pt_packet_decoder VAR_3;
 uint64_t VAR_4;
 int VAR_5;

 if (!VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_1, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_3(&VAR_3, &VAR_1->config);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_4(&VAR_3, VAR_4 + VAR_2);
 if (VAR_5 >= 0) {
  VAR_5 = FUNC_1(&VAR_3);
  if (!VAR_5)
   VAR_5 = FUNC_0(VAR_1, &VAR_3, VAR_2);
 }

 FUNC_2(&VAR_3);
 return VAR_5;
}
