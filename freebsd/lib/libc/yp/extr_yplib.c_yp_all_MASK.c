
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef scalar_t__ u_long ;
struct ypreq_nokey {char* domain; char* map; } ;
struct ypall_callback {scalar_t__ data; int foreach; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct dom_binding {struct sockaddr_in dom_server_addr; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (char*,struct dom_binding**) ;
 int FUNC_3 (struct dom_binding*) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int *,int ,int ,struct ypreq_nokey*,int ,scalar_t__*,struct timeval) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (struct sockaddr_in*,int ,int ,int*,int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,scalar_t__*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_11 (scalar_t__) ;
 int VAR_14 ;
 void* VAR_15 ;

int
FUNC_12(char *VAR_16, char *VAR_17, struct ypall_callback *VAR_18)
{
 struct ypreq_nokey VAR_19;
 struct dom_binding *VAR_20;
 struct timeval VAR_21;
 struct sockaddr_in VAR_22;
 CLIENT *VAR_23;
 u_long VAR_24, VAR_25;
 int VAR_26;
 int VAR_27 = 0;


 if (VAR_16 == ((void*)0) || !FUNC_9(VAR_16) ||
     VAR_17 == ((void*)0) || !FUNC_9(VAR_17))
  return (VAR_3);

 FUNC_0();
again:
 if (VAR_27 > VAR_0) {
  FUNC_1();
  return (VAR_6);
 }

 if (FUNC_2(VAR_16, &VAR_20) != 0) {
  FUNC_1();
  return (VAR_4);
 }

 VAR_21.tv_sec = VAR_11;
 VAR_21.tv_usec = 0;



 VAR_26 = VAR_1;
 VAR_22 = VAR_20->dom_server_addr;
 VAR_22.sin_port = 0;
 VAR_23 = FUNC_7(&VAR_22, VAR_8, VAR_9, &VAR_26, 0, 0);
 if (VAR_23 == ((void*)0)) {
  FUNC_1();
  FUNC_8("clnttcp_create failed\n");
  return (VAR_5);
 }

 VAR_19.domain = VAR_16;
 VAR_19.map = VAR_17;
 VAR_14 = VAR_18->foreach;
 VAR_15 = (void *)VAR_18->data;

 if (FUNC_4(VAR_23, VAR_7,
  (xdrproc_t)VAR_12, &VAR_19,
  (xdrproc_t)VAR_13, &VAR_24, VAR_21) != VAR_2) {
   FUNC_6(VAR_23, "yp_all: clnt_call");
   FUNC_5(VAR_23);
   FUNC_3(VAR_20);
   VAR_27++;
   goto again;
 }

 FUNC_5(VAR_23);
 VAR_25 = VAR_24;
 FUNC_10((xdrproc_t)VAR_13, &VAR_24);
 FUNC_1();
 if (VAR_25 != VAR_10)
  return (FUNC_11(VAR_25));
 return (0);
}
