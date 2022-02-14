
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TNC_Result ;
typedef size_t TNC_IMCID ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int ** VAR_9 ;
 int FUNC_1 (int ,char*,unsigned long,char*) ;

__attribute__((used)) static TNC_Result FUNC_2(
 TNC_IMCID VAR_10,
 char *VAR_11,
 void **VAR_12)
{
 FUNC_1(VAR_0, "TNC: TNC_TNCC_BindFunction(imcID=%lu, "
     "functionName='%s')", (unsigned long) VAR_10, VAR_11);

 if (VAR_10 >= VAR_3 || VAR_9[VAR_10] == ((void*)0))
  return VAR_4;

 if (VAR_12 == ((void*)0))
  return VAR_4;

 if (FUNC_0(VAR_11, "TNC_TNCC_ReportMessageTypes") == 0)
  *VAR_12 = VAR_6;
 else if (FUNC_0(VAR_11, "TNC_TNCC_SendMessage") == 0)
  *VAR_12 = VAR_8;
 else if (FUNC_0(VAR_11, "TNC_TNCC_RequestHandshakeRetry") ==
   0)
  *VAR_12 = VAR_7;
 else if (FUNC_0(VAR_11, "TNC_9048_LogMessage") == 0)
  *VAR_12 = VAR_1;
 else if (FUNC_0(VAR_11, "TNC_9048_UserMessage") == 0)
  *VAR_12 = VAR_2;
 else
  *VAR_12 = ((void*)0);

 return VAR_5;
}
