
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_4(struct alc_softc *VAR_13)
{
 uint32_t VAR_14;

 VAR_14 = FUNC_1(VAR_13, VAR_2);
 VAR_14 &= ~VAR_6;
 VAR_14 |= VAR_7;
 FUNC_2(VAR_13, VAR_2, VAR_14);

 VAR_14 = FUNC_1(VAR_13, VAR_0);
 if (FUNC_0(VAR_13->alc_rev) >= VAR_4) {




  VAR_14 &= ~VAR_11;
  VAR_14 |= (VAR_10 << VAR_12);
  VAR_14 &= ~VAR_8;
  FUNC_2(VAR_13, VAR_0, VAR_14);
  FUNC_2(VAR_13, VAR_0, VAR_14 | VAR_8);
  VAR_14 = FUNC_1(VAR_13, VAR_1);
  VAR_14 &= ~VAR_5;
  FUNC_2(VAR_13, VAR_1, VAR_14);
  FUNC_2(VAR_13, VAR_1, VAR_14 | VAR_5);

 } else {
  VAR_14 &= ~VAR_8;

  if (FUNC_0(VAR_13->alc_rev) <= VAR_3)
   VAR_14 &= ~VAR_9;
  FUNC_2(VAR_13, VAR_0, VAR_14 | VAR_8);
  FUNC_2(VAR_13, VAR_0, VAR_14);
 }

 FUNC_3(20);
}
