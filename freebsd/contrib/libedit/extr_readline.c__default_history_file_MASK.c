
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;


 struct passwd* FUNC_0 (int ) ;
 int FUNC_1 () ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,size_t,char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static const char *
FUNC_5(void)
{
 struct passwd *VAR_0;
 static char *VAR_1;
 size_t VAR_2;

 if (VAR_1)
  return VAR_1;

 if ((VAR_0 = FUNC_0(FUNC_1())) == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_4(VAR_0->pw_dir) + sizeof("/.history");
 if ((VAR_1 = FUNC_2(VAR_2)) == ((void*)0))
  return ((void*)0);

 (void)FUNC_3(VAR_1, VAR_2, "%s/.history", VAR_0->pw_dir);
 return VAR_1;
}
