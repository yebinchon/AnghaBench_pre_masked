
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct cs4231_channel {int togo; int nextaddr; int channel; int buffer; } ;
struct cs4231_softc {struct cs4231_channel sc_pch; int sc_dev; } ;


 int FUNC_0 (struct cs4231_softc*) ;
 int FUNC_1 (struct cs4231_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct cs4231_softc*,int ) ;
 int FUNC_3 (struct cs4231_softc*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cs4231_softc*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_6)
{
 struct cs4231_softc *VAR_7;
 struct cs4231_channel *VAR_8;
 u_int32_t VAR_9;
 u_int8_t VAR_10;

 VAR_7 = VAR_6;
 FUNC_0(VAR_7);

 VAR_9 = FUNC_2(VAR_7, VAR_5);
 if ((VAR_9 & VAR_2) == 0) {
  FUNC_1(VAR_7);
  return;
 }

 if ((VAR_9 & VAR_1)) {
  VAR_10 = FUNC_5(VAR_7, VAR_0);
  FUNC_6(VAR_7->sc_dev,
      "ebdma error interrupt : stat = 0x%x\n", VAR_10);
 }
 FUNC_3(VAR_7, VAR_5, VAR_9 | VAR_3);

 VAR_8 = ((void*)0);
 if (VAR_9 & VAR_3) {
  u_long VAR_11, VAR_12;
  u_int32_t VAR_13;

  VAR_8 = &VAR_7->sc_pch;
  VAR_13 = VAR_8->togo;
  VAR_12 = FUNC_7(VAR_8->buffer);
  VAR_11 = VAR_8->nextaddr + VAR_13;
  if (VAR_11 >= VAR_12 + FUNC_8(VAR_8->buffer))
   VAR_11 = VAR_12;




  FUNC_3(VAR_7, VAR_4, VAR_11);
  VAR_8->nextaddr = VAR_11;
 }
 FUNC_1(VAR_7);
 if (VAR_8)
  FUNC_4(VAR_8->channel);
}
