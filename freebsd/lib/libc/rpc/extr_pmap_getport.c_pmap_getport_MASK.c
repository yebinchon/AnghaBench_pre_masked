
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef scalar_t__ u_short ;
typedef void* u_long ;
typedef int u_int ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct pmap {scalar_t__ pm_port; int pm_prot; void* pm_vers; void* pm_prog; } ;
typedef int rpcproc_t ;
struct TYPE_2__ {int cf_stat; int cf_error; } ;
typedef int CLIENT ;


 scalar_t__ FUNC_0 (int *,int ,int ,struct pmap*,int ,scalar_t__*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (struct sockaddr_in*,int ,int ,int ,int*,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

u_short
FUNC_6(struct sockaddr_in *VAR_13, u_long VAR_14, u_long VAR_15,
    u_int VAR_16)
{
 u_short VAR_17 = 0;
 int VAR_18 = -1;
 CLIENT *VAR_19;
 struct pmap VAR_20;

 FUNC_2(VAR_13 != ((void*)0));

 VAR_13->sin_port = FUNC_5(VAR_0);
 VAR_19 = FUNC_4(VAR_13, VAR_2,
     VAR_3, VAR_9, &VAR_18, VAR_4, VAR_4);
 if (VAR_19 != ((void*)0)) {
  VAR_20.pm_prog = VAR_14;
  VAR_20.pm_vers = VAR_15;
  VAR_20.pm_prot = VAR_16;
  VAR_20.pm_port = 0;
  if (FUNC_0(VAR_19, (rpcproc_t)VAR_1,
      (xdrproc_t)VAR_11,
      &VAR_20, (xdrproc_t)VAR_12, &VAR_17, VAR_10) !=
      VAR_7){
   VAR_8.cf_stat = VAR_5;
   FUNC_3(VAR_19, &VAR_8.cf_error);
  } else if (VAR_17 == 0) {
   VAR_8.cf_stat = VAR_6;
  }
  FUNC_1(VAR_19);
 }
 VAR_13->sin_port = 0;
 return (VAR_17);
}
