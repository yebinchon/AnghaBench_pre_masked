
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exca_softc {int memalloc; int ioalloc; int dev; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct exca_softc*,int) ;
 int FUNC_3 (struct exca_softc*,int) ;
 int FUNC_4 (struct exca_softc*,int ,int ) ;
 int FUNC_5 (struct exca_softc*,int ,int ) ;
 int FUNC_6 (struct exca_softc*) ;

void
FUNC_7(struct exca_softc *VAR_9, device_t VAR_10)
{
 int VAR_11;


 FUNC_5(VAR_9, VAR_7, VAR_8);

 FUNC_4(VAR_9, VAR_1, VAR_3);

 FUNC_0(30*1000);

 FUNC_5(VAR_9, VAR_1, VAR_4);

 FUNC_0(20*1000);

 FUNC_6(VAR_9);


 FUNC_4(VAR_9, VAR_0, 0);

 FUNC_5(VAR_9, VAR_1, VAR_2);
 FUNC_1(VAR_9->dev, "card type is io\n");


 for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11)
  if (VAR_9->memalloc & (1 << VAR_11))
   FUNC_3(VAR_9, VAR_11);
 for (VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11)
  if (VAR_9->ioalloc & (1 << VAR_11))
   FUNC_2(VAR_9, VAR_11);
}
