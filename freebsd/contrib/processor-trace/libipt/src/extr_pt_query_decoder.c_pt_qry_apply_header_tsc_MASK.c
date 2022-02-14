
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_time_cal {int dummy; } ;
struct pt_time {int dummy; } ;
struct pt_packet_tsc {int dummy; } ;
struct pt_config {int dummy; } ;


 int FUNC_0 (struct pt_time_cal*,struct pt_packet_tsc const*,struct pt_config const*) ;
 int FUNC_1 (struct pt_time*,struct pt_packet_tsc const*,struct pt_config const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct pt_time *VAR_1,
       struct pt_time_cal *VAR_2,
       const struct pt_packet_tsc *VAR_3,
       const struct pt_config *VAR_4)
{
 int VAR_5;






 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0 && (VAR_5 != -VAR_0))
  return VAR_5;




 VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_4);
 if (VAR_5 < 0 && (VAR_5 != -VAR_0))
  return VAR_5;

 return 0;
}
