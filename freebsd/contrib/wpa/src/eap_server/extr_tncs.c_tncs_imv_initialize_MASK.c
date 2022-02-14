
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imv {scalar_t__ (* Initialize ) (int ,int ,int ,scalar_t__*) ;int imvID; int name; } ;
typedef scalar_t__ TNC_Version ;
typedef scalar_t__ TNC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,char*,unsigned long,...) ;

__attribute__((used)) static int FUNC_2(struct tnc_if_imv *VAR_3)
{
 TNC_Result VAR_4;
 TNC_Version VAR_5;

 FUNC_1(VAR_0, "TNC: Calling TNC_IMV_Initialize for IMV '%s'",
     VAR_3->name);
 VAR_4 = VAR_3->Initialize(VAR_3->imvID, VAR_1,
         VAR_1, &VAR_5);
 FUNC_1(VAR_0, "TNC: TNC_IMV_Initialize: res=%lu imv_ver=%lu",
     (unsigned long) VAR_4, (unsigned long) VAR_5);

 return VAR_4 == VAR_2 ? 0 : -1;
}
