
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
typedef TYPE_1__* res_state ;
typedef scalar_t__ ns_sect ;
typedef int ns_rr ;
typedef scalar_t__ ns_opcode ;
typedef int ns_msg ;
struct TYPE_3__ {int pfcode; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int const) ;
 char* FUNC_6 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *,scalar_t__,int,int *) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (int ) ;
 int* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_15 (int *,int *,int *,int *,char*,int) ;
 scalar_t__ VAR_8 ;
 char* FUNC_16 (int) ;
 char* FUNC_17 (scalar_t__,scalar_t__) ;
 char* FUNC_18 (scalar_t__) ;
 int FUNC_19 (char,int *) ;
 char* FUNC_20 (scalar_t__) ;

__attribute__((used)) static void
FUNC_21(const res_state VAR_9,
    ns_msg *VAR_10, ns_sect VAR_11,
    int VAR_12, FILE *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 static int VAR_17 = 2048;
 char *VAR_18;
 ns_opcode VAR_19;
 ns_rr VAR_20;




 VAR_15 = (VAR_9->pfcode & VAR_12);
 if (VAR_9->pfcode && !VAR_15)
  return;

 VAR_18 = FUNC_6(VAR_17);
 if (VAR_18 == ((void*)0)) {
  FUNC_1(VAR_13, ";; memory allocation failure\n");
  return;
 }

 VAR_19 = (ns_opcode) FUNC_7(*VAR_10, VAR_5);
 VAR_16 = 0;
 for (;;) {
  if (FUNC_8(VAR_10, VAR_11, VAR_16, &VAR_20)) {
   if (VAR_4 != VAR_0)
    FUNC_1(VAR_13, ";; ns_parserr: %s\n",
     FUNC_20(VAR_4));
   else if (VAR_16 > 0 && VAR_15 != 0 &&
     (VAR_9->pfcode & VAR_3))
    FUNC_19('\n', VAR_13);
   goto cleanup;
  }
  if (VAR_16 == 0 && VAR_15 != 0 && (VAR_9->pfcode & VAR_3))
   FUNC_1(VAR_13, ";; %s SECTION:\n",
    FUNC_17(VAR_11, VAR_19));
  if (VAR_11 == VAR_7)
   FUNC_1(VAR_13, ";;\t%s, type = %s, class = %s\n",
    FUNC_10(VAR_20),
    FUNC_18(FUNC_14(VAR_20)),
    FUNC_16(FUNC_9(VAR_20)));
  else if (VAR_11 == VAR_6 && FUNC_14(VAR_20) == VAR_8) {
   u_int16_t VAR_21, VAR_22, VAR_23 = FUNC_12(VAR_20);
   u_int32_t VAR_24 = FUNC_13(VAR_20);

   FUNC_1(VAR_13,
    "; EDNS: version: %u, udp=%u, flags=%04x\n",
    (VAR_24>>16)&0xff, FUNC_9(VAR_20), VAR_24&0xffff);

   while (VAR_23 >= 4) {
    const u_char *VAR_25 = FUNC_11(VAR_20);
    int VAR_26;

    FUNC_0(VAR_21, VAR_25);
    FUNC_0(VAR_22, VAR_25);

    if (VAR_21 == VAR_2) {
     FUNC_3("; NSID: ", VAR_13);
     if (VAR_22 == 0) {
      FUNC_3("; NSID\n", VAR_13);
     } else {
      FUNC_3("; NSID: ", VAR_13);
      for (VAR_26 = 0; VAR_26 < VAR_22; VAR_26++)
       FUNC_1(VAR_13, "%02x ",
        VAR_25[VAR_26]);
      FUNC_3(" (",VAR_13);
      for (VAR_26 = 0; VAR_26 < VAR_22; VAR_26++)
       FUNC_1(VAR_13, "%c",
        FUNC_5(VAR_25[VAR_26])?
        VAR_25[VAR_26] : '.');
      FUNC_3(")\n", VAR_13);
     }
    } else {
     if (VAR_22 == 0) {
      FUNC_1(VAR_13, "; OPT=%u\n",
       VAR_21);
     } else {
      FUNC_1(VAR_13, "; OPT=%u: ",
       VAR_21);
      for (VAR_26 = 0; VAR_26 < VAR_22; VAR_26++)
       FUNC_1(VAR_13, "%02x ",
        VAR_25[VAR_26]);
      FUNC_3(" (",VAR_13);
      for (VAR_26 = 0; VAR_26 < VAR_22; VAR_26++)
       FUNC_1(VAR_13, "%c",
        FUNC_5(VAR_25[VAR_26]) ?
         VAR_25[VAR_26] : '.');
      FUNC_3(")\n", VAR_13);
     }
    }
    VAR_23 -= 4 + VAR_22;
   }
  } else {
   VAR_14 = FUNC_15(VAR_10, &VAR_20, ((void*)0), ((void*)0),
     VAR_18, VAR_17);
   if (VAR_14 < 0) {
    if (VAR_4 == VAR_1) {
     FUNC_4(VAR_18);
     VAR_18 = ((void*)0);
     if (VAR_17 < 131072)
      VAR_18 = FUNC_6(VAR_17 += 1024);
     if (VAR_18 == ((void*)0)) {
      FUNC_1(VAR_13,
           ";; memory allocation failure\n");
           return;
     }
     continue;
    }
    FUNC_1(VAR_13, ";; ns_sprintrr: %s\n",
     FUNC_20(VAR_4));
    goto cleanup;
   }
   FUNC_3(VAR_18, VAR_13);
   FUNC_2('\n', VAR_13);
  }
  VAR_16++;
 }
 cleanup:
 if (VAR_18 != ((void*)0))
  FUNC_4(VAR_18);
}
