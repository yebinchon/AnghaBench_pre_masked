
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dme_softc {int * dme_macaddr; int dme_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (struct dme_softc*,int ) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_8(struct dme_softc *VAR_1)
{
 char VAR_2[32];
 char *VAR_3;
 int VAR_4;


 FUNC_7(VAR_2, 32, "hint.%s.%d.macaddr",
     FUNC_1(VAR_1->dme_dev),
     FUNC_2(VAR_1->dme_dev));


 if ((VAR_3 = FUNC_6(VAR_2)) != ((void*)0)) {
  if (!FUNC_4(VAR_3, VAR_1->dme_macaddr)) {
   FUNC_3(VAR_1->dme_dev, "MAC address: %s (hints)\n", VAR_3);
   return;
  }
 }





 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_1->dme_macaddr[VAR_4] = FUNC_5(VAR_1, FUNC_0(VAR_4));

 FUNC_3(VAR_1->dme_dev, "MAC address %6D (existing)\n",
     VAR_1->dme_macaddr, ":");
}
