
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_bmips_softc {int mem_rid; int cfg_rid; int * cfg; int * mem; int dev; } ;
typedef int device_t ;


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
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 void* FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int,int *) ;
 int FUNC_4 (int *,int ,int) ;
 struct bcm_bmips_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_10)
{
 struct bcm_bmips_softc *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(VAR_10);
 VAR_11->dev = VAR_10;


 VAR_11->mem_rid = 0;
 VAR_11->mem = FUNC_2(VAR_10, VAR_8, &VAR_11->mem_rid,
     VAR_4);
 if (VAR_11->mem == ((void*)0)) {
  FUNC_6(VAR_10, "failed to allocate cpu register block\n");
  VAR_12 = VAR_3;
  goto failed;
 }


 VAR_11->cfg_rid = FUNC_1(VAR_10, VAR_2, 0, 0);
 if (VAR_11->cfg_rid == -1) {
  FUNC_6(VAR_10, "missing required cfg0 register block\n");
  VAR_12 = VAR_3;
  goto failed;
 }


 VAR_11->cfg = FUNC_2(VAR_10, VAR_8, &VAR_11->cfg_rid,
     VAR_4|VAR_5);
 if (VAR_11->cfg == ((void*)0)) {
  FUNC_6(VAR_10, "failed to allocate cfg0 register block\n");
  VAR_12 = VAR_3;
  goto failed;
 }


 FUNC_4(VAR_11->cfg, VAR_6, 0x0);
 FUNC_4(VAR_11->cfg, VAR_7, 0x0);


 VAR_12 = FUNC_0(VAR_10, VAR_0, VAR_1,
     VAR_9);
 if (VAR_12)
  goto failed;

 return (0);

failed:
 if (VAR_11->mem != ((void*)0))
  FUNC_3(VAR_10, VAR_8, VAR_11->mem_rid, VAR_11->mem);

 if (VAR_11->cfg != ((void*)0))
  FUNC_3(VAR_10, VAR_8, VAR_11->cfg_rid, VAR_11->cfg);

 return (VAR_12);
}
