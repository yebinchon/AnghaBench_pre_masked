
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sidBuffer ;
typedef int isc_result_t ;
typedef int groupBuffer ;
typedef int domainBuffer ;
typedef int SID_NAME_USE ;
typedef int SECURITY_DESCRIPTOR ;
typedef int PSID ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char const*,int ,int*,char*,int*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char const*,int,int *) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (char const*) ;

isc_result_t
FUNC_6(const char *VAR_6, const char *VAR_7) {
 SECURITY_DESCRIPTOR VAR_8;
 BYTE VAR_9[500];
 BYTE VAR_10[500];
 PSID VAR_11=(PSID) &VAR_9;
 DWORD VAR_12 = sizeof(VAR_9);
 char VAR_13[100];
 DWORD VAR_14 = sizeof(VAR_13);
 SID_NAME_USE VAR_15;
 PSID VAR_16 = (PSID) &VAR_10;
 DWORD VAR_17 = sizeof(VAR_10);
 if (FUNC_5(VAR_6) == VAR_0)
  return (VAR_3);

 if (!FUNC_0(&VAR_8, VAR_5))
  return (VAR_2);

 if (!FUNC_1(0, VAR_7, VAR_11, &VAR_12, VAR_13,
  &VAR_14, &VAR_15))
  return (VAR_2);


 VAR_14 = sizeof(VAR_13);
 if (!FUNC_1(0, "Administrators", VAR_16,
  &VAR_17, VAR_13, &VAR_14, &VAR_15))
  return (VAR_2);

 if (!FUNC_4(&VAR_8, VAR_11, VAR_0))
  return (VAR_2);

 if (!FUNC_3(&VAR_8, VAR_16, VAR_0))
  return (VAR_2);

 if (!FUNC_2(VAR_6,
  VAR_4 | VAR_1,
  &VAR_8))
  return (VAR_2);

 return (VAR_3);
}
