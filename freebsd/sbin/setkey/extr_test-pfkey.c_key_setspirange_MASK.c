
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sadb_spirange {int sadb_spirange_min; int sadb_spirange_max; scalar_t__ sadb_spirange_reserved; int sadb_spirange_exttype; int sadb_spirange_len; } ;
typedef int m_spi ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,struct sadb_spirange*,int) ;

void
FUNC_2()
{
 struct sadb_spirange VAR_3;

 VAR_3.sadb_spirange_len = FUNC_0(sizeof(VAR_3));
 VAR_3.sadb_spirange_exttype = VAR_0;
 VAR_3.sadb_spirange_min = 0x00001000;
 VAR_3.sadb_spirange_max = 0x00002000;
 VAR_3.sadb_spirange_reserved = 0;

 FUNC_1(VAR_1 + VAR_2, &VAR_3, sizeof(struct sadb_spirange));
 VAR_2 += sizeof(struct sadb_spirange);

 return;
}
