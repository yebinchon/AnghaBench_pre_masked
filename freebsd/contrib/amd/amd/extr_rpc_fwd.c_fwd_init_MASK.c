
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int * VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ FUNC_5 (char*,int,int ) ;

int
FUNC_6(void)
{
  VAR_9 = FUNC_4(VAR_0, VAR_6, 0);
  if (VAR_9 < 0) {
    FUNC_3(VAR_7, "unable to create RPC forwarding socket: %m");
    return VAR_8;
  }





  if (FUNC_0(VAR_9, (u_short *) ((void*)0)) < 0)
    FUNC_3(VAR_7, "can't bind privileged port (rpc_fwd)");

  if (FUNC_1(VAR_9, VAR_3, VAR_2) < 0



    ) {
    FUNC_3(VAR_7, "Can't set non-block on forwarding socket: %m");
    return VAR_8;
  }

  return 0;
}
