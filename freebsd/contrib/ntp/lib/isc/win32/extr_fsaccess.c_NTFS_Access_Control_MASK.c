
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sidBuffer ;
typedef int otherSidBuffer ;
typedef int isc_result_t ;
typedef scalar_t__ isc_boolean_t ;
typedef int domainBuffer ;
typedef int adminSidBuffer ;
typedef int aclBuffer ;
typedef int SID_NAME_USE ;
typedef int SECURITY_DESCRIPTOR ;
typedef int PSID ;
typedef int PACL ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
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
 int VAR_11 ;
 int FUNC_1 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char const*,int ,int*,char*,int*,int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (int *,scalar_t__,int ,int ) ;
 scalar_t__ VAR_25 ;

isc_result_t
FUNC_7(const char *VAR_26, const char *VAR_27, int VAR_28,
      isc_boolean_t VAR_29) {
 SECURITY_DESCRIPTOR VAR_30;
 BYTE VAR_31[1024];
 PACL VAR_32=(PACL)&VAR_31;
 BYTE VAR_33[100];
 PSID VAR_34=(PSID) &VAR_33;
 DWORD VAR_35 = sizeof(VAR_33);
 BYTE VAR_36[100];
 PSID VAR_37=(PSID) &VAR_36;
 DWORD VAR_38 = sizeof(VAR_36);
 BYTE VAR_39[100];
 PSID VAR_40=(PSID) &VAR_39;
 DWORD VAR_41 = sizeof(VAR_39);
 char VAR_42[100];
 DWORD VAR_43 = sizeof(VAR_42);
 SID_NAME_USE VAR_44;
 int VAR_45;
 DWORD VAR_46;
 int VAR_47;



 if (!FUNC_3(&VAR_30, VAR_22))
  return (VAR_19);
 if (!FUNC_2(VAR_32, sizeof(VAR_31), VAR_0))
  return (VAR_19);
 if (!FUNC_4(0, VAR_27, VAR_34, &VAR_35, VAR_42,
     &VAR_43, &VAR_44))
  return (VAR_19);
 VAR_43 = sizeof(VAR_42);
 if (!FUNC_4(0, "Administrators", VAR_37,
  &VAR_38, VAR_42, &VAR_43, &VAR_44)) {
  VAR_45 = FUNC_1();
  return (VAR_19);
 }
 VAR_43 = sizeof(VAR_42);
 if (!FUNC_4(0, "Everyone", VAR_40,
  &VAR_41, VAR_42, &VAR_43, &VAR_44)) {
  VAR_45 = FUNC_1();
  return (VAR_19);
 }

 VAR_47 = VAR_28;


 VAR_46 = 0;
 if (VAR_47 & VAR_17)
  VAR_46 |= VAR_8;
 if (VAR_47 & VAR_18)
  VAR_46 |= VAR_9;
 if (VAR_47 & VAR_15)
  VAR_46 |= VAR_7;


 if (VAR_29 == VAR_21) {
  if (VAR_47 & VAR_13)
   VAR_46 |= VAR_4 | VAR_3;
  if (VAR_47 & VAR_14)
   VAR_46 |= VAR_6;
  if (VAR_47 & VAR_16)
   VAR_46 |= VAR_10;
  if (VAR_47 & VAR_12)
   VAR_46 |= VAR_11;
 }

 if (VAR_46 == (VAR_8 | VAR_9
       | VAR_7))
       VAR_46 |= VAR_5;





 VAR_46 |= VAR_23;


 if (!FUNC_0(VAR_32, VAR_0, VAR_46, VAR_34))
  return (VAR_19);
 if (!FUNC_0(VAR_32, VAR_0, VAR_46, VAR_37))
  return (VAR_19);






 VAR_47 = VAR_47 >> VAR_24;





 VAR_47 = VAR_47 >> VAR_24;

 VAR_46 = 0;
 if (VAR_47 & VAR_17)
  VAR_46 |= VAR_8;
 if (VAR_47 & VAR_18)
  VAR_46 |= VAR_9;
 if (VAR_47 & VAR_15)
  VAR_46 |= VAR_7;


 if (VAR_29 == VAR_25) {
  if (VAR_47 & VAR_13)
   VAR_46 |= VAR_4 | VAR_3;
  if (VAR_47 & VAR_14)
   VAR_46 |= VAR_6;
  if (VAR_47 & VAR_16)
   VAR_46 |= VAR_10;
  if (VAR_47 & VAR_12)
   VAR_46 |= VAR_11;
 }

 if (!FUNC_0(VAR_32, VAR_0, VAR_46,
     VAR_40))
  return (VAR_19);

 if (!FUNC_6(&VAR_30, VAR_25, VAR_32, VAR_2))
  return (VAR_19);
 if (!FUNC_5(VAR_26, VAR_1, &VAR_30)) {
  return (VAR_19);
 }

 return(VAR_20);
}
