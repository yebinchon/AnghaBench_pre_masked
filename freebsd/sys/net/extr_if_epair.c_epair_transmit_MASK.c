
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct epair_dpcpu {int dummy; } ;


 struct epair_dpcpu* FUNC_0 (int ,struct epair_dpcpu*) ;
 int FUNC_1 (struct epair_dpcpu*) ;
 int FUNC_2 (struct epair_dpcpu*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_0, struct mbuf *VAR_1)
{
 struct epair_dpcpu *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(FUNC_3(VAR_0), VAR_2);
 FUNC_1(VAR_2);
 VAR_3 = FUNC_4(VAR_0, VAR_1);
 FUNC_2(VAR_2);
 return (VAR_3);
}
