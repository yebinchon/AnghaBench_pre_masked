
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int dev; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pvscsi_softc*) ;
 int FUNC_3 (struct pvscsi_softc*,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct pvscsi_softc *VAR_1)
{

 FUNC_1(VAR_1->dev, "Bus Reset\n");

 FUNC_3(VAR_1, VAR_0, ((void*)0), 0);
 FUNC_2(VAR_1);

 FUNC_0(2, VAR_1->dev, "bus reset done\n");
}
