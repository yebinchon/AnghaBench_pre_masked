
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wps ;
typedef int vhttxmcs ;
typedef int vhtrxmcs ;
typedef int vhtcap ;
typedef size_t u8 ;
typedef int u16 ;
typedef int txpow ;
struct wpabuf {int dummy; } ;
typedef int model_name ;
typedef int htmcs ;
typedef int htcap ;
typedef int htagg ;
typedef int extcap ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (size_t const*) ;
 int FUNC_1 (size_t const*) ;
 scalar_t__ FUNC_2 (size_t const*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (char*,int ,size_t const*,size_t) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int,char*,...) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (char*) ;
 size_t* FUNC_8 (struct wpabuf const*) ;
 size_t FUNC_9 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_10(char *VAR_8, size_t VAR_9, const struct wpabuf *VAR_10)
{
 char *VAR_11 = VAR_8;
 char *VAR_12 = VAR_8 + VAR_9;
 char VAR_13[7 + 4 + 1];
 char VAR_14[7 + 2 + 1];
 char VAR_15[7 + 8 + 1];
 char VAR_16[8 + 8 + 1];
 char VAR_17[10 + 8 + 1];
 char VAR_18[10 + 8 + 1];

 char VAR_19[8 + 2 * 254 + 1];

 char VAR_20[7 + 4 + 1];

 char VAR_21[32 + 5 + 1];

 int VAR_22 = 0;
 const u8 *VAR_23;
 size_t VAR_24;
 int VAR_25;

 FUNC_4(VAR_13, 0, sizeof(VAR_13));
 FUNC_4(VAR_14, 0, sizeof(VAR_14));
 FUNC_4(VAR_15, 0, sizeof(VAR_15));
 FUNC_4(VAR_16, 0, sizeof(VAR_16));
 FUNC_4(VAR_17, 0, sizeof(VAR_17));
 FUNC_4(VAR_18, 0, sizeof(VAR_18));
 FUNC_4(VAR_19, 0, sizeof(VAR_19));
 FUNC_4(VAR_20, 0, sizeof(VAR_20));
 FUNC_4(VAR_21, 0, sizeof(VAR_21));
 *VAR_11 = '\0';

 if (!VAR_10)
  return;
 VAR_23 = FUNC_8(VAR_10);
 VAR_24 = FUNC_9(VAR_10);

 while (VAR_24 >= 2) {
  u8 VAR_26, VAR_27;
  char *VAR_28 = (VAR_22++ == 0) ? "" : ",";

  VAR_26 = *VAR_23++;
  VAR_27 = *VAR_23++;
  VAR_24 -= 2;

  if (VAR_27 > VAR_24)
   break;

  if (VAR_26 == VAR_4 && VAR_27 >= 4) {

   if (FUNC_0(VAR_23) == VAR_6) {

    char VAR_29[32 + 1];
    const u8 *VAR_30 = &VAR_23[4];
    size_t VAR_31 = VAR_27 - 4;

    FUNC_4(VAR_29, 0, sizeof(VAR_29));
    if (FUNC_3(VAR_29, 32, VAR_30,
       VAR_31)) {
     FUNC_5(VAR_21, sizeof(VAR_21),
          ",wps:%s", VAR_29);
    }
   }

   VAR_25 = FUNC_5(VAR_11, VAR_12 - VAR_11,
       "%s%d(%02x%02x%02x,%d)",
       VAR_28, VAR_26, VAR_23[0], VAR_23[1], VAR_23[2], VAR_23[3]);
  } else {
   if (VAR_26 == VAR_2 && VAR_27 >= 2) {

    FUNC_5(VAR_13, sizeof(VAR_13),
         ",htcap:%04hx",
         FUNC_1(VAR_23));
   }
   if (VAR_26 == VAR_2 && VAR_27 >= 3) {


    FUNC_5(VAR_14, sizeof(VAR_14),
         ",htagg:%02hx", (u16) VAR_23[2]);
   }
   if (VAR_26 == VAR_2 && VAR_27 >= 7) {

    FUNC_5(VAR_15, sizeof(VAR_15),
         ",htmcs:%08hx",
         (u16) FUNC_2(VAR_23 + 3));
   }
   if (VAR_26 == VAR_5 && VAR_27 >= 4) {

    FUNC_5(VAR_16, sizeof(VAR_16),
         ",vhtcap:%08x",
         FUNC_2(VAR_23));
   }
   if (VAR_26 == VAR_5 && VAR_27 >= 8) {


    FUNC_5(VAR_17, sizeof(VAR_17),
         ",vhtrxmcs:%08x",
         FUNC_2(VAR_23 + 4));
   }
   if (VAR_26 == VAR_5 && VAR_27 >= 12) {


    FUNC_5(VAR_18, sizeof(VAR_18),
         ",vhttxmcs:%08x",
         FUNC_2(VAR_23 + 8));
   }
   if (VAR_26 == VAR_1) {

    int VAR_32;
    int VAR_33 = (VAR_27 < 254) ? VAR_27 :
     254;
    char *VAR_34 = VAR_19;

    VAR_34 += FUNC_5(VAR_19, sizeof(VAR_19),
       ",extcap:");
    for (VAR_32 = 0; VAR_32 < VAR_33; VAR_32++) {
     int VAR_35;

     VAR_35 = sizeof(VAR_19) -
      FUNC_7(VAR_19);
     if (VAR_35 <= 0)
      break;
     VAR_34 += FUNC_5(VAR_34, VAR_35, "%02x",
        *(VAR_23 + VAR_32));
    }
   }
   if (VAR_26 == VAR_3 && VAR_27 == 2) {

    FUNC_5(VAR_20, sizeof(VAR_20),
         ",txpow:%04hx",
         FUNC_1(VAR_23));
   }

   VAR_25 = FUNC_5(VAR_11, VAR_12 - VAR_11, "%s%d", VAR_28, VAR_26);
  }
  if (FUNC_6(VAR_12 - VAR_11, VAR_25))
   goto fail;
  VAR_11 += VAR_25;

  VAR_23 += VAR_27;
  VAR_24 -= VAR_27;
 }

 VAR_25 = FUNC_5(VAR_11, VAR_12 - VAR_11, "%s%s%s%s%s%s%s%s%s",
     VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
     VAR_20, VAR_19, VAR_21);
 if (FUNC_6(VAR_12 - VAR_11, VAR_25)) {
 fail:
  VAR_8[0] = '\0';
 }
}
