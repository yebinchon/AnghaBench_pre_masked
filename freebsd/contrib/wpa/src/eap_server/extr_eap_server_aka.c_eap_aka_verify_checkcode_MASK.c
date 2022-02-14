
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_aka_data {scalar_t__ eap_method; int * id_msgs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int,int const**,size_t*,int *) ;
 int FUNC_2 (int,int const**,size_t*,int *) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct eap_aka_data *VAR_5,
        const u8 *VAR_6, size_t VAR_7)
{
 const u8 *VAR_8;
 size_t VAR_9;
 u8 VAR_10[VAR_4];
 size_t VAR_11;

 if (VAR_6 == ((void*)0))
  return -1;

 if (VAR_5->id_msgs == ((void*)0)) {
  if (VAR_7 != 0) {
   FUNC_3(VAR_3, "EAP-AKA: Checkcode from peer "
       "indicates that AKA/Identity messages were "
       "used, but they were not");
   return -1;
  }
  return 0;
 }

 VAR_11 = VAR_5->eap_method == VAR_2 ?
  VAR_1 : VAR_0;

 if (VAR_7 != VAR_11) {
  FUNC_3(VAR_3, "EAP-AKA: Checkcode from peer indicates "
      "that AKA/Identity message were not used, but they "
      "were");
  return -1;
 }


 VAR_8 = FUNC_4(VAR_5->id_msgs);
 VAR_9 = FUNC_5(VAR_5->id_msgs);
 if (VAR_5->eap_method == VAR_2)
  FUNC_2(1, &VAR_8, &VAR_9, VAR_10);
 else
  FUNC_1(1, &VAR_8, &VAR_9, VAR_10);

 if (FUNC_0(VAR_10, VAR_6, VAR_11) != 0) {
  FUNC_3(VAR_3, "EAP-AKA: Mismatch in AT_CHECKCODE");
  return -1;
 }

 return 0;
}
