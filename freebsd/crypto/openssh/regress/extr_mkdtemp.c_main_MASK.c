
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int template ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char*,char const*,char const*) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_1, char **VAR_2)
{
 const char *VAR_3;
 const char *VAR_4;
 char VAR_5[VAR_0];
 int VAR_6;
 char *VAR_7;

 if (VAR_1 != 2)
  FUNC_7();
 VAR_3 = VAR_2[1];

 if ((VAR_4 = FUNC_2("TMPDIR")) == ((void*)0))
  VAR_4 = "/tmp";
 VAR_6 = FUNC_6(VAR_5, sizeof(VAR_5), "%s/%s", VAR_4, VAR_3);
 if (VAR_6 < 0 || (size_t)VAR_6 >= sizeof(VAR_5))
  FUNC_1("template string too long");
 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_4("mkdtemp");
  FUNC_0(1);
 }
 FUNC_5(VAR_7);
 return 0;
}
