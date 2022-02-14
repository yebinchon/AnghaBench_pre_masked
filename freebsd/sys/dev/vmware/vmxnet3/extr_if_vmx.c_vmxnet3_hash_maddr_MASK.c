
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct vmxnet3_softc {int * vmx_mcast; } ;
struct sockaddr_dl {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int *,size_t) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct vmxnet3_softc *VAR_5 = VAR_2;

 if (VAR_4 < VAR_1)
  FUNC_1(FUNC_0(VAR_3), &VAR_5->vmx_mcast[VAR_4 * VAR_0],
      VAR_0);

 return (1);
}
