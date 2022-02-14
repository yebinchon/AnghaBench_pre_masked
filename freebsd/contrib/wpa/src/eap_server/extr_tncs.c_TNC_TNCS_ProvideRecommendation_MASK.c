
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tncs_data {TYPE_1__* imv_data; } ;
struct TYPE_2__ {int recommendation_set; scalar_t__ recommendation; } ;
typedef int TNC_Result ;
typedef scalar_t__ TNC_IMV_Evaluation_Result ;
typedef scalar_t__ TNC_IMV_Action_Recommendation ;
typedef size_t TNC_IMVID ;
typedef scalar_t__ TNC_ConnectionID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tncs_data* FUNC_0 (scalar_t__) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static TNC_Result FUNC_3(
 TNC_IMVID VAR_3,
 TNC_ConnectionID VAR_4,
 TNC_IMV_Action_Recommendation VAR_5,
 TNC_IMV_Evaluation_Result VAR_6)
{
 struct tncs_data *VAR_7;

 FUNC_2(VAR_0, "TNC: TNC_TNCS_ProvideRecommendation(imvID=%lu "
     "connectionID=%lu recommendation=%lu evaluation=%lu)",
     (unsigned long) VAR_3, (unsigned long) VAR_4,
     (unsigned long) VAR_5, (unsigned long) VAR_6);

 if (FUNC_1(VAR_3) == ((void*)0))
  return VAR_1;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 == ((void*)0))
  return VAR_1;

 VAR_7->imv_data[VAR_3].recommendation = VAR_5;
 VAR_7->imv_data[VAR_3].recommendation_set = 1;

 return VAR_2;
}
