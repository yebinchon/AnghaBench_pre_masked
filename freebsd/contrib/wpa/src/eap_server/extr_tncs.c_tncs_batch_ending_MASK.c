
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tncs_data {int connectionID; struct tnc_if_imv* imv; } ;
struct tnc_if_imv {unsigned long name; int imvID; scalar_t__ (* BatchEnding ) (int ,int ) ;struct tnc_if_imv* next; } ;
typedef scalar_t__ TNC_Result ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct tncs_data *VAR_1)
{
 struct tnc_if_imv *VAR_2;
 TNC_Result VAR_3;

 for (VAR_2 = VAR_1->imv; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->BatchEnding == ((void*)0))
   continue;

  FUNC_1(VAR_0, "TNC: Call BatchEnding for IMV '%s'",
      VAR_2->name);
  VAR_3 = VAR_2->BatchEnding(VAR_2->imvID, VAR_1->connectionID);
  FUNC_1(VAR_0, "TNC: BatchEnding: %lu",
      (unsigned long) VAR_3);
 }
}
