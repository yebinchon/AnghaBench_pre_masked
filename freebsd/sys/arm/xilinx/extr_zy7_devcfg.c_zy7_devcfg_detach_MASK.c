
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zy7_devcfg_softc {int * mem_res; int * irq_res; scalar_t__ intrhandle; int * sc_ctl_dev; int * sysctl_tree_top; int sysctl_tree; } ;
typedef int device_t ;


 int FUNC_0 (struct zy7_devcfg_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 struct zy7_devcfg_softc* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct zy7_devcfg_softc *VAR_4 = FUNC_5(VAR_3);

 if (VAR_4->sysctl_tree_top != ((void*)0)) {
  FUNC_8(&VAR_4->sysctl_tree);
  VAR_4->sysctl_tree_top = ((void*)0);
 }

 if (FUNC_6(VAR_3))
  FUNC_1(VAR_3);


 if (VAR_4->sc_ctl_dev != ((void*)0))
  FUNC_4(VAR_4->sc_ctl_dev);


 if (VAR_4->irq_res != ((void*)0)) {
  if (VAR_4->intrhandle)
   FUNC_3(VAR_3, VAR_4->irq_res, VAR_4->intrhandle);
  FUNC_2(VAR_3, VAR_0,
        FUNC_7(VAR_4->irq_res), VAR_4->irq_res);
 }


 if (VAR_4->mem_res != ((void*)0))
  FUNC_2(VAR_3, VAR_1,
        FUNC_7(VAR_4->mem_res), VAR_4->mem_res);

 VAR_2 = ((void*)0);

 FUNC_0(VAR_4);

 return (0);
}
