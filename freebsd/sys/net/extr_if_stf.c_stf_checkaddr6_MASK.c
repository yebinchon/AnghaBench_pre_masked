
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stf_softc {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int in4 ;


 int FUNC_0 (struct in6_addr*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 scalar_t__ FUNC_2 (struct in6_addr*) ;
 scalar_t__ FUNC_3 (struct in6_addr*) ;
 int FUNC_4 (int ,struct in_addr*,int) ;
 int FUNC_5 (struct stf_softc*,struct in_addr*,struct ifnet*) ;

__attribute__((used)) static int
FUNC_6(struct stf_softc *VAR_0, struct in6_addr *VAR_1, struct ifnet *VAR_2)
{



 if (FUNC_1(VAR_1)) {
  struct in_addr VAR_3;
  FUNC_4(FUNC_0(VAR_1), &VAR_3, sizeof(VAR_3));
  return FUNC_5(VAR_0, &VAR_3, VAR_2);
 }







 if (FUNC_2(VAR_1) || FUNC_3(VAR_1))
  return -1;

 return 0;
}
