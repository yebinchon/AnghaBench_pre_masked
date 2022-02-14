
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int dev; } ;
typedef int cfg ;


 int FUNC_0 (char*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int,char*) ;

__attribute__((used)) static int FUNC_3(struct pvscsi_softc *VAR_0, char *VAR_1, int VAR_2)
{
 char VAR_3[64];

 FUNC_2(VAR_3, sizeof(VAR_3), "hw.pvscsi.%d.%s", FUNC_1(VAR_0->dev),
     VAR_1);
 FUNC_0(VAR_3, &VAR_2);

 return (VAR_2);
}
