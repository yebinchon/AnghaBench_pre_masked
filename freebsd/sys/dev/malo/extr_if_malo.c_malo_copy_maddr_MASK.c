
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct malo_copy_maddr_ctx {int nmc; scalar_t__ macs; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sockaddr_dl*) ;
 int VAR_1 ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct malo_copy_maddr_ctx *VAR_5 = VAR_2;

 if (VAR_5->nmc == VAR_1)
  return (0);

 FUNC_0(VAR_5->macs + (VAR_5->nmc * VAR_0),
     FUNC_1(VAR_3));
 VAR_5->nmc++;

 return (1);
}
