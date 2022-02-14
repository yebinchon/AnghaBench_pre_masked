
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mbuf {int dummy; } ;
struct ifnet {int if_bpf; } ;
typedef int af ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(struct ifnet *VAR_1, struct mbuf *VAR_2)
{
 u_int32_t VAR_3 = VAR_0;

 FUNC_0(VAR_1->if_bpf, &VAR_3, sizeof(VAR_3), VAR_2);
}
