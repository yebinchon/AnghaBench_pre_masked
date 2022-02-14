
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int es_nports; } ;
struct arswitch_softc {TYPE_1__ info; int sc_dev; } ;


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
 int FUNC_1 (struct arswitch_softc*) ;
 int FUNC_2 (struct arswitch_softc*) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct arswitch_softc *VAR_13)
{
 uint32_t VAR_14;

 FUNC_1(VAR_13);


 VAR_14 = VAR_0 |
     VAR_1;
 FUNC_5(VAR_13->sc_dev, VAR_9, VAR_14);


 VAR_14 = (VAR_7 << VAR_4) |
     (VAR_7 << VAR_3) |
     (VAR_7 << VAR_2);
 FUNC_5(VAR_13->sc_dev, VAR_10, VAR_14);



 FUNC_3(VAR_13->sc_dev, VAR_11,
     VAR_5, 9018 + 8 + 2);


 FUNC_3(VAR_13->sc_dev, VAR_12,
     VAR_6, VAR_6);


 VAR_14 = FUNC_4(VAR_13->sc_dev, VAR_8);
 VAR_14 |= FUNC_0(0) |
     FUNC_0(1) |
     FUNC_0(2) |
     FUNC_0(3) |
     FUNC_0(4);
 FUNC_5(VAR_13->sc_dev, VAR_8, VAR_14);



 VAR_13->info.es_nports = 7;

 FUNC_2(VAR_13);
 return (0);
}
