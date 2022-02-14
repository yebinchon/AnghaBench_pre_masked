
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (char*) ;

int
FUNC_6(char **VAR_2, char **VAR_3, const char *VAR_4)
{
 int VAR_5;

 if (FUNC_3("udf_iconv") < 0)
  if (FUNC_1("udf_iconv") < 0 || FUNC_3("udf_iconv") < 0) {
   FUNC_5( "cannot find or load \"udf_iconv\" kernel module");
   return (-1);
  }

 if ((*VAR_2 = FUNC_2(VAR_1)) == ((void*)0))
  return (-1);
 if ((*VAR_3 = FUNC_2(VAR_1)) == ((void*)0))
  return (-1);
 FUNC_4(*VAR_2, VAR_0, VAR_1);
 FUNC_4(*VAR_3, VAR_4, VAR_1);
 VAR_5 = FUNC_0(*VAR_2, *VAR_3);
 if (VAR_5)
  return (-1);

 return (0);
}
