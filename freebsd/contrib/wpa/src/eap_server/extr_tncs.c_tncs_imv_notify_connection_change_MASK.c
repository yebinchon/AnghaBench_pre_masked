
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imv {scalar_t__ (* NotifyConnectionChange ) (int ,int ,scalar_t__) ;int imvID; int name; } ;
typedef scalar_t__ TNC_Result ;
typedef scalar_t__ TNC_ConnectionState ;
typedef int TNC_ConnectionID ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,char*,unsigned long,...) ;

__attribute__((used)) static int FUNC_2(struct tnc_if_imv *VAR_2,
          TNC_ConnectionID VAR_3,
          TNC_ConnectionState VAR_4)
{
 TNC_Result VAR_5;

 if (VAR_2->NotifyConnectionChange == ((void*)0))
  return 0;

 FUNC_1(VAR_0, "TNC: Calling TNC_IMV_NotifyConnectionChange(%d)"
     " for IMV '%s'", (int) VAR_4, VAR_2->name);
 VAR_5 = VAR_2->NotifyConnectionChange(VAR_2->imvID, VAR_3, VAR_4);
 FUNC_1(VAR_0, "TNC: TNC_IMC_NotifyConnectionChange: %lu",
     (unsigned long) VAR_5);

 return VAR_5 == VAR_1 ? 0 : -1;
}
