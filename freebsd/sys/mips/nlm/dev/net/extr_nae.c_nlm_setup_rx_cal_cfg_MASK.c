
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nae_port_config {scalar_t__ rx_slots_reqd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(uint64_t VAR_2, int VAR_3,
    struct nae_port_config *VAR_4)
{
 int VAR_5 = 0, VAR_6;
 int VAR_7, VAR_8 = 0, VAR_9 = 0;
 uint32_t VAR_10;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_4[VAR_6].rx_slots_reqd)
      VAR_5 += VAR_4[VAR_6].rx_slots_reqd;
  if (VAR_5 > VAR_0) {
   VAR_5 = VAR_0;
   break;
  }
 }

 VAR_7 = VAR_5 - 1;

 do {
  if (VAR_8 >= VAR_0)
   break;
  VAR_9 = VAR_8;
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
   if (VAR_4[VAR_6].rx_slots_reqd > 0) {
    VAR_10 = (VAR_7 << 16) | (VAR_6 << 8) | VAR_8;
    FUNC_0(VAR_2,
        VAR_1, VAR_10);
    VAR_8++;
    VAR_4[VAR_6].rx_slots_reqd--;
   }
  }
  if (VAR_9 == VAR_8)
   break;
 } while (1);
}
