
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* xdrproc_t ;
typedef void* u_long ;
struct timeval {int dummy; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct rmtcallres {void** port_ptr; void* xdr_results; void* results_ptr; } ;
struct rmtcallargs {void* xdr_args; void* args_ptr; void* proc; void* vers; void* prog; } ;
typedef int rpcproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef void* caddr_t ;
typedef int CLIENT ;


 int FUNC_0 (int *,int ,void*,struct rmtcallargs*,void*,struct rmtcallres*,struct timeval) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct sockaddr_in*,int ,int ,int ,int*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

enum clnt_stat
FUNC_5(struct sockaddr_in *VAR_8, u_long VAR_9, u_long VAR_10, u_long VAR_11,
    xdrproc_t VAR_12, caddr_t VAR_13, xdrproc_t VAR_14, caddr_t VAR_15,
    struct timeval VAR_16, u_long *VAR_17)
{
 int VAR_18 = -1;
 CLIENT *VAR_19;
 struct rmtcallargs VAR_20;
 struct rmtcallres VAR_21;
 enum clnt_stat VAR_22;

 FUNC_2(VAR_8 != ((void*)0));
 FUNC_2(VAR_17 != ((void*)0));

 VAR_8->sin_port = FUNC_4(VAR_0);
 VAR_19 = FUNC_3(VAR_8, VAR_2, VAR_3, VAR_5, &VAR_18);
 if (VAR_19 != ((void*)0)) {
  VAR_20.prog = VAR_9;
  VAR_20.vers = VAR_10;
  VAR_20.proc = VAR_11;
  VAR_20.args_ptr = VAR_13;
  VAR_20.xdr_args = VAR_12;
  VAR_21.port_ptr = VAR_17;
  VAR_21.results_ptr = VAR_15;
  VAR_21.xdr_results = VAR_14;
  VAR_22 = FUNC_0(VAR_19, (rpcproc_t)VAR_1,
      (xdrproc_t)VAR_6, &VAR_20, (xdrproc_t)VAR_7,
      &VAR_21, VAR_16);
  FUNC_1(VAR_19);
 } else {
  VAR_22 = VAR_4;
 }
 VAR_8->sin_port = 0;
 return (VAR_22);
}
