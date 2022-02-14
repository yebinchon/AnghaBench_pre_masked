
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct davbus_softc {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct davbus_softc *VAR_4, u_int VAR_5, u_int VAR_6)
{
 u_int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_7 = (VAR_5 & 0x00FF0000) >> 16;
 VAR_8 = (VAR_5 & 0x0000FF00) >> 8;
 VAR_9 = VAR_5 & 0xFF;

 for (VAR_11 = VAR_9; VAR_11 < VAR_9 + VAR_7; ++VAR_11) {
  VAR_10 = VAR_1 | (VAR_8 << 12) |
      ((VAR_7 + VAR_9 - 1) << 10) | (VAR_11 << 8) | (VAR_6 & 0xFF);
  if (VAR_11 == VAR_9)
   VAR_10 |= VAR_0;

  FUNC_2(VAR_4->reg, VAR_3, VAR_10);

  while (FUNC_1(VAR_4->reg, VAR_3) &
      VAR_2)
   FUNC_0(1);

  VAR_6 >>= 8;
 }
}
