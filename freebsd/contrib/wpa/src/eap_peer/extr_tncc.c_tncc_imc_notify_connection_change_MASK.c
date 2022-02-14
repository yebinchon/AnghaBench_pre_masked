
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imc {scalar_t__ (* NotifyConnectionChange ) (int ,int ,scalar_t__) ;int connectionID; int imcID; int name; } ;
typedef scalar_t__ TNC_Result ;
typedef scalar_t__ TNC_ConnectionState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,char*,unsigned long,...) ;

__attribute__((used)) static int FUNC_2(struct tnc_if_imc *VAR_2,
          TNC_ConnectionState VAR_3)
{
 TNC_Result VAR_4;

 if (VAR_2->NotifyConnectionChange == ((void*)0))
  return 0;

 FUNC_1(VAR_0, "TNC: Calling TNC_IMC_NotifyConnectionChange(%d)"
     " for IMC '%s'", (int) VAR_3, VAR_2->name);
 VAR_4 = VAR_2->NotifyConnectionChange(VAR_2->imcID, VAR_2->connectionID,
       VAR_3);
 FUNC_1(VAR_0, "TNC: TNC_IMC_NotifyConnectionChange: %lu",
     (unsigned long) VAR_4);

 return VAR_4 == VAR_1 ? 0 : -1;
}
