
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct resource* FUNC_6 (int ,int ,int*,int ) ;
 void* FUNC_7 (struct resource*,int ) ;
 int FUNC_8 (int ,int ,int,struct resource*) ;
 int FUNC_9 (struct resource*,scalar_t__,int ) ;
 void* FUNC_10 (int ,scalar_t__,int) ;
 int FUNC_11 (int ,scalar_t__,int,int) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(device_t VAR_9)
{
 struct resource *VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_16 = FUNC_5(0);
 VAR_10 = FUNC_6(VAR_9, VAR_7, &VAR_16, VAR_6);
 if (VAR_10 == ((void*)0))
  return;

 VAR_11 = FUNC_7(VAR_10, VAR_2);


 for (VAR_13 = FUNC_4(VAR_11); VAR_13 != 0;
     VAR_13 = FUNC_3(VAR_12)) {
  VAR_12 = FUNC_10(VAR_9, VAR_13, 4);
  if (FUNC_2(VAR_12) != VAR_1) {
   continue;
  }
  VAR_14 = FUNC_10(VAR_9, VAR_13 +
      VAR_3, 1);
  if (VAR_14 == 0) {
   continue;
  }
  if (VAR_8)
   FUNC_12("ehci early: "
       "SMM active, request owner change\n");

  FUNC_11(VAR_9, VAR_13 + VAR_4, 1, 1);

  for (VAR_17 = 0; (VAR_17 < 100) && (VAR_14 != 0); VAR_17++) {
   FUNC_0(1000);
   VAR_14 = FUNC_10(VAR_9, VAR_13 +
       VAR_3, 1);
  }

  if (VAR_14 != 0) {
   if (VAR_8)
    FUNC_12("ehci early: "
        "SMM does not respond\n");
  }

  VAR_15 = FUNC_1(FUNC_7(VAR_10, VAR_0));
  FUNC_9(VAR_10, VAR_15 + VAR_5, 0);
 }
 FUNC_8(VAR_9, VAR_7, VAR_16, VAR_10);
}
