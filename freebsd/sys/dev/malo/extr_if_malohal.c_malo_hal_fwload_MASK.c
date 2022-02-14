
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct malo_hal {scalar_t__* mh_cmdbuf; int mh_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct malo_hal*) ;
 int FUNC_3 (struct malo_hal*,char*) ;
 int FUNC_4 (struct malo_hal*,char*) ;
 scalar_t__ FUNC_5 (struct malo_hal*,int ) ;
 int FUNC_6 (struct malo_hal*) ;
 int FUNC_7 (struct malo_hal*) ;
 int FUNC_8 (struct malo_hal*,int ,int) ;

int
FUNC_9(struct malo_hal *VAR_12, char *VAR_13, char *VAR_14)
{
 int VAR_15, VAR_16;
 uint32_t VAR_17, VAR_18;





 VAR_17 = VAR_4;
 VAR_18 = VAR_5;

 FUNC_2(VAR_12);

 FUNC_8(VAR_12, VAR_7,
     VAR_1);
 FUNC_8(VAR_12, VAR_6, 0x00);
 FUNC_8(VAR_12, VAR_8, 0x00);
 FUNC_8(VAR_12, VAR_9,
     VAR_1);

 VAR_15 = FUNC_3(VAR_12, VAR_13);
 if (VAR_15 != 0) {
  FUNC_1(VAR_12->mh_dev, "failed to load bootrom loader.\n");
  goto fail;
 }

 FUNC_0(200 * VAR_2);

 VAR_15 = FUNC_4(VAR_12, VAR_14);
 if (VAR_15 != 0) {
  FUNC_1(VAR_12->mh_dev, "failed to load firmware.\n");
  goto fail;
 }





 VAR_12->mh_cmdbuf[1] = 0;

 if (VAR_18 != VAR_5)
  FUNC_7(VAR_12);

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  FUNC_8(VAR_12, VAR_10, VAR_18);
  FUNC_0(VAR_2);
  if (FUNC_5(VAR_12, VAR_11) == VAR_17) {
   FUNC_8(VAR_12, VAR_11, 0x00);
   return FUNC_6(VAR_12);
  }
 }

 return VAR_0;
fail:
 FUNC_2(VAR_12);

 return (VAR_15);
}
