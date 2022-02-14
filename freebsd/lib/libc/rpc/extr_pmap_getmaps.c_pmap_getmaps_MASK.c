
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct pmaplist {int dummy; } ;
typedef int rpcproc_t ;
typedef int CLIENT ;


 scalar_t__ FUNC_0 (int *,int ,int ,int *,int ,struct pmaplist**,struct timeval) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (struct sockaddr_in*,int ,int ,int*,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

struct pmaplist *
FUNC_6(struct sockaddr_in *VAR_7)
{
 struct pmaplist *VAR_8 = ((void*)0);
 int VAR_9 = -1;
 struct timeval VAR_10;
 CLIENT *VAR_11;

 FUNC_2(VAR_7 != ((void*)0));

 VAR_10.tv_sec = 60;
 VAR_10.tv_usec = 0;
 VAR_7->sin_port = FUNC_5(VAR_0);
 VAR_11 = FUNC_4(VAR_7, VAR_2,
     VAR_3, &VAR_9, 50, 500);
 if (VAR_11 != ((void*)0)) {
  if (FUNC_0(VAR_11, (rpcproc_t)VAR_1,
      (xdrproc_t)VAR_6, ((void*)0),
      (xdrproc_t)VAR_5, &VAR_8, VAR_10) !=
      VAR_4) {
   FUNC_3(VAR_11, "pmap_getmaps rpc problem");
  }
  FUNC_1(VAR_11);
 }
 VAR_7->sin_port = 0;
 return (VAR_8);
}
