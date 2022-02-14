
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tncs_data {int connectionID; TYPE_1__* imv_data; struct tnc_if_imv* imv; } ;
struct tnc_if_imv {size_t imvID; unsigned long name; scalar_t__ (* SolicitRecommendation ) (size_t,int ) ;struct tnc_if_imv* next; } ;
struct TYPE_2__ {scalar_t__ recommendation_set; } ;
typedef scalar_t__ TNC_Result ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct tncs_data *VAR_1)
{
 struct tnc_if_imv *VAR_2;
 TNC_Result VAR_3;

 for (VAR_2 = VAR_1->imv; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_1->imv_data[VAR_2->imvID].recommendation_set)
   continue;

  FUNC_1(VAR_0, "TNC: Call SolicitRecommendation for "
      "IMV '%s'", VAR_2->name);
  VAR_3 = VAR_2->SolicitRecommendation(VAR_2->imvID,
       VAR_1->connectionID);
  FUNC_1(VAR_0, "TNC: SolicitRecommendation: %lu",
      (unsigned long) VAR_3);
 }
}
