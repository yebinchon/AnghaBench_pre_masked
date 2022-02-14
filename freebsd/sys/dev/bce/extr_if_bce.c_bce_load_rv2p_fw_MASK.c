
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bce_softc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bce_softc*,int ,scalar_t__ const) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_4(struct bce_softc *VAR_13, const u32 *VAR_14,
 u32 VAR_15, u32 VAR_16)
{
 int VAR_17;
 u32 VAR_18;

 FUNC_1(VAR_9);


 if (VAR_16 == VAR_11) {
  FUNC_0(VAR_12);
 }

 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17 += 8) {
  FUNC_3(VAR_13, VAR_3, *VAR_14);
  VAR_14++;
  FUNC_3(VAR_13, VAR_4, *VAR_14);
  VAR_14++;

  if (VAR_16 == VAR_10) {
   VAR_18 = (VAR_17 / 8) | VAR_6;
   FUNC_3(VAR_13, VAR_5, VAR_18);
  }
  else {
   VAR_18 = (VAR_17 / 8) | VAR_8;
   FUNC_3(VAR_13, VAR_7, VAR_18);
  }
 }


 if (VAR_16 == VAR_10) {
  FUNC_3(VAR_13, VAR_0, VAR_1);
 }
 else {
  FUNC_3(VAR_13, VAR_0, VAR_2);
 }

 FUNC_2(VAR_9);
}
