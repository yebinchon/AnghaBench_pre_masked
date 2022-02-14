
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;
typedef int pam_facility_t ;
typedef int openpam_style_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 int FUNC_6 (int ,char*,char const*) ;
 int FUNC_7 (int *,char const*,int ,int *,char const*,int ) ;

__attribute__((used)) static int
FUNC_8(pam_handle_t *VAR_5,
 const char *VAR_6,
 pam_facility_t VAR_7,
 const char *VAR_8,
 openpam_style_t VAR_9)
{
 FILE *VAR_10;
 int VAR_11, VAR_12;


 if ((VAR_10 = FUNC_4(VAR_8, "r")) == ((void*)0)) {
  VAR_12 = VAR_4;
  FUNC_6(VAR_4 == VAR_0 ? VAR_1 : VAR_2,
      "%s: %m", VAR_8);
  VAR_4 = VAR_12;
  FUNC_1(-1);
 } else {
  FUNC_6(VAR_1, "found %s", VAR_8);
 }


 if (FUNC_0(VAR_3) &&
     FUNC_5(VAR_8, FUNC_3(VAR_10)) != 0) {

  VAR_12 = VAR_4;
  FUNC_2(VAR_10);
  VAR_4 = VAR_12;
  FUNC_1(-1);
 }


 VAR_11 = FUNC_7(VAR_5, VAR_6, VAR_7,
     VAR_10, VAR_8, VAR_9);
 FUNC_1(VAR_11);
}
