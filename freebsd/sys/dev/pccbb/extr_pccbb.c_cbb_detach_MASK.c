
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {int flags; int mtx; int base_res; int irq_res; int event_thread; int intrhand; int dev; int * exca; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct cbb_softc*,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int **,int*) ;
 struct cbb_softc* FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,int *,int ,char*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (int *) ;

int
FUNC_17(device_t VAR_13)
{
 struct cbb_softc *VAR_14 = FUNC_8(VAR_13);
 device_t *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;







 VAR_18 = FUNC_1(VAR_13);
 if (VAR_18 != 0)
  return (VAR_18);







 VAR_17 = 10;
 do {
  VAR_18 = FUNC_7(VAR_13, &VAR_15, &VAR_19);
  if (VAR_18 == 0)
   break;



  if (VAR_18 == VAR_6) {
   FUNC_15("cbbnomem", 1);
   continue;
  }
 } while (VAR_17-- > 0);
 for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++)
  FUNC_6(VAR_13, VAR_15[VAR_16]);
 FUNC_10(VAR_15, VAR_9);


 FUNC_5(VAR_14, VAR_5, 0);


 FUNC_9(&VAR_14->exca[0], VAR_7, VAR_8);


 FUNC_4(VAR_13, VAR_0);


 FUNC_5(VAR_14, VAR_4, 0xffffffff);
 FUNC_3(VAR_13, VAR_14->irq_res, VAR_14->intrhand);
 FUNC_13(&VAR_14->mtx);
 VAR_14->flags |= VAR_2;
 while (VAR_14->flags & VAR_3) {
  FUNC_0((VAR_14->dev, "Waiting for thread to die\n"));
  FUNC_16(&VAR_14->intrhand);
  FUNC_11(VAR_14->event_thread, &VAR_14->mtx, VAR_10, "cbbun", 0);
 }
 FUNC_14(&VAR_14->mtx);

 FUNC_2(VAR_13, VAR_11, 0, VAR_14->irq_res);
 FUNC_2(VAR_13, VAR_12, VAR_1,
     VAR_14->base_res);
 FUNC_12(&VAR_14->mtx);
 return (0);
}
