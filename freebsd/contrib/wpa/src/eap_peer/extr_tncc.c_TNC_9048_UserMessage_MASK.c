
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TNC_Result ;
typedef int TNC_IMCID ;
typedef int TNC_ConnectionID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,char const*) ;

__attribute__((used)) static TNC_Result FUNC_1(TNC_IMCID VAR_2,
           TNC_ConnectionID VAR_3,
           const char *VAR_4)
{
 FUNC_0(VAR_0, "TNC: TNC_9048_UserMessage(imcID=%lu "
     "connectionID==%lu message='%s')",
     VAR_2, VAR_3, VAR_4);
 return VAR_1;
}
