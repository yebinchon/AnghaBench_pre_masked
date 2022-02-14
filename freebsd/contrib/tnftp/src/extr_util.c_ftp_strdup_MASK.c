
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1;

 if (VAR_0 == ((void*)0))
  FUNC_1(1, "ftp_strdup: called with NULL argument");
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0))
  FUNC_0(1, "Unable to allocate memory for string copy");
 return (VAR_1);
}
