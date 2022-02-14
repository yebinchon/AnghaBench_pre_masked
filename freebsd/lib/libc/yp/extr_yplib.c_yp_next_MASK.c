
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_6__ {int valdat_len; int valdat_val; } ;
struct TYPE_5__ {int keydat_len; int keydat_val; } ;
struct ypresp_key_val {TYPE_3__ val; TYPE_2__ key; int stat; } ;
struct TYPE_4__ {char* keydat_val; int keydat_len; } ;
struct ypreq_key {char* domain; char* map; TYPE_1__ key; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct dom_binding {int dom_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,struct dom_binding**) ;
 int FUNC_3 (struct dom_binding*) ;
 int VAR_7 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ,int ,struct ypreq_key*,int ,struct ypresp_key_val*,struct timeval) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,struct ypresp_key_val*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (int ) ;

int
FUNC_13(char *VAR_10, char *VAR_11, char *VAR_12, int VAR_13,
    char **VAR_14, int *VAR_15, char **VAR_16, int *VAR_17)
{
 struct ypresp_key_val VAR_18;
 struct ypreq_key VAR_19;
 struct dom_binding *VAR_20;
 struct timeval VAR_21;
 int VAR_22;
 int VAR_23 = 0;


 if (VAR_12 == ((void*)0) || !FUNC_10(VAR_12) || VAR_13 <= 0 ||
     VAR_11 == ((void*)0) || !FUNC_10(VAR_11) ||
     VAR_10 == ((void*)0) || !FUNC_10(VAR_10))
  return (VAR_2);

 *VAR_14 = *VAR_16 = ((void*)0);
 *VAR_15 = *VAR_17 = 0;

 FUNC_0();
again:
 if (VAR_23 > VAR_0) {
  FUNC_1();
  return (VAR_5);
 }

 if (FUNC_2(VAR_10, &VAR_20) != 0) {
  FUNC_1();
  return (VAR_3);
 }

 VAR_21.tv_sec = VAR_7;
 VAR_21.tv_usec = 0;

 VAR_19.domain = VAR_10;
 VAR_19.map = VAR_11;
 VAR_19.key.keydat_val = VAR_12;
 VAR_19.key.keydat_len = VAR_13;
 FUNC_5((char *)&VAR_18, sizeof VAR_18);

 VAR_22 = FUNC_6(VAR_20->dom_client, VAR_6,
  (xdrproc_t)VAR_8, &VAR_19,
  (xdrproc_t)VAR_9, &VAR_18, VAR_21);
 if (VAR_22 != VAR_1) {
  FUNC_7(VAR_20->dom_client, "yp_next: clnt_call");
  FUNC_3(VAR_20);
  VAR_23++;
  goto again;
 }
 if (!(VAR_22 = FUNC_12(VAR_18.stat))) {
  *VAR_15 = VAR_18.key.keydat_len;
  *VAR_14 = (char *)FUNC_9(*VAR_15+1);
  if (*VAR_14 == ((void*)0)) {
   FUNC_3(VAR_20);
   *VAR_15 = 0;
   FUNC_11((xdrproc_t)VAR_9, &VAR_18);
   FUNC_1();
   return (VAR_4);
  }
  FUNC_4(VAR_18.key.keydat_val, *VAR_14, *VAR_15);
  (*VAR_14)[*VAR_15] = '\0';
  *VAR_17 = VAR_18.val.valdat_len;
  *VAR_16 = (char *)FUNC_9(*VAR_17+1);
  if (*VAR_16 == ((void*)0)) {
   FUNC_8(*VAR_14);
   FUNC_3(VAR_20);
   *VAR_15 = *VAR_17 = 0;
   FUNC_11((xdrproc_t)VAR_9, &VAR_18);
   FUNC_1();
   return (VAR_4);
  }
  FUNC_4(VAR_18.val.valdat_val, *VAR_16, *VAR_17);
  (*VAR_16)[*VAR_17] = '\0';
 }

 FUNC_11((xdrproc_t)VAR_9, &VAR_18);
 FUNC_1();
 return (VAR_22);
}
