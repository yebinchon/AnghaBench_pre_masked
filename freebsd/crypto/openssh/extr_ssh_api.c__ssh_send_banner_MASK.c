
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (struct ssh*) ;
 int FUNC_4 (int ,char*,int ) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

int
FUNC_7(struct ssh *VAR_2, char **VAR_3)
{
 char VAR_4[256];
 int VAR_5;

 FUNC_2(VAR_4, sizeof VAR_4, "SSH-2.0-%.100s\r\n", VAR_1);
 if ((VAR_5 = FUNC_4(FUNC_3(VAR_2), VAR_4, FUNC_6(VAR_4))) != 0)
  return VAR_5;
 FUNC_0(VAR_4);
 FUNC_1("Local version string %.100s", VAR_4);
 if ((*VAR_3 = FUNC_5(VAR_4)) == ((void*)0))
  return VAR_0;
 return 0;
}
