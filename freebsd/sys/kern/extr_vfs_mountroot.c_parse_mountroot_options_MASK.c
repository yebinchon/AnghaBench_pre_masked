
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mntarg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct mntarg* FUNC_1 (struct mntarg*,char*,char*,int) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*,int ) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static struct mntarg *
FUNC_6(struct mntarg *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 char *VAR_4, *VAR_5;
 char *VAR_6, *VAR_7;
 char *VAR_8;

 if (VAR_2 == ((void*)0) || VAR_2[0] == '\0')
  return (VAR_1);

 VAR_3 = VAR_8 = FUNC_4(VAR_2, VAR_0);
 if (VAR_8 == ((void*)0)) {
  return (VAR_1);
 }

 while((VAR_4 = FUNC_5(&VAR_3, ",")) != ((void*)0)) {
  if (VAR_4[0] == '\0')
   break;

  VAR_6 = FUNC_2(VAR_4, '=');
  if (VAR_6 != ((void*)0)) {
   *VAR_6 = '\0';
   ++VAR_6;
  }
  if( FUNC_3(VAR_4, "rw") == 0 ||
      FUNC_3(VAR_4, "noro") == 0) {





   continue;
  }
  VAR_5 = FUNC_4(VAR_4, VAR_0);
  VAR_7 = ((void*)0);
  if (VAR_6 != ((void*)0))
   VAR_7 = FUNC_4(VAR_6, VAR_0);

  VAR_1 = FUNC_1(VAR_1, VAR_5, VAR_7,
      (VAR_7 != ((void*)0) ? -1 : 0));
 }
 FUNC_0(VAR_8, VAR_0);
 return (VAR_1);
}
