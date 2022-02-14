
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int isc_result_t ;
struct TYPE_4__ {int grui0_name; int lgrui0_name; } ;
typedef scalar_t__ NET_API_STATUS ;
typedef TYPE_1__* LPLOCALGROUP_USERS_INFO_0 ;
typedef TYPE_1__* LPGROUP_USERS_INFO_0 ;
typedef int LPBYTE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__,int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__,scalar_t__,int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (size_t) ;
 size_t FUNC_6 (int *,char*,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 size_t FUNC_8 (int ) ;
 size_t FUNC_9 (char*,int ,size_t) ;

isc_result_t
FUNC_10(char *VAR_11, char **VAR_12,
    unsigned int VAR_13,
    unsigned int *VAR_14) {
 LPGROUP_USERS_INFO_0 VAR_15;
 LPLOCALGROUP_USERS_INFO_0 VAR_16;
 DWORD VAR_17;
 LPLOCALGROUP_USERS_INFO_0 VAR_18 = ((void*)0);
 LPGROUP_USERS_INFO_0 VAR_19 = ((void*)0);
 DWORD VAR_20 = 0;
 DWORD VAR_21 = VAR_6;
 DWORD VAR_22 = VAR_8;
 DWORD VAR_23 = 0;
 DWORD VAR_24 = 0;
 NET_API_STATUS VAR_25;
 DWORD VAR_26 = 0;
 size_t VAR_27;
 wchar_t VAR_28[VAR_7];

 VAR_27 = FUNC_6(VAR_28, VAR_11, VAR_7);

 *VAR_14 = 0;
 VAR_25 = FUNC_2(((void*)0),
       VAR_28,
       VAR_20,
       VAR_21,
       (LPBYTE *) &VAR_18,
       VAR_22,
       &VAR_23,
       &VAR_24);



 if (VAR_25 != VAR_9) {
  if (VAR_25 == VAR_0)
   return (VAR_3);
  if (VAR_25 == VAR_1)
   return (VAR_4);
  if (VAR_25 == VAR_10)
   VAR_23 = 0;
 }

 VAR_26 = 0;
 if (VAR_18 != ((void*)0)) {
  VAR_16 = VAR_18;



   for (VAR_17 = 0;
       (VAR_17 < VAR_23 && *VAR_14 < VAR_13); VAR_17++) {
   FUNC_3(VAR_16 != ((void*)0));
   if (VAR_16 == ((void*)0))
    break;
   VAR_27 = FUNC_8(VAR_16->lgrui0_name);
   VAR_12[*VAR_14] = (char *) FUNC_5(VAR_27 +1);
   if (VAR_12[*VAR_14] == ((void*)0))
    return (VAR_2);

   VAR_27 = FUNC_9(VAR_12[*VAR_14],
     VAR_16->lgrui0_name, VAR_27);
   VAR_12[*VAR_14][VAR_27] = '\0';
   if (FUNC_7(VAR_12[*VAR_14], "None") == 0)
    FUNC_4(VAR_12[*VAR_14]);
   else
    (*VAR_14)++;
   VAR_16++;
  }
 }

 if (VAR_18 != ((void*)0))
  FUNC_0(VAR_18);





 VAR_25 = FUNC_1(((void*)0),
         VAR_28,
         VAR_20,
         (LPBYTE*)&VAR_19,
         VAR_22,
         &VAR_23,
         &VAR_24);



 if (VAR_25 != VAR_9) {
  if (VAR_25 == VAR_0)
   return (VAR_3);
  if (VAR_25 == VAR_1)
   return (VAR_4);
  if (VAR_25 == VAR_10)
   VAR_23 = 0;
 }

 if (VAR_19 != ((void*)0)) {
  VAR_15 = VAR_19;



   for (VAR_17 = 0;
       (VAR_17 < VAR_23 && *VAR_14 < VAR_13); VAR_17++) {
   FUNC_3(VAR_15 != ((void*)0));

   if (VAR_15 == ((void*)0))
    break;
   VAR_27 = FUNC_8(VAR_15->grui0_name);
   VAR_12[*VAR_14] = (char *) FUNC_5(VAR_27 +1);
   if (VAR_12[*VAR_14] == ((void*)0))
    return (VAR_2);

   VAR_27 = FUNC_9(VAR_12[*VAR_14],
     VAR_15->grui0_name, VAR_27);
   VAR_12[*VAR_14][VAR_27] = '\0';
   if (FUNC_7(VAR_12[*VAR_14], "None") == 0)
    FUNC_4(VAR_12[*VAR_14]);
   else
    (*VAR_14)++;
   VAR_15++;
  }
 }



 if (VAR_19 != ((void*)0))
  FUNC_0(VAR_19);

 return (VAR_5);
}
