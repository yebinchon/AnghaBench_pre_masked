
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char const* pw_dir; } ;
typedef int pwbuf ;


 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*) ;
 struct passwd* FUNC_2 (char*) ;
 struct passwd* FUNC_3 (char*,struct passwd*,char*,int,...) ;
 struct passwd* FUNC_4 (int ) ;
 struct passwd* FUNC_5 (int ,struct passwd*,char*,int,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,size_t,char*,char const*,char const*) ;
 char* FUNC_8 (char const*,char) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,char const*,size_t) ;

char *
FUNC_12(const char *VAR_0)
{




 struct passwd *VAR_1;
 char *VAR_2;
 size_t VAR_3 = 0;

 if (VAR_0[0] != '~')
  return FUNC_9(VAR_0);

 VAR_2 = FUNC_8(VAR_0 + 1, '/');
 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_9(VAR_0 + 1);
  if (VAR_2 == ((void*)0))
   return ((void*)0);
 } else {

  VAR_3 = (size_t)(VAR_2 - VAR_0 + 1);
  VAR_2 = FUNC_0(VAR_3, sizeof(*VAR_2));
  if (VAR_2 == ((void*)0))
   return ((void*)0);
  (void)FUNC_11(VAR_2, VAR_0 + 1, VAR_3 - 2);
  VAR_2[VAR_3 - 2] = '\0';
 }
 if (VAR_2[0] == 0) {







  VAR_1 = FUNC_4(FUNC_6());

 } else {






  VAR_1 = FUNC_2(VAR_2);

 }
 FUNC_1(VAR_2);
 if (VAR_1 == ((void*)0))
  return FUNC_9(VAR_0);



 VAR_0 += VAR_3;

 VAR_3 = FUNC_10(VAR_1->pw_dir) + 1 + FUNC_10(VAR_0) + 1;
 VAR_2 = FUNC_0(VAR_3, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 (void)FUNC_7(VAR_2, VAR_3, "%s/%s", VAR_1->pw_dir, VAR_0);

 return VAR_2;
}
