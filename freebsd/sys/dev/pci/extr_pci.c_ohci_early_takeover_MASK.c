
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
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
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct resource* FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (struct resource*,int ) ;
 int FUNC_4 (int ,int ,int,struct resource*) ;
 int FUNC_5 (struct resource*,int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_10)
{
 struct resource *VAR_11;
 uint32_t VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = FUNC_1(0);
 VAR_11 = FUNC_2(VAR_10, VAR_8, &VAR_13, VAR_7);
 if (VAR_11 == ((void*)0))
  return;

 VAR_12 = FUNC_3(VAR_11, VAR_2);
 if (VAR_12 & VAR_5) {
  if (VAR_9)
   FUNC_6("ohci early: "
       "SMM active, request owner change\n");
  FUNC_5(VAR_11, VAR_1, VAR_6);
  for (VAR_14 = 0; (VAR_14 < 100) && (VAR_12 & VAR_5); VAR_14++) {
   FUNC_0(1000);
   VAR_12 = FUNC_3(VAR_11, VAR_2);
  }
  if (VAR_12 & VAR_5) {
   if (VAR_9)
    FUNC_6("ohci early: "
        "SMM does not respond, resetting\n");
   FUNC_5(VAR_11, VAR_2, VAR_3);
  }

  FUNC_5(VAR_11, VAR_4, VAR_0);
 }

 FUNC_4(VAR_10, VAR_8, VAR_13, VAR_11);
}
