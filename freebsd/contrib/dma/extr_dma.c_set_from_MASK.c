
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue {char* sender; } ;
struct TYPE_2__ {char* masquerade_user; char* masquerade_host; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char const*,char const*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 () ;
 int * FUNC_3 (char const*,char) ;
 char* FUNC_4 (char const*) ;
 char* VAR_3 ;

__attribute__((used)) static char *
FUNC_5(struct queue *VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 char *VAR_7;

 if (VAR_5) {
  VAR_6 = VAR_5;
 } else if (FUNC_1("EMAIL") != ((void*)0)) {
  VAR_6 = FUNC_1("EMAIL");
 } else {
  if (VAR_1.masquerade_user)
   VAR_6 = VAR_1.masquerade_user;
  else
   VAR_6 = VAR_3;
 }

 if (!FUNC_3(VAR_6, '@')) {
  const char *VAR_8 = FUNC_2();

  if (VAR_1.masquerade_host)
   VAR_8 = VAR_1.masquerade_host;

  if (FUNC_0(&VAR_7, "%s@%s", VAR_6, VAR_8) <= 0)
   return (((void*)0));
 } else {
  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7 == ((void*)0))
   return (((void*)0));
 }

 if (FUNC_3(VAR_7, '\n') != ((void*)0)) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }

 VAR_4->sender = VAR_7;
 return (VAR_7);
}
