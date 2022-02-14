
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct pt_time_cal {int dummy; } ;
struct pt_time {int dummy; } ;
struct pt_packet_cyc {int dummy; } ;
struct pt_config {int dummy; } ;


 int FUNC_0 (unsigned long long*,struct pt_time_cal*) ;
 int FUNC_1 (struct pt_time_cal*,struct pt_packet_cyc const*,struct pt_config const*) ;
 int FUNC_2 (struct pt_time*,struct pt_packet_cyc const*,struct pt_config const*,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct pt_time *VAR_2, struct pt_time_cal *VAR_3,
       const struct pt_packet_cyc *VAR_4,
       const struct pt_config *VAR_5)
{
 uint64_t VAR_6;
 int VAR_7;






 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_7 < 0 && (VAR_7 != -VAR_0))
  return VAR_7;






 VAR_7 = FUNC_0(&VAR_6, VAR_3);
 if (VAR_7 < 0) {
  if (VAR_7 == -VAR_1)
   VAR_6 = 0ull;
  else
   return VAR_7;
 }




 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6);
 if (VAR_7 < 0 && (VAR_7 != -VAR_0))
  return VAR_7;

 return 0;
}
