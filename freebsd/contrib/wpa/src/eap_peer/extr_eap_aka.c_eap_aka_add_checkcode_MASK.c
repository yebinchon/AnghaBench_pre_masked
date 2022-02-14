
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {scalar_t__ eap_method; int * id_msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 int FUNC_1 (int,int const**,size_t*,int *) ;
 int FUNC_2 (int,int const**,size_t*,int *) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct eap_aka_data *VAR_7,
      struct eap_sim_msg *VAR_8)
{
 const u8 *VAR_9;
 size_t VAR_10;
 u8 VAR_11[VAR_6];

 FUNC_4(VAR_4, "   AT_CHECKCODE");

 if (VAR_7->id_msgs == ((void*)0)) {




  FUNC_0(VAR_8, VAR_2, 0, ((void*)0), 0);
  return;
 }


 VAR_9 = FUNC_5(VAR_7->id_msgs);
 VAR_10 = FUNC_6(VAR_7->id_msgs);
 FUNC_3(VAR_5, "EAP-AKA: AT_CHECKCODE data", VAR_9, VAR_10);





  FUNC_1(1, &VAR_9, &VAR_10, VAR_11);

 FUNC_0(VAR_8, VAR_2, 0, VAR_11,
   VAR_7->eap_method == VAR_3 ?
   VAR_1 : VAR_0);
}
