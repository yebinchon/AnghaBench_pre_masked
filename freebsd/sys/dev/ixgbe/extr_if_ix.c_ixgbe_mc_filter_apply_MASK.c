
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sockaddr_dl {int dummy; } ;
struct ixgbe_mc_addr {int vmdq; int addr; } ;
struct adapter {int pool; struct ixgbe_mc_addr* mta; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct adapter *VAR_5 = VAR_2;
 struct ixgbe_mc_addr *VAR_6 = VAR_5->mta;

 if (VAR_4 == VAR_1)
  return (0);
 FUNC_1(FUNC_0(VAR_3), VAR_6[VAR_4].addr, VAR_0);
 VAR_6[VAR_4].vmdq = VAR_5->pool;

 return (1);
}
