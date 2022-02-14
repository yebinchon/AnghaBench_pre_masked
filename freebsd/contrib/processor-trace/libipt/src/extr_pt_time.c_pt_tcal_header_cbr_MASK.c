
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_time_cal {int dummy; } ;
struct pt_packet_cbr {int ratio; } ;
struct pt_config {int nom_freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_time_cal*,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct pt_time_cal *VAR_3,
        const struct pt_packet_cbr *VAR_4,
        const struct pt_config *VAR_5)
{
 uint64_t VAR_6, VAR_7, VAR_8;

 if (!VAR_3 || !VAR_4 || !VAR_5)
  return -VAR_2;

 VAR_7 = VAR_5->nom_freq;
 if (!VAR_7)
  return 0;


 VAR_6 = VAR_4->ratio;
 if (!VAR_6)
  return -VAR_1;

 VAR_8 = (VAR_7 << VAR_0) / VAR_6;

 return FUNC_0(VAR_3, VAR_8);
}
