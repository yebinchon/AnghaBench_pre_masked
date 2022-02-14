
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tncc_process_res { ____Placeholder_tncc_process_res } tncc_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static enum tncc_process_res FUNC_3(char *VAR_5)
{
 char *VAR_6, *VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = FUNC_1(VAR_5, "<TNCCS-Recommendation ");
 if (VAR_6 == ((void*)0))
  return VAR_2;

 VAR_6 += 21;
 VAR_6 = FUNC_1(VAR_6, " type=");
 if (VAR_6 == ((void*)0))
  return VAR_2;
 VAR_6 += 6;

 if (*VAR_6 == '"')
  VAR_6++;

 VAR_7 = VAR_6;
 while (*VAR_7 != '\0' && *VAR_7 != '"' && *VAR_7 != '>')
  VAR_7++;

 if (*VAR_7 == '\0')
  return VAR_2;

 VAR_8 = *VAR_7;
 *VAR_7 = '\0';
 FUNC_2(VAR_0, "TNC: TNCCS-Recommendation: '%s'", VAR_6);

 VAR_9 = VAR_2;
 if (FUNC_0(VAR_6, "allow") == 0)
  VAR_9 = VAR_1;
 else if (FUNC_0(VAR_6, "none") == 0)
  VAR_9 = VAR_4;
 else if (FUNC_0(VAR_6, "isolate") == 0)
  VAR_9 = VAR_3;

 *VAR_7 = VAR_8;

 return VAR_9;
}
