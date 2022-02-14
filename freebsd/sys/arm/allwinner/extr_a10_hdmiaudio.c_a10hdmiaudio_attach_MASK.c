
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a10hdmiaudio_info {int lock; int dmat; int dmasize; int dev; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct a10hdmiaudio_info*,int ) ;
 struct a10hdmiaudio_info* FUNC_5 (int,int ,int) ;
 scalar_t__ FUNC_6 (int ,int *,struct a10hdmiaudio_info*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *,struct a10hdmiaudio_info*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,struct a10hdmiaudio_info*,int,int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_14)
{
 struct a10hdmiaudio_info *VAR_15;
 char VAR_16[VAR_11];
 int VAR_17;

 VAR_15 = FUNC_5(sizeof(*VAR_15), VAR_5, VAR_6 | VAR_7);
 VAR_15->dev = VAR_14;
 VAR_15->lock = FUNC_14(FUNC_2(VAR_14), "a10hdmiaudio softc");

 VAR_15->dmasize = FUNC_9(VAR_14, VAR_4,
     VAR_2, VAR_3);
 VAR_17 = FUNC_0(
     FUNC_1(VAR_14),
     4, VAR_15->dmasize,
     VAR_1,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_15->dmasize, 1,
     VAR_15->dmasize, 0,
     ((void*)0), ((void*)0),
     &VAR_15->dmat);
 if (VAR_17 != 0) {
  FUNC_3(VAR_14, "cannot create DMA tag\n");
  goto fail;
 }

 if (FUNC_6(VAR_14, &VAR_13, VAR_15)) {
  FUNC_3(VAR_14, "mixer_init failed\n");
  goto fail;
 }

 FUNC_12(VAR_14, FUNC_10(VAR_14) | VAR_9);
 FUNC_12(VAR_14, FUNC_10(VAR_14) | VAR_10);

 if (FUNC_11(VAR_14, VAR_15, 1, 0)) {
  FUNC_3(VAR_14, "pcm_register failed\n");
  goto fail;
 }

 FUNC_8(VAR_14, VAR_8, &VAR_12, VAR_15);

 FUNC_16(VAR_16, VAR_11, "at %s", FUNC_7(VAR_14));
 FUNC_13(VAR_14, VAR_16);

 return (0);

fail:
 FUNC_15(VAR_15->lock);
 FUNC_4(VAR_15, VAR_5);

 return (VAR_17);
}
