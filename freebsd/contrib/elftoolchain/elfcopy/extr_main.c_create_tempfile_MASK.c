
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,size_t) ;

void
FUNC_8(char **VAR_3, int *VAR_4)
{
 const char *VAR_5;
 char *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9;




 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return;

 VAR_5 = FUNC_2("TMPDIR");
 if (VAR_5 != ((void*)0) && *VAR_5 != '\0') {
  VAR_8 = FUNC_6(VAR_5);
  VAR_9 = FUNC_6("ecp.XXXXXXXX");
  VAR_7 = FUNC_3(VAR_8 + VAR_9 + 2);
  if (VAR_7 == ((void*)0))
   FUNC_0(VAR_0, "malloc failed");
  FUNC_7(VAR_7, VAR_5, VAR_8);
  VAR_6 = &VAR_7[VAR_8 - 1];
  if (*VAR_6++ != '/')
   *VAR_6++ = '/';
  FUNC_7(VAR_6, "ecp.XXXXXXXX", VAR_9);
  VAR_6[VAR_9] = '\0';
 } else {
  VAR_7 = FUNC_5("/tmp/ecp.XXXXXXXX");
  if (VAR_7 == ((void*)0))
   FUNC_0(VAR_0, "strdup failed");
 }
 if ((*VAR_4 = FUNC_4(VAR_7)) == -1)
  FUNC_0(VAR_0, "mkstemp %s failed", VAR_7);
 if (FUNC_1(*VAR_4, 0644) == -1)
  FUNC_0(VAR_0, "fchmod %s failed", VAR_7);
 *VAR_3 = VAR_7;



}
