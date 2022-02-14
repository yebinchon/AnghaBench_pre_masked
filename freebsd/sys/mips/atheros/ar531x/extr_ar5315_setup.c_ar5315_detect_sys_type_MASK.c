
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct ar531x_boarddata {scalar_t__ major; } ;


 int FUNC_0 (scalar_t__) ;



 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int ,char*,char*,scalar_t__) ;

void
FUNC_5(void)
{
 char *VAR_21 = "????";
 uint32_t VAR_22 = 0;
 uint32_t VAR_23 = 0;
 int VAR_24;




 VAR_24 = VAR_15;


 if(VAR_24 == VAR_15) {
  VAR_18 = &VAR_17;

  VAR_22 = FUNC_2(VAR_4 +
   VAR_5);

  switch (VAR_22) {
  case 0x86:
   VAR_20 = VAR_10;
   VAR_21 = "2315";
   break;
  case 0x87:
   VAR_20 = VAR_11;
   VAR_21 = "2316";
   break;
  case 0x90:
   VAR_20 = VAR_12;
   VAR_21 = "2317";
   break;
  case 0x91:
   VAR_20 = VAR_13;
   VAR_21 = "2318";
   break;
  }
 } else {
  VAR_18 = &VAR_16;

  VAR_22 = FUNC_2(VAR_0 +
   VAR_1);
  VAR_23 = FUNC_1(VAR_22);

  switch (FUNC_0(VAR_22)) {
  case 129:
   VAR_20 = VAR_7;
   VAR_21 = "5311";
   break;
  case 128:
   VAR_20 = VAR_8;
   VAR_21 = "5312";
   break;
  case 130:
   VAR_20 = VAR_9;
   VAR_21 = "2313";
   break;
  }
 }

 FUNC_4(VAR_19, "Atheros AR%s rev %u", VAR_21, VAR_23);
}
