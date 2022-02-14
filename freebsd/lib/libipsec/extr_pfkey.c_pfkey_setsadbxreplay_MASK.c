
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sadb_x_sa_replay {int sadb_x_sa_replay_replay; int sadb_x_sa_replay_exttype; int sadb_x_sa_replay_len; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sadb_x_sa_replay*,int ,int) ;

__attribute__((used)) static caddr_t
FUNC_2(caddr_t VAR_1, caddr_t VAR_2, uint32_t VAR_3)
{
 struct sadb_x_sa_replay *VAR_4;
 u_int VAR_5;

 VAR_4 = (struct sadb_x_sa_replay *)VAR_1;
 VAR_5 = sizeof(struct sadb_x_sa_replay);

 if (VAR_1 + VAR_5 > VAR_2)
  return (((void*)0));

 FUNC_1(VAR_4, 0, VAR_5);
 VAR_4->sadb_x_sa_replay_len = FUNC_0(VAR_5);
 VAR_4->sadb_x_sa_replay_exttype = VAR_0;

 VAR_4->sadb_x_sa_replay_replay = VAR_3 << 3;

 return (VAR_1 + VAR_5);
}
