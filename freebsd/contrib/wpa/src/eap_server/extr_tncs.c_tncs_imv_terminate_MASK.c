
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imv {scalar_t__ (* Terminate ) (int ) ;unsigned long name; int imvID; } ;
typedef scalar_t__ TNC_Result ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct tnc_if_imv *VAR_2)
{
 TNC_Result VAR_3;

 if (VAR_2->Terminate == ((void*)0))
  return 0;

 FUNC_1(VAR_0, "TNC: Calling TNC_IMV_Terminate for IMV '%s'",
     VAR_2->name);
 VAR_3 = VAR_2->Terminate(VAR_2->imvID);
 FUNC_1(VAR_0, "TNC: TNC_IMV_Terminate: %lu",
     (unsigned long) VAR_3);

 return VAR_3 == VAR_1 ? 0 : -1;
}
