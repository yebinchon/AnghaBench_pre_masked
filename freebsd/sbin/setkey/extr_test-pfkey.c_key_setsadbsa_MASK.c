
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sadb_sa {int sadb_sa_replay; scalar_t__ sadb_sa_flags; int sadb_sa_encrypt; int sadb_sa_auth; scalar_t__ sadb_sa_state; int sadb_sa_spi; int sadb_sa_exttype; int sadb_sa_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,struct sadb_sa*,int) ;

void
FUNC_3()
{
 struct sadb_sa VAR_5;

 VAR_5.sadb_sa_len = FUNC_0(sizeof(struct sadb_sa));
 VAR_5.sadb_sa_exttype = VAR_2;
 VAR_5.sadb_sa_spi = FUNC_1(0x12345678);
 VAR_5.sadb_sa_replay = 4;
 VAR_5.sadb_sa_state = 0;
 VAR_5.sadb_sa_auth = VAR_0;
 VAR_5.sadb_sa_encrypt = VAR_1;
 VAR_5.sadb_sa_flags = 0;

 FUNC_2(VAR_3 + VAR_4, &VAR_5, sizeof(struct sadb_sa));
 VAR_4 += sizeof(struct sadb_sa);

 return;
}
