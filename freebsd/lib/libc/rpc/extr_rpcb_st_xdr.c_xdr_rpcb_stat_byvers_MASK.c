
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef scalar_t__ rpcb_stat_byvers ;
typedef int rpcb_stat ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int ,int,int ) ;

bool_t
FUNC_1(XDR *VAR_4, rpcb_stat_byvers VAR_5)
{
 if (!FUNC_0(VAR_4, (char *)(void *)VAR_5, VAR_1,
     sizeof (rpcb_stat), (xdrproc_t)VAR_3)) {
  return (VAR_0);
 }
 return (VAR_2);
}
