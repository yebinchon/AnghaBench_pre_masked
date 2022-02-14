
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct fxp_softc {struct fxp_cb_mcs* mcsp; } ;
struct fxp_cb_mcs {size_t mc_cnt; int * mc_addr; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ,size_t) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct fxp_softc *VAR_5 = VAR_2;
 struct fxp_cb_mcs *VAR_6 = VAR_5->mcsp;

 if (VAR_6->mc_cnt < VAR_1)
  FUNC_1(FUNC_0(VAR_3), VAR_6->mc_addr[VAR_6->mc_cnt * VAR_0],
      VAR_0);
 VAR_6->mc_cnt++;
 return (1);
}
