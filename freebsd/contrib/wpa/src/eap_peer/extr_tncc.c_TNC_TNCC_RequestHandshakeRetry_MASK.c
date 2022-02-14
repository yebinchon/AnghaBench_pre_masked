
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TNC_RetryReason ;
typedef int TNC_Result ;
typedef size_t TNC_IMCID ;
typedef int TNC_ConnectionID ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static TNC_Result FUNC_1(
 TNC_IMCID VAR_5,
 TNC_ConnectionID VAR_6,
 TNC_RetryReason VAR_7)
{
 FUNC_0(VAR_0, "TNC: TNC_TNCC_RequestHandshakeRetry");

 if (VAR_5 >= VAR_1 || VAR_4[VAR_5] == ((void*)0))
  return VAR_2;







 return VAR_3;
}
