
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int rrset_ns ;
typedef int res_state ;
typedef int ns_sect ;
typedef int ns_rr ;
typedef int ns_msg ;
typedef scalar_t__ ns_class ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char const*,scalar_t__,scalar_t__,int *,int *) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ,int const*,char*,size_t) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int *,int,int,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_11 (int ) ;
 char* FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;

 int VAR_9 ;

 int FUNC_15 (char const*,char const*) ;
 int FUNC_16 (char const*,char const*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int,int ) ;
 scalar_t__ FUNC_19 (int ,int *,int,char*,scalar_t__,int,int *) ;
 int FUNC_20 (char*,char const*) ;
 int FUNC_21 (char const*) ;

__attribute__((used)) static int
FUNC_22(res_state VAR_13, const char *VAR_14, ns_class VAR_15, int VAR_16,
 char *VAR_17, size_t VAR_18, char *VAR_19, size_t VAR_20,
 rrset_ns *VAR_21)
{
 char VAR_22[VAR_3];
 u_char *VAR_23 = ((void*)0);
 int VAR_24, VAR_25, VAR_26, VAR_27;
 ns_sect VAR_28;
 ns_msg VAR_29;
 u_int VAR_30;






 if (FUNC_5(VAR_14, VAR_22, sizeof VAR_22) < 0)
  goto cleanup;
 VAR_14 = VAR_22;

 VAR_23 = FUNC_4(VAR_4);
 if (VAR_23 == ((void*)0))
  goto cleanup;


 for (;;) {

  while (*VAR_14 == '.')
   VAR_14++;


  VAR_24 = FUNC_2(VAR_13, VAR_14, VAR_15, VAR_12, VAR_23, &VAR_29);
  if (VAR_24 < 0) {
   FUNC_0(("get_soa: do_query('%s', %s) failed (%d)",
     VAR_14, FUNC_17(VAR_15), VAR_24));
   goto cleanup;
  }
  if (VAR_24 > 0) {
   FUNC_0(("get_soa: CNAME or DNAME found"));
   VAR_28 = VAR_9, VAR_24 = 0;
  } else {
   VAR_30 = FUNC_8(VAR_29, VAR_6);
   VAR_26 = FUNC_6(VAR_29, 129);
   VAR_27 = FUNC_6(VAR_29, 128);
   if (VAR_26 > 0 && VAR_30 == VAR_8)
    VAR_28 = 129, VAR_24 = VAR_26;
   else if (VAR_27 > 0)
    VAR_28 = 128, VAR_24 = VAR_27;
   else
    VAR_28 = VAR_9, VAR_24 = 0;
  }
  for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) {
   const char *VAR_31;
   const u_char *VAR_32;
   ns_rr VAR_33;

   if (FUNC_10(&VAR_29, VAR_28, VAR_25, &VAR_33) < 0) {
    FUNC_0(("get_soa: ns_parserr(%s, %d) failed",
      FUNC_18(VAR_28, VAR_7), VAR_25));
    goto cleanup;
   }
   if (FUNC_14(VAR_33) == VAR_10 ||
       FUNC_14(VAR_33) == VAR_11)
    break;
   if (FUNC_14(VAR_33) != VAR_12 ||
       FUNC_11(VAR_33) != VAR_15)
    continue;
   VAR_31 = FUNC_12(VAR_33);
   switch (VAR_28) {
   case 129:
    if (FUNC_15(VAR_14, VAR_31) == 0) {
     FUNC_0(
        ("get_soa: ns_samedomain('%s', '%s') == 0",
      VAR_14, VAR_31)
      );
     VAR_5 = VAR_2;
     goto cleanup;
    }
    break;
   case 128:
    if (FUNC_16(VAR_14, VAR_31) == 1 ||
        FUNC_15(VAR_14, VAR_31) == 0) {
     FUNC_0(
         ("get_soa: ns_samename() || !ns_samedomain('%s', '%s')",
      VAR_14, VAR_31)
      );
     VAR_5 = VAR_2;
     goto cleanup;
    }
    break;
   default:
    FUNC_1();
   }
   if (FUNC_21(VAR_31) + 1 > VAR_18) {
    FUNC_0(("get_soa: zname(%lu) too small (%lu)",
      (unsigned long)VAR_18,
      (unsigned long)FUNC_21(VAR_31) + 1));
    VAR_5 = VAR_1;
    goto cleanup;
   }
   FUNC_20(VAR_17, VAR_31);
   VAR_32 = FUNC_13(VAR_33);
   if (FUNC_9(VAR_23, FUNC_7(VAR_29), VAR_32,
            VAR_19, VAR_20) < 0) {
    FUNC_0(("get_soa: ns_name_uncompress failed")
     );
    goto cleanup;
   }
   if (FUNC_19(VAR_13, &VAR_29, 128,
        VAR_17, VAR_15, VAR_16, VAR_21) < 0) {
    FUNC_0(("get_soa: save_ns failed"));
    goto cleanup;
   }
   FUNC_3(VAR_23);
   return (0);
  }


  if (*VAR_14 == '\0')
   break;


  while (*VAR_14 != '.') {
   if (*VAR_14 == '\\')
    if (*++VAR_14 == '\0') {
     VAR_5 = VAR_1;
     goto cleanup;
    }
   VAR_14++;
  }
 }
 FUNC_0(("get_soa: out of labels"));
 VAR_5 = VAR_0;
 cleanup:
 if (VAR_23 != ((void*)0))
  FUNC_3(VAR_23);
 return (-1);
}
