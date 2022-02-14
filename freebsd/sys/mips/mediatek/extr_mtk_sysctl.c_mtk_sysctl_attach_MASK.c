
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sysctl_softc {int dev; int * mem_res; scalar_t__ mem_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_sysctl_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,scalar_t__*,int ) ;
 struct mtk_sysctl_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 struct mtk_sysctl_softc* VAR_3 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct mtk_sysctl_softc *VAR_5 = FUNC_2(VAR_4);

 if (FUNC_3(VAR_4) != 0 || VAR_3 != ((void*)0)) {
  FUNC_4(VAR_4, "Only one sysctl module supported\n");
  return (VAR_0);
 }

 VAR_3 = VAR_5;


 VAR_5->mem_rid = 0;
 VAR_5->mem_res = FUNC_1(VAR_4, VAR_2,
     &VAR_5->mem_rid, VAR_1);

 if (VAR_5->mem_res == ((void*)0)) {
  FUNC_4(VAR_4, "couldn't map memory\n");
  FUNC_5(VAR_4);
  return (VAR_0);
 }

 VAR_5->dev = VAR_4;

 FUNC_0(VAR_5);

 return (0);
}
