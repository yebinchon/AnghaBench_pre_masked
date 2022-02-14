
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tncc_data {struct tnc_if_imc* imc; } ;
struct tnc_if_imc {unsigned long name; int connectionID; int imcID; scalar_t__ (* ReceiveMessage ) (int ,int ,int ,size_t,unsigned int) ;struct tnc_if_imc* next; } ;
typedef scalar_t__ TNC_Result ;
typedef int TNC_BufferReference ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,size_t,unsigned int) ;
 int FUNC_1 (struct tnc_if_imc*,unsigned int) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct tncc_data *VAR_2, unsigned int VAR_3,
         const u8 *VAR_4, size_t VAR_5)
{
 struct tnc_if_imc *VAR_6;
 TNC_Result VAR_7;

 FUNC_2(VAR_1, "TNC: Message to IMC(s)", VAR_4, VAR_5);

 for (VAR_6 = VAR_2->imc; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->ReceiveMessage == ((void*)0) ||
      !FUNC_1(VAR_6, VAR_3))
   continue;

  FUNC_3(VAR_0, "TNC: Call ReceiveMessage for IMC '%s'",
      VAR_6->name);
  VAR_7 = VAR_6->ReceiveMessage(VAR_6->imcID, VAR_6->connectionID,
       (TNC_BufferReference) VAR_4, VAR_5,
       VAR_3);
  FUNC_3(VAR_0, "TNC: ReceiveMessage: %lu",
      (unsigned long) VAR_7);
 }
}
