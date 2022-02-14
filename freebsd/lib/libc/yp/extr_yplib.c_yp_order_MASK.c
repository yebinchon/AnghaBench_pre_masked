
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct ypresp_order {int ordernum; int stat; } ;
struct ypreq_nokey {char* domain; char* map; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct dom_binding {int dom_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,struct dom_binding**) ;
 int FUNC_3 (struct dom_binding*) ;
 int VAR_6 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ,int ,struct ypreq_nokey*,int ,struct ypresp_order*,struct timeval) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,struct ypresp_order*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int ) ;

int
FUNC_10(char *VAR_9, char *VAR_10, int *VAR_11)
{
  struct dom_binding *VAR_12;
 struct ypresp_order VAR_13;
 struct ypreq_nokey VAR_14;
 struct timeval VAR_15;
 int VAR_16;



 if (VAR_9 == ((void*)0) || !FUNC_7(VAR_9) ||
     VAR_10 == ((void*)0) || !FUNC_7(VAR_10))
  return (VAR_2);

 FUNC_0();
again:
 if (FUNC_2(VAR_9, &VAR_12) != 0) {
  FUNC_1();
  return (VAR_3);
 }

 VAR_15.tv_sec = VAR_6;
 VAR_15.tv_usec = 0;

 VAR_14.domain = VAR_9;
 VAR_14.map = VAR_10;

 FUNC_4((char *)(char *)&VAR_13, sizeof VAR_13);

 VAR_16 = FUNC_5(VAR_12->dom_client, VAR_5,
  (xdrproc_t)VAR_7, &VAR_14,
  (xdrproc_t)VAR_8, &VAR_13, VAR_15);





 if (VAR_16 == VAR_0) {
  FUNC_1();
  return(VAR_4);
 }

 if (VAR_16 != VAR_1) {
  FUNC_6(VAR_12->dom_client, "yp_order: clnt_call");
  FUNC_3(VAR_12);
  goto again;
 }

 if (!(VAR_16 = FUNC_9(VAR_13.stat))) {
  *VAR_11 = VAR_13.ordernum;
 }

 FUNC_8((xdrproc_t)VAR_8, &VAR_13);
 FUNC_1();
 return (VAR_16);
}
