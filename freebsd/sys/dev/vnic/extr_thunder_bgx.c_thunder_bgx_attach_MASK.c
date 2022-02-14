
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct lmac {struct bgx* bgx; } ;
struct bgx {int bgx_id; scalar_t__ lmac_count; int * reg_base; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bgx*) ;
 int FUNC_2 (struct bgx*) ;
 int FUNC_3 (struct bgx*) ;
 int FUNC_4 (struct bgx*,scalar_t__) ;
 struct bgx** VAR_10 ;
 int * FUNC_5 (int ,int ,int*,int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 struct lmac* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct bgx*,int ) ;
 struct bgx* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_11)
{
 struct bgx *VAR_12;
 uint8_t VAR_13;
 int VAR_14;
 int VAR_15;
 struct lmac *VAR_16;

 VAR_12 = FUNC_10(sizeof(*VAR_12), VAR_4, (VAR_5 | VAR_6));
 VAR_12->dev = VAR_11;

 VAR_16 = FUNC_7(VAR_11);
 VAR_16->bgx = VAR_12;

 FUNC_13(VAR_11);

 VAR_15 = FUNC_0(VAR_7);
 VAR_12->reg_base = FUNC_5(VAR_11, VAR_9, &VAR_15,
     VAR_8);
 if (VAR_12->reg_base == ((void*)0)) {
  FUNC_8(VAR_11, "Could not allocate CSR memory space\n");
  VAR_14 = VAR_2;
  goto err_disable_device;
 }

 VAR_12->bgx_id = (FUNC_15(VAR_12->reg_base) >> VAR_1) &
     VAR_0;
 VAR_12->bgx_id += FUNC_11(VAR_12->reg_base) * VAR_3;

 VAR_10[VAR_12->bgx_id] = VAR_12;
 FUNC_1(VAR_12);

 VAR_14 = FUNC_3(VAR_12);
 if (VAR_14 != 0)
  goto err_free_res;

 FUNC_2(VAR_12);


 for (VAR_13 = 0; VAR_13 < VAR_12->lmac_count; VAR_13++) {
  VAR_14 = FUNC_4(VAR_12, VAR_13);
  if (VAR_14) {
   FUNC_8(VAR_11, "BGX%d failed to enable lmac%d\n",
    VAR_12->bgx_id, VAR_13);
   goto err_free_res;
  }
 }

 return (0);

err_free_res:
 VAR_10[VAR_12->bgx_id] = ((void*)0);
 FUNC_6(VAR_11, VAR_9,
     FUNC_14(VAR_12->reg_base), VAR_12->reg_base);
err_disable_device:
 FUNC_9(VAR_12, VAR_4);
 FUNC_12(VAR_11);

 return (VAR_14);
}
