
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct resource* FUNC_5 (int ,int ,int*,int ) ;
 int FUNC_6 (struct resource*,scalar_t__) ;
 int FUNC_7 (struct resource*,int) ;
 int FUNC_8 (int ,int ,int,struct resource*) ;
 int FUNC_9 (struct resource*,scalar_t__,int) ;
 int FUNC_10 (struct resource*,scalar_t__,int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(device_t VAR_10)
{
 struct resource *VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;
 uint8_t VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_17 = FUNC_1(0);
 VAR_11 = FUNC_5(VAR_10, VAR_1, &VAR_17, VAR_0);
 if (VAR_11 == ((void*)0))
  return;

 VAR_12 = FUNC_7(VAR_11, VAR_3);

 VAR_13 = -1;


 for (VAR_14 = FUNC_2(VAR_12) << 2; VAR_14 != 0 && FUNC_4(VAR_13);
     VAR_14 += FUNC_4(VAR_13) << 2) {
  VAR_13 = FUNC_7(VAR_11, VAR_14);

  if (FUNC_3(VAR_13) != VAR_4)
   continue;

  VAR_15 = FUNC_6(VAR_11, VAR_14 + VAR_7);
  if (VAR_15 == 0)
   continue;

  if (VAR_9)
   FUNC_11("xhci early: "
       "SMM active, request owner change\n");

  FUNC_9(VAR_11, VAR_14 + VAR_8, 1);



  for (VAR_18 = 0; (VAR_18 < 5000) && (VAR_15 != 0); VAR_18++) {
   FUNC_0(1000);
   VAR_15 = FUNC_6(VAR_11, VAR_14 +
       VAR_7);
  }

  if (VAR_15 != 0) {
   if (VAR_9)
    FUNC_11("xhci early: "
        "SMM does not respond\n");
  }


  VAR_16 = FUNC_6(VAR_11, VAR_2);
  FUNC_10(VAR_11, VAR_16 + VAR_5, 0);
  FUNC_7(VAR_11, VAR_16 + VAR_6);
 }
 FUNC_8(VAR_10, VAR_1, VAR_17, VAR_11);
}
