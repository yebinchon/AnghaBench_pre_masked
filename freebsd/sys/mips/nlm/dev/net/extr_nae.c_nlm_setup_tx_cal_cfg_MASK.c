
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nae_port_config {scalar_t__ tx_slots_reqd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(uint64_t VAR_3, int VAR_4,
    struct nae_port_config *VAR_5)
{
 int VAR_6 = 0, VAR_7;
 int VAR_8 = 0, VAR_9 = 0;
 uint32_t VAR_10;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_5[VAR_7].tx_slots_reqd)
   VAR_6 += VAR_5[VAR_7].tx_slots_reqd;
  if (VAR_6 > VAR_0) {
   VAR_6 = VAR_0;
   break;
  }
 }

 FUNC_0(VAR_3, VAR_1, VAR_6 - 1);
 do {
  if (VAR_8 >= VAR_0)
   break;
  VAR_9 = VAR_8;
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   if (VAR_5[VAR_7].tx_slots_reqd > 0) {
    VAR_10 = (VAR_7 << 7) | (VAR_8 << 1) | 1;
    FUNC_0(VAR_3,
        VAR_2, VAR_10);
    VAR_8++;
    VAR_5[VAR_7].tx_slots_reqd--;
   }
  }
  if (VAR_9 == VAR_8)
   break;
 } while (1);
}
