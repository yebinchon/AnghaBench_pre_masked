
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef void* uint16_t ;
struct bwi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int,int) ;
 int FUNC_3 (struct bwi_softc*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void
FUNC_5(struct bwi_softc *VAR_8)
{

 for (;;) {
  uint32_t VAR_9, VAR_10;
  uint16_t VAR_11;
  int VAR_12;

  VAR_9 = FUNC_0(VAR_8, VAR_0);
  if ((VAR_9 & VAR_6) == 0)
   break;
  VAR_10 = FUNC_0(VAR_8, VAR_7);

  VAR_11 = FUNC_1(VAR_9, VAR_5);
  VAR_12 = FUNC_1(VAR_9,
    VAR_3);

  if (VAR_9 & (VAR_2 | VAR_4))
   continue;

  FUNC_2(VAR_8, FUNC_4(VAR_11), VAR_9 & VAR_1,
      VAR_12);
 }

 FUNC_3(VAR_8);
}
