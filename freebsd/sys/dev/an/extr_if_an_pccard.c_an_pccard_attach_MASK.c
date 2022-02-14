
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {int irq_handle; int irq_res; int irq_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct an_softc*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *,int ,struct an_softc*,int *) ;
 int FUNC_5 (int ) ;
 struct an_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct an_softc *VAR_4 = FUNC_6(VAR_3);
 int VAR_5 = FUNC_5(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 == 0) {
  VAR_6 = VAR_0;
  goto fail;
 }
 VAR_6 = FUNC_0(VAR_3, 0, 0);
 if (VAR_6 != 0)
  goto fail;

 FUNC_0(VAR_3, VAR_4->irq_rid, 0);

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6)
  goto fail;




 VAR_6 = FUNC_4(VAR_3, VAR_4->irq_res, VAR_1,
          ((void*)0), VAR_2, VAR_4, &VAR_4->irq_handle);
fail:
 if (VAR_6)
  FUNC_3(VAR_3);
 return (VAR_6);
}
