
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct mwl_hal_priv {scalar_t__ mh_SDRAMSIZE_Addr; scalar_t__* mh_cmdbuf; int mh_dev; } ;
struct mwl_hal {int dummy; } ;
struct firmware {int* data; int datasize; } ;


 int FUNC_0 (int) ;
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
 struct mwl_hal_priv* FUNC_1 (struct mwl_hal*) ;
 int FUNC_2 (struct mwl_hal_priv*,int ) ;
 int FUNC_3 (struct mwl_hal_priv*,int ,int) ;
 int FUNC_4 (int ,char*,char const*,...) ;
 struct firmware* FUNC_5 (char const*) ;
 int FUNC_6 (struct firmware const*,int ) ;
 int FUNC_7 (struct mwl_hal_priv*) ;
 int FUNC_8 (struct mwl_hal_priv*,scalar_t__) ;
 int FUNC_9 (struct mwl_hal_priv*) ;
 int FUNC_10 (struct mwl_hal_priv*,int,int const*,int) ;
 int FUNC_11 (struct mwl_hal_priv*,int const*,int) ;
 int FUNC_12 (struct mwl_hal_priv*) ;

int
FUNC_13(struct mwl_hal *VAR_20, void *VAR_21)
{
 struct mwl_hal_priv *VAR_22 = FUNC_1(VAR_20);
 const char *VAR_23 = "mw88W8363fw";
 const char *VAR_24 = "mwlboot";
 const struct firmware *VAR_25 = ((void*)0);
 const struct firmware *VAR_26;

 uint32_t VAR_27 = VAR_9;
 uint32_t VAR_28 = VAR_10;
 const uint8_t *VAR_29, *VAR_30;
 const uint8_t *VAR_31;
 uint32_t VAR_32, VAR_33, VAR_34;
 int VAR_35, VAR_36, VAR_37;

 VAR_26 = FUNC_5(VAR_23);
 if (VAR_26 == ((void*)0)) {
  FUNC_4(VAR_22->mh_dev,
      "could not load firmware image %s\n", VAR_23);
  return VAR_3;
 }
 VAR_31 = VAR_26->data;
 VAR_34 = VAR_26->datasize;
 if (VAR_34 < 4) {
  FUNC_4(VAR_22->mh_dev, "firmware image %s too small\n",
      VAR_23);
  VAR_36 = VAR_3;
  goto bad2;
 }
 if (VAR_31[0] == 0x01 && VAR_31[1] == 0x00 &&
     VAR_31[2] == 0x00 && VAR_31[3] == 0x00) {



  VAR_25 = FUNC_5(VAR_24);
  if (VAR_25 == ((void*)0)) {
   FUNC_4(VAR_22->mh_dev,
       "could not load firmware image %s\n", VAR_24);
   VAR_36 = VAR_3;
   goto bad2;
  }
 } else
  VAR_25 = ((void*)0);

 FUNC_7(VAR_22);

 FUNC_3(VAR_22, VAR_14, VAR_12);
 FUNC_3(VAR_22, VAR_13, 0x00);
 FUNC_3(VAR_22, VAR_15, 0x00);
 FUNC_3(VAR_22, VAR_16, VAR_12);
 if (VAR_22->mh_SDRAMSIZE_Addr != 0) {

  FUNC_8(VAR_22, VAR_22->mh_SDRAMSIZE_Addr);
 }
 FUNC_4(VAR_22->mh_dev, "load %s firmware image (%u bytes)\n",
     VAR_23, VAR_34);
 if (VAR_25 != ((void*)0)) {
  if (!FUNC_10(VAR_22, VAR_25->datasize, VAR_25->data, VAR_25->datasize) ||
      !FUNC_10(VAR_22, 0, ((void*)0), 0)) {
   VAR_36 = VAR_4;
   goto bad;
  }
  FUNC_0(200*VAR_6);
  if (VAR_22->mh_SDRAMSIZE_Addr != 0) {

   FUNC_8(VAR_22, VAR_22->mh_SDRAMSIZE_Addr);
  }
  VAR_33 = VAR_37 = 0;
  for (VAR_29 = VAR_31, VAR_30 = VAR_29 + VAR_34; VAR_29 < VAR_30; ) {
   FUNC_3(VAR_22, VAR_18, 0);
   VAR_32 = FUNC_2(VAR_22, VAR_19);
   if (VAR_32 == 0)
    break;
   if (VAR_32 > 0x00000c00) {
    VAR_36 = VAR_0;
    goto bad;
   }
   if ((VAR_32 & 0x1) == 0) {

    VAR_29 += VAR_33;
    VAR_37 = 0;
   } else {
    if (++VAR_37 > 2) {




     VAR_36 = VAR_2;
     goto bad;
    }

    VAR_32 &= ~0x1;
   }
   if (VAR_32 > VAR_30 - VAR_29) {

    VAR_32 = VAR_30 - VAR_29;
   }
   VAR_33 = VAR_32;
   if (!FUNC_11(VAR_22, VAR_29, VAR_33)) {
    VAR_36 = VAR_4;
    goto bad;
   }
  }
 } else {
  for (VAR_29 = VAR_31, VAR_30 = VAR_29 + VAR_34; VAR_29 < VAR_30;) {
   VAR_33 = VAR_30 - VAR_29;
   if (VAR_33 > VAR_7)
    VAR_33 = VAR_7;
   if (!FUNC_10(VAR_22, VAR_7, VAR_29, VAR_33)) {
    VAR_36 = VAR_1;
    goto bad;
   }
   VAR_29 += VAR_33;
  }
 }

 if (VAR_25 != ((void*)0))
  FUNC_6(VAR_25, VAR_5);
 FUNC_6(VAR_26, VAR_5);





 VAR_22->mh_cmdbuf[1] = 0;



 if (VAR_28 != VAR_11)
  FUNC_12(VAR_22);
 for (VAR_35 = 0; VAR_35 < VAR_8; VAR_35++) {
  FUNC_3(VAR_22, VAR_17, VAR_28);
  FUNC_0(VAR_6);
  if (FUNC_2(VAR_22, VAR_18) == VAR_27) {
   FUNC_3(VAR_22, VAR_18, 0x00);
   return FUNC_9(VAR_22);
  }
 }
 return VAR_4;
bad:
 FUNC_7(VAR_22);
bad2:

 if (VAR_25 != ((void*)0))
  FUNC_6(VAR_25, VAR_5);
 FUNC_6(VAR_26, VAR_5);
 return VAR_36;
}
