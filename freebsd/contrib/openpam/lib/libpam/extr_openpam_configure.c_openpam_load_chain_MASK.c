
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;
typedef size_t pam_facility_t ;
typedef scalar_t__ openpam_style_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char const*,size_t,char const*,scalar_t__) ;
 char** VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char** VAR_7 ;
 int * FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 size_t FUNC_5 (char*,char const*,int) ;
 size_t FUNC_6 (char*,char const*,int) ;
 char* FUNC_7 (char const*,char) ;

__attribute__((used)) static int
FUNC_8(pam_handle_t *VAR_8,
 const char *VAR_9,
 pam_facility_t VAR_10)
{
 const char *VAR_11, **VAR_12;
 char VAR_13[VAR_2];
 size_t VAR_14;
 openpam_style_t VAR_15;
 int VAR_16;

 FUNC_0(VAR_10 < 0 ? "any" : VAR_7[VAR_10]);


 if (FUNC_3(VAR_9, '/') != ((void*)0)) {
  if ((VAR_11 = FUNC_7(VAR_9, '.')) != ((void*)0) && FUNC_4(VAR_11, ".conf") == 0)
   VAR_15 = VAR_5;
  else
   VAR_15 = VAR_6;
  VAR_16 = FUNC_2(VAR_8, VAR_9, VAR_10,
      VAR_9, VAR_15);
  FUNC_1(VAR_16);
 }


 for (VAR_12 = VAR_4; *VAR_12 != ((void*)0); ++VAR_12) {

  VAR_14 = FUNC_6(VAR_13, *VAR_12, sizeof VAR_13);
  if (VAR_14 >= sizeof VAR_13) {
   VAR_3 = VAR_0;
   FUNC_1(-1);
  }
  if (VAR_13[VAR_14 - 1] == '/') {
   VAR_14 = FUNC_5(VAR_13, VAR_9, sizeof VAR_13);
   if (VAR_14 >= sizeof VAR_13) {
    VAR_3 = VAR_0;
    FUNC_1(-1);
   }
   VAR_15 = VAR_6;
  } else {
   VAR_15 = VAR_5;
  }
  VAR_16 = FUNC_2(VAR_8, VAR_9, VAR_10,
      VAR_13, VAR_15);

  if (VAR_16 > 0)
   FUNC_1(VAR_16);

  if (VAR_16 == -1 && VAR_3 != VAR_1)
   FUNC_1(VAR_16);

  if (VAR_16 == 0 && VAR_15 == VAR_6)
   FUNC_1(VAR_16);
 }


 VAR_3 = VAR_1;
 FUNC_1(-1);
}
