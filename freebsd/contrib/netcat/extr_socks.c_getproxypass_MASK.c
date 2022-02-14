
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pw ;
typedef int prompt ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int * FUNC_1 (char*,char*,int,int ) ;
 int FUNC_2 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_1, const char *VAR_2)
{
 char VAR_3[512];
 static char VAR_4[256];

 FUNC_2(VAR_3, sizeof(VAR_3), "Proxy password for %s@%s: ",
    VAR_1, VAR_2);
 if (FUNC_1(VAR_3, VAR_4, sizeof(VAR_4), VAR_0) == ((void*)0))
  FUNC_0(1, "Unable to read proxy passphrase");
 return (VAR_4);
}
