
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_uid; } ;
typedef int lname ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_principal ;
typedef int gss_name_t ;
typedef int gss_OID ;
typedef int buf ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,struct passwd*,char*,size_t,struct passwd**) ;
 scalar_t__ FUNC_3 (int ,int ,int,char*) ;
 char* FUNC_4 (size_t) ;

OM_uint32
FUNC_5(OM_uint32 *VAR_4, const gss_name_t VAR_5,
    const gss_OID VAR_6, uid_t *VAR_7)
{
 krb5_context VAR_8;
 krb5_const_principal VAR_9 = (krb5_const_principal) VAR_5;
 krb5_error_code VAR_10;
 char VAR_11[VAR_3 + 1], VAR_12[1024], *VAR_13;
 struct passwd VAR_14, *VAR_15;
 size_t VAR_16;
 int VAR_17;
 OM_uint32 VAR_18;
 static size_t VAR_19 = 1024;

 FUNC_0 (&VAR_8);

 VAR_10 = FUNC_3(VAR_8, VAR_9, sizeof(VAR_11), VAR_11);
 if (VAR_10) {
  *VAR_4 = VAR_10;
  return (VAR_2);
 }

 *VAR_4 = 0;
 VAR_16 = VAR_19;
 for (;;) {
  VAR_15 = ((void*)0);
  VAR_13 = VAR_12;
  if (VAR_16 > sizeof(VAR_12))
   VAR_13 = FUNC_4(VAR_16);
  if (VAR_13 == ((void*)0))
   break;
  VAR_17 = FUNC_2(VAR_11, &VAR_14, VAR_13, VAR_16, &VAR_15);
  if (VAR_17 != VAR_0)
   break;
  if (VAR_16 > sizeof(VAR_12))
   FUNC_1(VAR_13);
  VAR_16 += 1024;
  if (VAR_16 > VAR_19)
   VAR_19 = VAR_16;
 }
 if (VAR_15) {
  *VAR_7 = VAR_15->pw_uid;
  VAR_18 = VAR_1;
 } else {
  VAR_18 = VAR_2;
 }
 if (VAR_13 != ((void*)0) && VAR_16 > sizeof(VAR_12))
  FUNC_1(VAR_13);
 return (VAR_18);
}
