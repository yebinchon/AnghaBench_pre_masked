
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TNC_Result ;
typedef scalar_t__ TNC_IMVID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,unsigned long,char*) ;

__attribute__((used)) static TNC_Result FUNC_3(
 TNC_IMVID VAR_9,
 char *VAR_10,
 void **VAR_11)
{
 FUNC_2(VAR_0, "TNC: TNC_TNCS_BindFunction(imcID=%lu, "
     "functionName='%s')", (unsigned long) VAR_9, VAR_10);

 if (FUNC_1(VAR_9) == ((void*)0))
  return VAR_1;

 if (VAR_11 == ((void*)0))
  return VAR_1;

 if (FUNC_0(VAR_10, "TNC_TNCS_ReportMessageTypes") == 0)
  *VAR_11 = VAR_5;
 else if (FUNC_0(VAR_10, "TNC_TNCS_SendMessage") == 0)
  *VAR_11 = VAR_7;
 else if (FUNC_0(VAR_10, "TNC_TNCS_RequestHandshakeRetry") ==
   0)
  *VAR_11 = VAR_6;
 else if (FUNC_0(VAR_10, "TNC_TNCS_ProvideRecommendation") ==
   0)
  *VAR_11 = VAR_4;
 else if (FUNC_0(VAR_10, "TNC_TNCS_GetAttribute") == 0)
  *VAR_11 = VAR_3;
 else if (FUNC_0(VAR_10, "TNC_TNCS_SetAttribute") == 0)
  *VAR_11 = VAR_8;
 else
  *VAR_11 = ((void*)0);

 return VAR_2;
}
