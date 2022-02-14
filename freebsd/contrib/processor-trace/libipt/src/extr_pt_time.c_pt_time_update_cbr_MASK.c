
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_time {int have_cbr; scalar_t__ cbr; } ;
struct pt_packet_cbr {scalar_t__ ratio; } ;
struct pt_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct pt_time *VAR_2,
         const struct pt_packet_cbr *VAR_3,
         const struct pt_config *VAR_4)
{
 uint8_t VAR_5;

 (void) VAR_4;

 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 VAR_5 = VAR_3->ratio;
 if (!VAR_5)
  return -VAR_0;

 VAR_2->have_cbr = 1;
 VAR_2->cbr = VAR_5;

 return 0;
}
