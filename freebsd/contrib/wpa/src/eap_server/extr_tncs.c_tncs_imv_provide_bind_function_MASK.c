
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imv {unsigned long name; scalar_t__ (* ProvideBindFunction ) (int ,int ) ;int imvID; } ;
typedef scalar_t__ TNC_Result ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct tnc_if_imv *VAR_3)
{
 TNC_Result VAR_4;

 FUNC_1(VAR_0, "TNC: Calling TNC_IMV_ProvideBindFunction for "
     "IMV '%s'", VAR_3->name);
 VAR_4 = VAR_3->ProvideBindFunction(VAR_3->imvID, VAR_2);
 FUNC_1(VAR_0, "TNC: TNC_IMV_ProvideBindFunction: res=%lu",
     (unsigned long) VAR_4);

 return VAR_4 == VAR_1 ? 0 : -1;
}
