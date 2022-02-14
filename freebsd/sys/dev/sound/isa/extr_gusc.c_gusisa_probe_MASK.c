
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sndcard_func {int func; } ;
struct resource {int dummy; } ;
typedef int device_t ;


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
 struct resource* FUNC_1 (int ,int ,int*,int,int,int,int ) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 int FUNC_3 (int ,int ,int,int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,struct sndcard_func*) ;
 int FUNC_8 (int ) ;
 struct sndcard_func* FUNC_9 (int,int ,int) ;
 unsigned char FUNC_10 (struct resource*,int) ;
 int FUNC_11 (struct resource*,int,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_12)
{
 device_t VAR_13;
 struct resource *VAR_14, *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 unsigned char VAR_21;

 VAR_16 = FUNC_8(VAR_12);
 VAR_20 = FUNC_5(VAR_12);
 VAR_17 = 1;
 VAR_14 = FUNC_1(VAR_12, VAR_11, &VAR_17, VAR_16 + 0x100,
     VAR_16 + 0x107, 8, VAR_7);

 if (VAR_14 == ((void*)0))
  return VAR_3;

 VAR_15 = ((void*)0);






 FUNC_11(VAR_14, 3, 0x4c);
 FUNC_11(VAR_14, 5, 0);
 FUNC_0(30 * 1000);

 FUNC_11(VAR_14, 3, 0x4c);
 FUNC_11(VAR_14, 5, 1);
 FUNC_0(30 * 1000);

 VAR_19 = FUNC_13();



 FUNC_11(VAR_14, 3, 0x43);
 FUNC_11(VAR_14, 4, 0);
 FUNC_11(VAR_14, 5, 0);

 FUNC_11(VAR_14, 3, 0x44);
 FUNC_11(VAR_14, 4, 0);
 FUNC_11(VAR_14, 7, 0x55);



 FUNC_11(VAR_14, 3, 0x43);
 FUNC_11(VAR_14, 4, 0);
 FUNC_11(VAR_14, 5, 0);

 FUNC_11(VAR_14, 3, 0x44);
 FUNC_11(VAR_14, 4, 0);
 VAR_21 = FUNC_10(VAR_14, 7);

 FUNC_14(VAR_19);

 if (VAR_21 != 0x55)
  goto fail;

 VAR_18 = 0;
 VAR_15 = FUNC_1(VAR_12, VAR_11, &VAR_18, VAR_16, VAR_16, 1,
      VAR_7);

 if (VAR_15 == ((void*)0))
  goto fail;

 VAR_19 = FUNC_13();
 FUNC_11(VAR_15, 0x0f, 0x20);
 VAR_21 = FUNC_10(VAR_15, 0x0f);
 FUNC_14(VAR_19);

 if (VAR_21 == 0xff || (VAR_21 & 0x06) == 0)
  VAR_21 = 0;
 else {
  VAR_21 = FUNC_10(VAR_15, 0x506);
  if (VAR_21 == 0xff)
   VAR_21 = 0;
 }

 FUNC_2(VAR_12, VAR_11, VAR_18, VAR_15);
 FUNC_2(VAR_12, VAR_11, VAR_17, VAR_14);

 if (VAR_21 >= 10) {
  struct sndcard_func *VAR_22;



  FUNC_3(VAR_12, VAR_11, 2, VAR_16 + 0x10c, 8);

  if (VAR_20 & VAR_1)
   FUNC_3(VAR_12, VAR_10, 1,
      VAR_20 & VAR_0, 1);



  VAR_22 = FUNC_9(sizeof(struct sndcard_func), VAR_4, VAR_5 | VAR_6);
  if (VAR_22 == ((void*)0))
   return VAR_2;
  VAR_22->func = VAR_8;
  VAR_13 = FUNC_4(VAR_12, "midi", -1);
  FUNC_7(VAR_13, VAR_22);

  VAR_22 = FUNC_9(sizeof(struct sndcard_func), VAR_4, VAR_5 | VAR_6);
  if (VAR_22 == ((void*)0))
   FUNC_12("xxx: gus pcm not attached, out of memory\n");
  else {
   VAR_22->func = VAR_9;
   VAR_13 = FUNC_4(VAR_12, "pcm", -1);
   FUNC_7(VAR_13, VAR_22);
  }
  FUNC_6(VAR_12, "Gravis UltraSound MAX");
  return 0;
 } else {





  return VAR_3;
 }

fail:
 FUNC_2(VAR_12, VAR_11, VAR_17, VAR_14);
 return VAR_3;
}
