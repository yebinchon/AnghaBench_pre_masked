
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ti_i2c_softc {int sc_error; int * sc_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ti_i2c_softc*) ;
 int FUNC_1 (struct ti_i2c_softc*) ;
 int FUNC_2 (struct ti_i2c_softc*,char*) ;
 int FUNC_3 (struct ti_i2c_softc*,int ) ;
 int FUNC_4 (struct ti_i2c_softc*,int ) ;
 int FUNC_5 (struct ti_i2c_softc*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 int VAR_4;
 struct ti_i2c_softc *VAR_5;
 uint16_t VAR_6, VAR_7;

  VAR_5 = (struct ti_i2c_softc *)VAR_3;

 FUNC_0(VAR_5);

 VAR_7 = FUNC_3(VAR_5, VAR_2);
 if (VAR_7 == 0) {
  FUNC_1(VAR_5);
  return;
 }


 VAR_6 = FUNC_3(VAR_5, VAR_1);


 VAR_7 &= VAR_6;

 VAR_4 = 0;

 if (VAR_5->sc_buffer != ((void*)0))
  VAR_4 = FUNC_4(VAR_5, VAR_7);
 else {
  FUNC_2(VAR_5, "Transfer interrupt without buffer\n");
  VAR_5->sc_error = VAR_0;
  VAR_4 = 1;
 }

 if (VAR_4)

  FUNC_5(VAR_5);

 FUNC_1(VAR_5);
}
