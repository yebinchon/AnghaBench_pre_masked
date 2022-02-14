
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int uint16_t ;
struct jzsmb_softc {int busy; int * msg; scalar_t__ status; int mtx; } ;
struct iic_msg {scalar_t__ slave; int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jzsmb_softc*) ;
 int FUNC_1 (struct jzsmb_softc*,int ) ;
 int FUNC_2 (struct jzsmb_softc*) ;
 int FUNC_3 (struct jzsmb_softc*,int ,int ) ;
 struct jzsmb_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct jzsmb_softc*,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,struct iic_msg*) ;
 int FUNC_8 (int ,struct iic_msg*,int) ;
 int FUNC_9 (struct jzsmb_softc*,int *,int ,char*,int ) ;
 int FUNC_10 (struct jzsmb_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3, struct iic_msg *VAR_4, uint32_t VAR_5)
{
 struct jzsmb_softc *VAR_6;
 uint32_t VAR_7;
 uint16_t VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_3);

 FUNC_0(VAR_6);
 while (VAR_6->busy)
  FUNC_9(VAR_6, &VAR_6->mtx, 0, "i2cbuswait", 0);
 VAR_6->busy = 1;
 VAR_6->status = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {

  if (VAR_7 == 0 || VAR_4[VAR_7].slave != VAR_4[VAR_7 - 1].slave)
   FUNC_6(VAR_3, VAR_4[VAR_7].slave);


  if ((VAR_4[VAR_7].flags & VAR_0) != 0)
   VAR_9 = FUNC_7(VAR_3, &VAR_4[VAR_7]);
  else
   VAR_9 = FUNC_8(VAR_3, &VAR_4[VAR_7],
       VAR_7 < VAR_5 - 1);

  if (VAR_9 != 0)
   goto done;
 }

done:

 VAR_8 = FUNC_1(VAR_6, VAR_1);
 VAR_8 &= ~VAR_2;
 FUNC_3(VAR_6, VAR_1, VAR_8);


 FUNC_5(VAR_6, 0);

 VAR_6->msg = ((void*)0);
 VAR_6->busy = 0;
 FUNC_10(VAR_6);
 FUNC_2(VAR_6);

 return (VAR_9);
}
