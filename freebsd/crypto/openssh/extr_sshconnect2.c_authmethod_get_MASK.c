
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {char* preferred_authentications; } ;
typedef int Authmethod ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int * VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*,int *) ;
 TYPE_1__ VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 char* VAR_3 ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static Authmethod *
FUNC_9(char *VAR_4)
{
 char *VAR_5 = ((void*)0);
 u_int VAR_6;


 if (VAR_4 == ((void*)0) || FUNC_7(VAR_4) == 0)
  VAR_4 = VAR_1.preferred_authentications;

 if (VAR_3 == ((void*)0) || FUNC_6(VAR_4, VAR_3) != 0) {
  FUNC_3("start over, passed a different list %s", VAR_4);
  FUNC_4(VAR_3);
  VAR_3 = FUNC_8(VAR_4);
  VAR_2 = VAR_1.preferred_authentications;
  FUNC_3("preferred %s", VAR_2);
  VAR_0 = ((void*)0);
 } else if (VAR_0 != ((void*)0) && FUNC_0(VAR_0))
  return VAR_0;

 for (;;) {
  if ((VAR_5 = FUNC_5(VAR_2, VAR_3, &VAR_6)) == ((void*)0)) {
   FUNC_2("No more authentication methods to try.");
   VAR_0 = ((void*)0);
   return ((void*)0);
  }
  VAR_2 += VAR_6;
  FUNC_3("authmethod_lookup %s", VAR_5);
  FUNC_3("remaining preferred: %s", VAR_2);
  if ((VAR_0 = FUNC_1(VAR_5)) != ((void*)0) &&
      FUNC_0(VAR_0)) {
   FUNC_3("authmethod_is_enabled %s", VAR_5);
   FUNC_2("Next authentication method: %s", VAR_5);
   FUNC_4(VAR_5);
   return VAR_0;
  }
  FUNC_4(VAR_5);
 }
}
