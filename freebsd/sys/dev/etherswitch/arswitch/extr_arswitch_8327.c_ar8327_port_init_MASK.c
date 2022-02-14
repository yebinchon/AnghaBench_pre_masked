
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int port0_status; int port6_status; } ;
struct arswitch_softc {int sc_dev; TYPE_1__ ar8327; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct arswitch_softc *VAR_9, int VAR_10)
{
 uint32_t VAR_11;
 int VAR_12;


 VAR_12 = 0x7f;

 if (VAR_10 == VAR_6)
  VAR_11 = VAR_9->ar8327.port0_status;
 else if (VAR_10 == 6)
  VAR_11 = VAR_9->ar8327.port6_status;
        else
  VAR_11 = VAR_8;

 FUNC_5(VAR_9->sc_dev, FUNC_2(VAR_10), VAR_11);
 FUNC_5(VAR_9->sc_dev, FUNC_0(VAR_10), 0);




 VAR_11 = 1 << VAR_3;
 VAR_11 |= 1 << VAR_2;
 FUNC_5(VAR_9->sc_dev, FUNC_3(VAR_10), VAR_11);

 VAR_11 = VAR_5 << VAR_4;
 FUNC_5(VAR_9->sc_dev, FUNC_4(VAR_10), VAR_11);
 VAR_11 = VAR_0;
 VAR_11 |= VAR_7 << VAR_1;


 VAR_11 |= (VAR_12 & ~(1 << VAR_10));
 FUNC_5(VAR_9->sc_dev, FUNC_1(VAR_10), VAR_11);
}
