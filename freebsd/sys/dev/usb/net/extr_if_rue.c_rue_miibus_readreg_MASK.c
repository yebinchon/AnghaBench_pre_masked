
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int ue_dev; } ;
struct rue_softc {TYPE_1__ sc_ue; int sc_mtx; } ;
typedef int device_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rue_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rue_softc*) ;
 struct rue_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rue_softc*,int) ;
 int FUNC_6 (struct rue_softc*,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7, int VAR_8, int VAR_9)
{
 struct rue_softc *VAR_10 = FUNC_2(VAR_7);
 uint16_t VAR_11;
 uint16_t VAR_12;
 int VAR_13;

 if (VAR_8 != 0)
  return (0);

 VAR_13 = FUNC_4(&VAR_10->sc_mtx);
 if (!VAR_13)
  FUNC_0(VAR_10);

 switch (VAR_9) {
 case 131:
  VAR_12 = VAR_3;
  break;
 case 130:
  VAR_12 = VAR_4;
  break;
 case 134:
  VAR_12 = VAR_1;
  break;
 case 133:
  VAR_12 = VAR_0;
  break;
 case 132:
  VAR_12 = VAR_2;
  break;
 case 129:
 case 128:
  VAR_11 = 0;
  goto done;
 default:
  if (VAR_6 <= VAR_9 && VAR_9 <= VAR_5) {
   VAR_11 = FUNC_5(VAR_10, VAR_9);
   goto done;
  }
  FUNC_3(VAR_10->sc_ue.ue_dev, "bad phy register\n");
  VAR_11 = 0;
  goto done;
 }

 VAR_11 = FUNC_6(VAR_10, VAR_12);
done:
 if (!VAR_13)
  FUNC_1(VAR_10);
 return (VAR_11);
}
