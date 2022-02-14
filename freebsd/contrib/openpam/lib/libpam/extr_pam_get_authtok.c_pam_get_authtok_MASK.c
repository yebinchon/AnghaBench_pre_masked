
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;

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
 int FUNC_2 (int) ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 void* FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,char*,size_t*,char const*) ;
 int FUNC_5 (int *,int,void const**) ;
 int FUNC_6 (int *,int,char**,char*,char const*) ;
 int FUNC_7 (int *,int,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int ,int ) ;

int
FUNC_10(pam_handle_t *VAR_15,
 int VAR_16,
 const char **VAR_17,
 const char *VAR_18)
{
 char VAR_19[1024];
 size_t VAR_20;
 const void *VAR_21, *VAR_22, *VAR_23;
 const char *VAR_24, *VAR_25;
 const void *VAR_26, *VAR_27;
 char *VAR_28, *VAR_29;
 int VAR_30, VAR_31, VAR_32, VAR_33;

 FUNC_0();
 *VAR_17 = ((void*)0);
 VAR_33 = 0;
 switch (VAR_16) {
 case 129:
  VAR_30 = VAR_0;
  VAR_24 = "authtok_prompt";
  VAR_25 = VAR_11;
  VAR_31 = FUNC_5(VAR_15, VAR_8, &VAR_27);
  if (VAR_31 == VAR_9 && VAR_27 != ((void*)0)) {
   VAR_31 = FUNC_5(VAR_15, VAR_3, &VAR_26);
   if (VAR_31 == VAR_9 && VAR_26 != ((void*)0)) {
    if (FUNC_8(VAR_27, VAR_26) != 0)
     VAR_25 = VAR_12;
   }
  }
  VAR_31 = FUNC_5(VAR_15, 128, &VAR_21);
  if (VAR_31 == VAR_9 && VAR_21 != ((void*)0)) {
   VAR_25 = VAR_13;
   VAR_33 = 1;
  }
  break;
 case 128:
  VAR_30 = VAR_5;
  VAR_24 = "oldauthtok_prompt";
  VAR_25 = VAR_14;
  VAR_33 = 0;
  break;
 default:
  FUNC_2(VAR_2);
 }
 if (FUNC_3(VAR_15, "try_first_pass") ||
     FUNC_3(VAR_15, "use_first_pass")) {
  VAR_31 = FUNC_5(VAR_15, VAR_16, &VAR_22);
  if (VAR_31 == VAR_9 && VAR_22 != ((void*)0)) {
   *VAR_17 = VAR_22;
   FUNC_2(VAR_9);
  } else if (FUNC_3(VAR_15, "use_first_pass")) {
   FUNC_2(VAR_31 == VAR_9 ? VAR_1 : VAR_31);
  }
 }

 if ((VAR_23 = FUNC_3(VAR_15, VAR_24)) != ((void*)0))
  VAR_18 = VAR_23;

 if (VAR_18 == ((void*)0)) {
  VAR_31 = FUNC_5(VAR_15, VAR_30, &VAR_23);
  if (VAR_31 == VAR_9 && VAR_23 != ((void*)0))
   VAR_18 = VAR_23;
 }

 if (VAR_18 == ((void*)0))
  VAR_18 = VAR_25;

 VAR_20 = sizeof VAR_19;
 VAR_31 = FUNC_4(VAR_15, VAR_19, &VAR_20, VAR_18);
 if (VAR_31 == VAR_9 && VAR_20 <= sizeof VAR_19)
  VAR_18 = VAR_19;
 VAR_32 = FUNC_3(VAR_15, "echo_pass") ?
     VAR_7 : VAR_6;
 VAR_31 = FUNC_6(VAR_15, VAR_32, &VAR_28, "%s", VAR_18);
 if (VAR_31 != VAR_9)
  FUNC_2(VAR_31);
 if (VAR_33) {
  VAR_31 = FUNC_6(VAR_15, VAR_32, &VAR_29, "Retype %s", VAR_18);
  if (VAR_31 != VAR_9) {
   FUNC_9(VAR_28, 0, VAR_4);
   FUNC_1(VAR_28);
   FUNC_2(VAR_31);
  }
  if (FUNC_8(VAR_28, VAR_29) != 0) {
   FUNC_9(VAR_28, 0, VAR_4);
   FUNC_1(VAR_28);
  }
  FUNC_9(VAR_29, 0, VAR_4);
  FUNC_1(VAR_29);
 }
 if (VAR_28 == ((void*)0))
  FUNC_2(VAR_10);
 VAR_31 = FUNC_7(VAR_15, VAR_16, VAR_28);
 FUNC_9(VAR_28, 0, VAR_4);
 FUNC_1(VAR_28);
 if (VAR_31 != VAR_9)
  FUNC_2(VAR_31);
 VAR_31 = FUNC_5(VAR_15, VAR_16, (const void **)VAR_17);
 FUNC_2(VAR_31);
}
