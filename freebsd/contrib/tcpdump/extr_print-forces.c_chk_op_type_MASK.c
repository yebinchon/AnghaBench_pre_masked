
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(netdissect_options *VAR_3,
            uint16_t VAR_4, uint16_t VAR_5, uint16_t VAR_6)
{
 if (VAR_4 != VAR_2) {
  if (VAR_5 & VAR_0) {
   if (VAR_4 != VAR_1) {
    FUNC_0((VAR_3, "Based on flags expected KEYINFO TLV!\n"));
   }
  } else {
   if (!(VAR_5 & VAR_6)) {
    FUNC_0((VAR_3, "Illegal DATA encoding for type 0x%x programmed %x got %x \n",
              VAR_4, VAR_6, VAR_5));
   }
  }
 }

}
