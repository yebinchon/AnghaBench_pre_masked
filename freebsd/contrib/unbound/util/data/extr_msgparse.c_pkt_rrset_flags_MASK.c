
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ sldns_pkt_section ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static uint32_t
FUNC_1(sldns_buffer* VAR_5, uint16_t VAR_6, sldns_pkt_section VAR_7)
{
 uint32_t VAR_8 = 0;
 if(VAR_6 == VAR_0 && FUNC_0(VAR_5)) {
  VAR_8 |= VAR_3;
 } else if(VAR_6 == VAR_1 && VAR_7 == VAR_2) {
  VAR_8 |= VAR_4;
 }
 return VAR_8;
}
