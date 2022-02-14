
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imc {unsigned long name; scalar_t__ (* BeginHandshake ) (int ,int ) ;int connectionID; int imcID; } ;
typedef scalar_t__ TNC_Result ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct tnc_if_imc *VAR_2)
{
 TNC_Result VAR_3;

 FUNC_1(VAR_0, "TNC: Calling TNC_IMC_BeginHandshake for IMC "
     "'%s'", VAR_2->name);
 VAR_3 = VAR_2->BeginHandshake(VAR_2->imcID, VAR_2->connectionID);
 FUNC_1(VAR_0, "TNC: TNC_IMC_BeginHandshake: %lu",
     (unsigned long) VAR_3);

 return VAR_3 == VAR_1 ? 0 : -1;
}
