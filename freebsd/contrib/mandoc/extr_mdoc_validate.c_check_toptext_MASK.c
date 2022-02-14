
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_man {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int ,int,int,char*,...) ;
 char* FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3(struct roff_man *VAR_2, int VAR_3, int VAR_4, const char *VAR_5)
{
 const char *VAR_6, *VAR_7;

 if (*VAR_5 == '\0')
  return;

 if ((VAR_6 = FUNC_2(VAR_5, "OpenBSD")) != ((void*)0))
  FUNC_1(VAR_0, VAR_3, VAR_4 + (int)(VAR_6 - VAR_5), "Ox");
 if ((VAR_6 = FUNC_2(VAR_5, "NetBSD")) != ((void*)0))
  FUNC_1(VAR_0, VAR_3, VAR_4 + (int)(VAR_6 - VAR_5), "Nx");
 if ((VAR_6 = FUNC_2(VAR_5, "FreeBSD")) != ((void*)0))
  FUNC_1(VAR_0, VAR_3, VAR_4 + (int)(VAR_6 - VAR_5), "Fx");
 if ((VAR_6 = FUNC_2(VAR_5, "DragonFly")) != ((void*)0))
  FUNC_1(VAR_0, VAR_3, VAR_4 + (int)(VAR_6 - VAR_5), "Dx");

 VAR_6 = VAR_5;
 while ((VAR_6 = FUNC_2(VAR_6 + 1, "()")) != ((void*)0)) {
  for (VAR_7 = VAR_6 - 1; VAR_7 >= VAR_5; VAR_7--)
   if (*VAR_7 != '_' && !FUNC_0((unsigned char)*VAR_7))
    break;
  if ((VAR_7 < VAR_5 || *VAR_7 == ' ') && VAR_7 + 1 < VAR_6) {
   VAR_7++;
   FUNC_1(VAR_1, VAR_3, VAR_4 + (int)(VAR_7 - VAR_5),
       "%.*s()", (int)(VAR_6 - VAR_7), VAR_7);
  }
 }
}
