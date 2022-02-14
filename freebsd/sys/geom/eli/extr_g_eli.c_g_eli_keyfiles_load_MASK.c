
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct hmac_ctx {int dummy; } ;
typedef int name ;


 int FUNC_0 (int,char*,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct hmac_ctx*,int *,size_t) ;
 int * FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;
 char* FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,int,char*,char const*,...) ;

__attribute__((used)) static int
FUNC_7(struct hmac_ctx *VAR_1, const char *VAR_2)
{
 u_char *VAR_3, *VAR_4;
 char *VAR_5, VAR_6[64];
 size_t VAR_7;
 int VAR_8;

 for (VAR_8 = 0; ; VAR_8++) {
  FUNC_6(VAR_6, sizeof(VAR_6), "%s:geli_keyfile%d", VAR_2, VAR_8);
  VAR_3 = FUNC_4(VAR_6);
  if (VAR_3 == ((void*)0) && VAR_8 == 0) {



   FUNC_6(VAR_6, sizeof(VAR_6), "%s:geli_keyfile", VAR_2);
   VAR_3 = FUNC_4(VAR_6);
  }
  if (VAR_3 == ((void*)0))
   return (VAR_8);
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4 == ((void*)0)) {
   FUNC_0(0, "Cannot find key file data for %s.",
       VAR_6);
   return (0);
  }
  VAR_7 = FUNC_3(VAR_3);
  if (VAR_7 == 0) {
   FUNC_0(0, "Cannot find key file size for %s.",
       VAR_6);
   return (0);
  }
  VAR_5 = FUNC_5(VAR_3, VAR_0);
  if (VAR_5 == ((void*)0)) {
   FUNC_0(0, "Cannot find key file name for %s.",
       VAR_6);
   return (0);
  }
  FUNC_0(1, "Loaded keyfile %s for %s (type: %s).", VAR_5,
      VAR_2, VAR_6);
  FUNC_1(VAR_1, VAR_4, VAR_7);
 }
}
