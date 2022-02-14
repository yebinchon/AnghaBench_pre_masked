
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*,int ,char*,char*) ;
 int FUNC_2 (char const*,struct stat*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*) ;
 char const* FUNC_5 (char const*,int) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static const char *
FUNC_7(const char *VAR_4, char *VAR_5, int VAR_6)
{
 struct stat VAR_7;
 char *VAR_8, *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_4, &VAR_7);

 if (VAR_3 == VAR_0) do {

  if (VAR_10 == 0)
   break;

  VAR_9 = FUNC_4(VAR_5);
  if (VAR_9 == ((void*)0))
   return (((void*)0));

  VAR_8 = FUNC_3(VAR_4);
  if (VAR_8 == ((void*)0)) {
   FUNC_0(VAR_9);
   return (((void*)0));
  }

  VAR_10 = FUNC_1(((void*)0), "%s onetime%s %s", VAR_1, VAR_9,
      VAR_8);

  FUNC_0(VAR_8);
  FUNC_0(VAR_9);

  if (VAR_10) {

   if (VAR_2 == 0)
    FUNC_6("%s: Invalid parameters", VAR_4);
   return (((void*)0));
  }
 } while (0);

 return (FUNC_5(VAR_4, VAR_6));
}
