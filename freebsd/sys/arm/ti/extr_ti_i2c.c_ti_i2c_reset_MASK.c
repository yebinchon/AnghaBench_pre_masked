
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct ti_i2c_softc {int sc_con_reg; int sc_fifo_trsh; int sc_mem_res; int * sc_iicbus; } ;
struct ti_i2c_clock_config {int frequency; int psc; int scll; int sclh; int hsscll; int hssclh; } ;




 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 struct ti_i2c_clock_config* VAR_27 ;
 int FUNC_4 () ;
 int FUNC_5 (struct ti_i2c_softc*,int ) ;
 int FUNC_6 (struct ti_i2c_softc*,int ,int) ;
 struct ti_i2c_clock_config* VAR_28 ;

__attribute__((used)) static int
FUNC_7(struct ti_i2c_softc *VAR_29, u_char VAR_30)
{
 int VAR_31;
 struct ti_i2c_clock_config *VAR_32;
 u_int VAR_33;
 uint16_t VAR_34, VAR_35, VAR_36, VAR_37;

 switch (FUNC_4()) {
 default:
  FUNC_3("Unknown TI SoC, unable to reset the i2c");
 }
 if (VAR_29->sc_iicbus == ((void*)0))
  VAR_33 = 100000;
 else
  VAR_33 = FUNC_1(VAR_29->sc_iicbus, VAR_30);
 for (;;) {
  if (VAR_32[1].frequency == 0 || VAR_32[1].frequency > VAR_33)
   break;
  VAR_32++;
 }







 VAR_29->sc_con_reg = 0;
 FUNC_6(VAR_29, VAR_16, VAR_29->sc_con_reg);


 FUNC_2(VAR_29->sc_mem_res, VAR_21, VAR_22);






 FUNC_6(VAR_29, VAR_16, VAR_3);


 VAR_31 = 0;
 while ((FUNC_5(VAR_29, VAR_23) & VAR_26) == 0) {
  if (VAR_31++ > 100)
   return (VAR_0);
  FUNC_0(100);
 }





 FUNC_6(VAR_29, VAR_16, VAR_29->sc_con_reg);
 FUNC_6(VAR_29, VAR_18, VAR_32->psc);







 VAR_36 = VAR_32->scll & VAR_25;
 VAR_37 = VAR_32->sclh & VAR_24;
 switch (FUNC_4()) {
 }


 FUNC_6(VAR_29, VAR_20, VAR_36);
 FUNC_6(VAR_29, VAR_19, VAR_37);
 VAR_34 = (VAR_29->sc_fifo_trsh - 1) & VAR_2;
 VAR_35 = VAR_34 | (VAR_34 << VAR_1);
 FUNC_6(VAR_29, VAR_15, VAR_35);
 VAR_29->sc_con_reg |= VAR_3 | VAR_4;
 FUNC_6(VAR_29, VAR_16, VAR_29->sc_con_reg);
 VAR_35 = VAR_13 |
     VAR_14 |
     VAR_11 |
     VAR_12 |
     VAR_9 |
     VAR_10 |
     VAR_8;


 FUNC_6(VAR_29, VAR_17, VAR_35);
 return (0);
}
