
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_6__ {int valdat_len; int valdat_val; } ;
struct ypresp_val {TYPE_2__ val; int stat; } ;
struct TYPE_5__ {char* keydat_val; int keydat_len; } ;
struct ypreq_key {char* domain; char* map; TYPE_1__ key; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct dom_binding {int dom_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,struct dom_binding**) ;
 int FUNC_3 (struct dom_binding*) ;
 int VAR_8 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ,int ,struct ypreq_key*,int ,struct ypresp_val*,struct timeval) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,struct ypresp_val*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_11 (struct dom_binding*,char*,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_12 (struct dom_binding*,char*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_13 (int ) ;

int
FUNC_14(char *VAR_11, char *VAR_12, const char *VAR_13, int VAR_14,
    char **VAR_15, int *VAR_16)
{
 struct dom_binding *VAR_17;
 struct ypresp_val VAR_18;
 struct timeval VAR_19;
 struct ypreq_key VAR_20;
 int VAR_21;
 int VAR_22 = 0;
 *VAR_15 = ((void*)0);
 *VAR_16 = 0;



 if (VAR_13 == ((void*)0) || !FUNC_9(VAR_13) || VAR_14 <= 0 ||
     VAR_12 == ((void*)0) || !FUNC_9(VAR_12) ||
     VAR_11 == ((void*)0) || !FUNC_9(VAR_11))
  return (VAR_3);

 FUNC_0();
 if (FUNC_2(VAR_11, &VAR_17) != 0) {
  FUNC_1();
  return(VAR_4);
 }

 VAR_20.domain = VAR_11;
 VAR_20.map = VAR_12;
 VAR_20.key.keydat_val = (char *)VAR_13;
 VAR_20.key.keydat_len = VAR_14;
again:
 if (VAR_22 > VAR_0) {
  FUNC_1();
  return (VAR_6);
 }

 if (FUNC_2(VAR_11, &VAR_17) != 0) {
  FUNC_1();
  return (VAR_4);
 }

 VAR_19.tv_sec = VAR_8;
 VAR_19.tv_usec = 0;

 FUNC_5((char *)&VAR_18, sizeof VAR_18);

 VAR_21 = FUNC_6(VAR_17->dom_client, VAR_7,
  (xdrproc_t)VAR_9, &VAR_20,
  (xdrproc_t)VAR_10, &VAR_18, VAR_19);
 if (VAR_21 != VAR_1) {
  FUNC_7(VAR_17->dom_client, "yp_match: clnt_call");
  FUNC_3(VAR_17);
  VAR_22++;
  goto again;
 }

 if (!(VAR_21 = FUNC_13(VAR_18.stat))) {
  *VAR_16 = VAR_18.val.valdat_len;
  *VAR_15 = (char *)FUNC_8(*VAR_16+1);
  if (*VAR_15 == ((void*)0)) {
   FUNC_3(VAR_17);
   *VAR_16 = 0;
   FUNC_10((xdrproc_t)VAR_10, &VAR_18);
   FUNC_1();
   return (VAR_5);
  }
  FUNC_4(VAR_18.val.valdat_val, *VAR_15, *VAR_16);
  (*VAR_15)[*VAR_16] = '\0';



 }

 FUNC_10((xdrproc_t)VAR_10, &VAR_18);
 FUNC_1();
 return (VAR_21);
}
