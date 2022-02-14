
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_softc {int ti_bhandle; int ti_btag; } ;


 int FUNC_0 (struct ti_softc*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,scalar_t__,int*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct ti_softc *VAR_3, uint32_t VAR_4, uint32_t VAR_5, void *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 char *VAR_10;

 VAR_7 = VAR_4;
 VAR_9 = VAR_5;
 VAR_10 = VAR_6;

 while (VAR_9) {
  if (VAR_9 < VAR_2)
   VAR_8 = VAR_9;
  else
   VAR_8 = VAR_2 - (VAR_7 % VAR_2);
  FUNC_0(VAR_3, VAR_0, FUNC_2(VAR_7, VAR_2));
  FUNC_1(VAR_3->ti_btag, VAR_3->ti_bhandle,
      VAR_1 + (VAR_7 & (VAR_2 - 1)), (uint32_t *)VAR_10,
      VAR_8 / 4);
  VAR_10 += VAR_8;
  VAR_7 += VAR_8;
  VAR_9 -= VAR_8;
 }
}
