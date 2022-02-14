
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_packet_ptw {int plc; int ip; int payload; } ;
struct pt_config {int const* end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_2(struct pt_packet_ptw *VAR_6, const uint8_t *VAR_7,
      const struct pt_config *VAR_8)
{
 uint8_t VAR_9, VAR_10;
 int VAR_11;

 if (!VAR_6 || !VAR_7 || !VAR_8)
  return -VAR_5;


 VAR_7++;

 VAR_9 = *VAR_7++;
 VAR_10 = (VAR_9 >> VAR_2) & VAR_3;

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_8->end < VAR_7 + VAR_11)
  return -VAR_4;

 VAR_6->payload = FUNC_0(VAR_7, VAR_11);
 VAR_6->plc = VAR_10;
 VAR_6->ip = VAR_9 & VAR_1 ? 1 : 0;

 return VAR_0 + VAR_11;
}
