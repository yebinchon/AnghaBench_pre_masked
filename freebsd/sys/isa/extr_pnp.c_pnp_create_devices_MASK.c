
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint32_t ;
typedef int u_char ;
struct pnp_set_config_arg {int csn; int ldn; } ;
struct TYPE_3__ {int serial; int vendor_id; } ;
typedef TYPE_1__ pnp_id ;
typedef scalar_t__ device_t ;
typedef int buf ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,struct pnp_set_config_arg*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

 scalar_t__ VAR_6 ;

 int FUNC_6 (int*,char*,int) ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__,char) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (scalar_t__,int ) ;
 struct pnp_set_config_arg* FUNC_15 (int,int ,int ) ;
 int FUNC_16 (int ,char,int,int *) ;
 char* FUNC_17 (char) ;
 int FUNC_18 (scalar_t__,int*,int,int) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_19(device_t VAR_8, pnp_id *VAR_9, int VAR_10,
    u_char *VAR_11, int VAR_12)
{
 u_char VAR_13, *VAR_14, *VAR_15, *VAR_16 = ((void*)0);
 int VAR_17, VAR_18 = VAR_12, VAR_19 = VAR_0;
 uint32_t VAR_20;
 device_t VAR_21 = 0;
 int VAR_22 = 0;
 struct pnp_set_config_arg *VAR_23;
 char VAR_24[100];
 char *VAR_25 = ((void*)0);

 VAR_14 = VAR_11;
 while (VAR_18 > 0) {
  VAR_13 = *VAR_14++;
  VAR_18--;
  if (FUNC_3(VAR_13) != 0) {

   if (VAR_18 < 2) {
    VAR_18 = 0;
    continue;
   }
   VAR_17 = VAR_14[0] + (VAR_14[1] << 8);
   VAR_14 += 2;

   if (VAR_18 < VAR_17) {
    VAR_18 = 0;
    continue;
   }
   VAR_15 = VAR_14;
   VAR_14 += VAR_17;
   VAR_18 -= VAR_17;

   if (FUNC_2(VAR_13) == VAR_6) {
    if (VAR_21) {





     continue;
    }

    if (VAR_17 > sizeof(VAR_24) - 1)
     VAR_17 = sizeof(VAR_24) - 1;
    FUNC_6(VAR_15, VAR_24, VAR_17);




    while (VAR_24[VAR_17-1] == ' ')
     VAR_17--;
    VAR_24[VAR_17] = '\0';
    VAR_25 = VAR_24;
    continue;
   }

   continue;
  }


  if (VAR_18 < FUNC_4(VAR_13)) {
   VAR_18 = 0;
   continue;
  }
  VAR_15 = VAR_14;
  VAR_14 += FUNC_4(VAR_13);
  VAR_18 -= FUNC_4(VAR_13);

  switch (FUNC_5(VAR_13)) {
  case 128:




   if (VAR_16) {
    FUNC_18(VAR_21, VAR_16,
        VAR_15 - VAR_16 - 1, VAR_22);
    VAR_21 = 0;
    VAR_16 = ((void*)0);
   }





   FUNC_6(VAR_15, &VAR_20, 4);
   FUNC_16(VAR_9->vendor_id, VAR_20, VAR_22, ((void*)0));
   VAR_21 = FUNC_0(VAR_8, VAR_3, ((void*)0), -1);
   if (VAR_25)
    FUNC_8(VAR_21, VAR_25);
   else
    FUNC_8(VAR_21,
        FUNC_17(VAR_20));
   FUNC_14(VAR_21, VAR_9->vendor_id);
   FUNC_13(VAR_21, VAR_9->serial);
   FUNC_10(VAR_21, VAR_20);
   FUNC_9(VAR_21,
       VAR_1 | VAR_2);
   VAR_23 = FUNC_15(sizeof *VAR_23, VAR_4, VAR_5);
   if (!VAR_23) {
    FUNC_7(VAR_8, "out of memory\n");
    VAR_18 = 0;
    break;
   }
   VAR_23->csn = VAR_10;
   VAR_23->ldn = VAR_22;
   FUNC_1(VAR_8, VAR_21, VAR_7,
       VAR_23);
   FUNC_11(VAR_21, VAR_10);
   FUNC_12(VAR_21, VAR_22);
   VAR_22++;
   VAR_16 = VAR_14;
   break;

  case 129:
   if (!VAR_16) {
    FUNC_7(VAR_8, "malformed resources\n");
    VAR_18 = 0;
    break;
   }
   FUNC_18(VAR_21, VAR_16,
       VAR_15 - VAR_16 - 1, VAR_22);
   VAR_21 = 0;
   VAR_16 = ((void*)0);
   VAR_18 = 0;
   break;

  default:

   break;
  }
 }

 return (VAR_19);
}
