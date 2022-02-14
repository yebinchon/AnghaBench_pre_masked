
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,char*,char*,char const*,...) ;
 int FUNC_6 (char*) ;

char *
FUNC_7(const char *VAR_4, const char *VAR_5)
{
 int VAR_6;
 char *VAR_7, *VAR_8;

 if (!(VAR_8 = FUNC_4(VAR_0)))
  return(((void*)0));

 if (!VAR_5)
  VAR_5 = "tmp.";

 if (FUNC_3() == 0 && (VAR_7 = FUNC_2("TMPDIR"))) {
  (void)FUNC_5(VAR_8, VAR_0, "%s%s%sXXXXXX", VAR_7,
      *(VAR_7 + FUNC_6(VAR_7) - 1) == '/'? "": "/", VAR_5);
  if ((VAR_7 = FUNC_0(VAR_8)))
   return(VAR_7);
 }

 if ((VAR_7 = (char *)VAR_4)) {
  (void)FUNC_5(VAR_8, VAR_0, "%s%s%sXXXXXX", VAR_7,
      *(VAR_7 + FUNC_6(VAR_7) - 1) == '/'? "": "/", VAR_5);
  if ((VAR_7 = FUNC_0(VAR_8)))
   return(VAR_7);
 }

 VAR_7 = VAR_1;
 (void)FUNC_5(VAR_8, VAR_0, "%s%sXXXXXX", VAR_7, VAR_5);
 if ((VAR_7 = FUNC_0(VAR_8)))
  return(VAR_7);

 VAR_7 = VAR_2;
 (void)FUNC_5(VAR_8, VAR_0, "%s%sXXXXXX", VAR_7, VAR_5);
 if ((VAR_7 = FUNC_0(VAR_8)))
  return(VAR_7);

 VAR_6 = VAR_3;
 FUNC_1(VAR_8);
 VAR_3 = VAR_6;
 return(((void*)0));
}
