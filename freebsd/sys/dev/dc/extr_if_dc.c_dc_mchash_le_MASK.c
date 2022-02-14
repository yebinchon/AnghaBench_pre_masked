
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct dc_softc {int dc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dc_softc*) ;
 int VAR_5 ;
 int FUNC_1 (int const*,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct dc_softc *VAR_6, const uint8_t *VAR_7)
{
 uint32_t VAR_8;


 VAR_8 = FUNC_1(VAR_7, VAR_5);





 if (VAR_6->dc_flags & VAR_0)
  return (VAR_8 & ((1 << VAR_2) - 1));


 if (VAR_6->dc_flags & VAR_1)
  return (VAR_8 & ((1 << VAR_4) - 1));



 if (FUNC_0(VAR_6)) {
  if ((VAR_8 & 0x180) == 0x180)
   return ((VAR_8 & 0x0F) + (VAR_8 & 0x70) * 3 + (14 << 4));
  else
   return ((VAR_8 & 0x1F) + ((VAR_8 >> 1) & 0xF0) * 3 +
       (12 << 4));
 }

 return (VAR_8 & ((1 << VAR_3) - 1));
}
