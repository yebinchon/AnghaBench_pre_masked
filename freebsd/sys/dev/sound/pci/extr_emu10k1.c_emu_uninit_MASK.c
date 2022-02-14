
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {int silent_map; int silent_page; int ptb_map; int ptb_pages; int blocks; } ;
struct sc_info {scalar_t__ mpu; TYPE_1__ mem; int dev; scalar_t__ audigy; } ;


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
 int VAR_16 ;
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
 scalar_t__ VAR_28 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sc_info*,int ,int ) ;
 int FUNC_3 (struct sc_info*,int ,int,int) ;
 int FUNC_4 (struct sc_info*,scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct sc_info *VAR_29)
{
 u_int32_t VAR_30;

 FUNC_3(VAR_29, VAR_18, 0, 4);
 for (VAR_30 = 0; VAR_30 < VAR_28; VAR_30++)
  FUNC_4(VAR_29, VAR_30, VAR_6, VAR_27);
 for (VAR_30 = 0; VAR_30 < VAR_28; VAR_30++) {
  FUNC_4(VAR_29, VAR_30, VAR_8, 0);
  FUNC_4(VAR_29, VAR_30, VAR_5, 0);
  FUNC_4(VAR_29, VAR_30, VAR_7, 0);
  FUNC_4(VAR_29, VAR_30, VAR_4, 0);
 }

 if (VAR_29->audigy) {
  FUNC_4(VAR_29, 0, VAR_2, VAR_3);
 }


 FUNC_3(VAR_29, VAR_14,
     VAR_15 | VAR_16 | VAR_17,
     4);

 FUNC_4(VAR_29, 0, VAR_21, 0);

 FUNC_4(VAR_29, 0, VAR_20, VAR_22);
 FUNC_4(VAR_29, 0, VAR_19, 0);
 FUNC_4(VAR_29, 0, VAR_12, VAR_22);
 FUNC_4(VAR_29, 0, VAR_11, 0);
 FUNC_4(VAR_29, 0, VAR_13, 0);
 FUNC_4(VAR_29, 0, VAR_1, VAR_22);
 FUNC_4(VAR_29, 0, VAR_0, 0);
 FUNC_4(VAR_29, 0, VAR_25, 0);
 FUNC_4(VAR_29, 0, VAR_26, 0);


 FUNC_4(VAR_29, 0, VAR_10, 0);
 FUNC_4(VAR_29, 0, VAR_9, 0);
 FUNC_4(VAR_29, 0, VAR_24, 0);
 FUNC_4(VAR_29, 0, VAR_23, 0);


 if (!FUNC_0(&VAR_29->mem.blocks))
  FUNC_1(VAR_29->dev, "warning: memblock list not empty\n");
 FUNC_2(VAR_29, VAR_29->mem.ptb_pages, VAR_29->mem.ptb_map);
 FUNC_2(VAR_29, VAR_29->mem.silent_page, VAR_29->mem.silent_map);

 if(VAR_29->mpu)
     FUNC_5(VAR_29->mpu);
 return 0;
}
