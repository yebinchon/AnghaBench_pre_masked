
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_softc {int * dc_srom; int dc_dev; } ;
typedef int caddr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dc_softc*,int ,int ,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct dc_softc *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 VAR_4->dc_srom = FUNC_3(VAR_6, VAR_1, VAR_2 | VAR_3);
 if (VAR_4->dc_srom == ((void*)0)) {
  FUNC_2(VAR_4->dc_dev, "Could not allocate SROM buffer\n");
  return (VAR_0);
 }
 FUNC_1(VAR_4, (caddr_t)VAR_4->dc_srom, 0, (VAR_6 / 2), 0);
 return (0);
}
