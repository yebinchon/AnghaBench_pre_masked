
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int message ;
typedef char TCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int,int ,char*,int,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int,char*,...) ;
 char* FUNC_3 (int) ;

void FUNC_4(const char *VAR_6, int VAR_7, char *VAR_8, int VAR_9)
{
 char *VAR_10;

 if (VAR_8 == ((void*)0))
  return;

 VAR_10 = FUNC_3(VAR_7);

 if ((VAR_6) && (*VAR_6))
  FUNC_2(VAR_8, VAR_9, "%s%s (code %d)", VAR_6, VAR_10, VAR_7);
 else
  FUNC_2(VAR_8, VAR_9, "%s (code %d)", VAR_10, VAR_7);

}
