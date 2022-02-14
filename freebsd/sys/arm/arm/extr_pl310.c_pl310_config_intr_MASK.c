
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl310_softc {int * sc_ich; int sc_irq_h; int sc_irq_res; int sc_dev; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,int,int ,int *,struct pl310_softc*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_16 ;
 int FUNC_3 (struct pl310_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_17)
{
 struct pl310_softc * VAR_18;

 VAR_18 = VAR_17;


 FUNC_0(VAR_18->sc_dev, VAR_18->sc_irq_res, VAR_9 | VAR_8,
     VAR_16, ((void*)0), VAR_18, &VAR_18->sc_irq_h);


 FUNC_3(VAR_18, VAR_11,
     VAR_2 | VAR_0);

 FUNC_3(VAR_18, VAR_12,
     VAR_2 | VAR_1);


 FUNC_3(VAR_18, VAR_14, VAR_7);
 FUNC_3(VAR_18, VAR_15, VAR_6);


 FUNC_3(VAR_18, VAR_13,
     VAR_5 |
     VAR_3 |
     VAR_4);

 FUNC_1(VAR_18->sc_ich);
 FUNC_2(VAR_18->sc_ich, VAR_10);
 VAR_18->sc_ich = ((void*)0);
}
