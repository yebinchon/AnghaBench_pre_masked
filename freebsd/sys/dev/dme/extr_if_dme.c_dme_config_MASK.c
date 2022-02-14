
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dme_softc {scalar_t__ dme_rev; int* dme_macaddr; int dme_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int) ;
 int FUNC_9 (struct dme_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct dme_softc *VAR_29)
{
 int VAR_30;


 FUNC_9(VAR_29, VAR_7, VAR_17);


 FUNC_9(VAR_29, VAR_5, 1);
 FUNC_9(VAR_29, VAR_6, 0);
 FUNC_9(VAR_29, VAR_10, VAR_22);

 FUNC_9(VAR_29, VAR_14, 0);

 FUNC_9(VAR_29, VAR_1, FUNC_0(3) | FUNC_1(0x0f));

 FUNC_9(VAR_29, VAR_4, FUNC_5(0x3) | FUNC_6(0x08));

 FUNC_9(VAR_29, VAR_3, 0xff);

 FUNC_9(VAR_29, VAR_13, 0);

 FUNC_9(VAR_29, VAR_11, VAR_25 | VAR_24 | VAR_23);

 FUNC_9(VAR_29, VAR_9, 0xff);

 for (VAR_30 = 0; VAR_30 < 8; VAR_30++)
  FUNC_9(VAR_29, FUNC_3(VAR_30), 0xff);

 for (VAR_30 = 0; VAR_30 < VAR_16; VAR_30++)
  FUNC_9(VAR_29, FUNC_4(VAR_30), VAR_29->dme_macaddr[VAR_30]);

 FUNC_9(VAR_29, VAR_12, VAR_27 | VAR_26 | VAR_28);


 FUNC_9(VAR_29, VAR_7, VAR_17 | VAR_18 | VAR_19);
}
