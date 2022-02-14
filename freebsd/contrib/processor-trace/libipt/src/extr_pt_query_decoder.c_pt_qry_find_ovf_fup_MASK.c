
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_query_decoder {int config; } ;
struct pt_packet_decoder {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pt_packet_decoder*) ;
 int FUNC_1 (struct pt_packet_decoder*,int *) ;
 int FUNC_2 (struct pt_packet_decoder*) ;
 int FUNC_3 (struct pt_packet_decoder*,scalar_t__*) ;
 int FUNC_4 (struct pt_packet_decoder*,scalar_t__) ;
 int FUNC_5 (struct pt_query_decoder const*,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(const struct pt_query_decoder *VAR_3)
{
 struct pt_packet_decoder VAR_4;
 uint64_t VAR_5, VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_3)
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_3, &VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_1(&VAR_4, &VAR_3->config);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_4(&VAR_4, VAR_5);
 if (VAR_8 >= 0) {
  VAR_8 = FUNC_2(&VAR_4);
  if (VAR_8 > 0) {
   VAR_8 = FUNC_3(&VAR_4, &VAR_6);
   if (VAR_8 < 0)
    return VAR_8;

   if (VAR_6 <= VAR_5)
    return -VAR_2;

   VAR_7 = VAR_6 - VAR_5;
   if (VAR_0 < VAR_7)
    return -VAR_2;

   VAR_8 = (int) VAR_7;
  }
 }

 FUNC_0(&VAR_4);
 return VAR_8;
}
