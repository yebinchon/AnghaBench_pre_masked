
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_pcib_softc {int sc_io_base; int sc_io_size; int sc_mem_base; int sc_mem_size; int sc_dev; } ;
typedef int bus_addr_t ;


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
 int FUNC_0 (struct mv_pcib_softc*,int,int ) ;
 int FUNC_1 (int ,int,int,int,int ,int) ;
 int FUNC_2 (int ,int,int,int,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct mv_pcib_softc *VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 bus_addr_t VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;
 int VAR_20;

 VAR_16 = VAR_12->sc_io_base;
 VAR_18 = VAR_16 + VAR_12->sc_io_size - 1;
 VAR_17 = VAR_12->sc_mem_base;
 VAR_19 = VAR_17 + VAR_12->sc_mem_size - 1;


 FUNC_2(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15, VAR_1,
     VAR_16 >> 8, 1);
 FUNC_2(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15, VAR_0,
     VAR_16 >> 16, 2);
 FUNC_2(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15, VAR_3,
     VAR_18 >> 8, 1);
 FUNC_2(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15, VAR_2,
     VAR_18 >> 16, 2);


 FUNC_2(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15, VAR_4,
     VAR_17 >> 16, 2);
 FUNC_2(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15, VAR_5,
     VAR_19 >> 16, 2);


 FUNC_2(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15, VAR_7,
     0x10, 2);
 FUNC_2(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15, VAR_6,
     0x0, 4);
 FUNC_2(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15, VAR_9,
     0xF, 2);
 FUNC_2(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15, VAR_8,
     0x0, 4);

 VAR_20 = FUNC_1(VAR_12->sc_dev, VAR_13, VAR_14, VAR_15,
     VAR_10, 1);


 FUNC_0(VAR_12, VAR_20, VAR_11);
}
