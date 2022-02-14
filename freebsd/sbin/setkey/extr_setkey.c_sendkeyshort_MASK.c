
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct sadb_msg {int sadb_msg_pid; scalar_t__ sadb_msg_seq; scalar_t__ sadb_msg_reserved; int sadb_msg_len; int sadb_msg_satype; scalar_t__ sadb_msg_errno; int sadb_msg_type; int sadb_msg_version; } ;
typedef int msg ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(u_int VAR_1, uint8_t VAR_2)
{
 struct sadb_msg VAR_3;

 VAR_3.sadb_msg_version = VAR_0;
 VAR_3.sadb_msg_type = VAR_1;
 VAR_3.sadb_msg_errno = 0;
 VAR_3.sadb_msg_satype = VAR_2;
 VAR_3.sadb_msg_len = FUNC_0(sizeof(VAR_3));
 VAR_3.sadb_msg_reserved = 0;
 VAR_3.sadb_msg_seq = 0;
 VAR_3.sadb_msg_pid = FUNC_1();

 FUNC_2((char *)&VAR_3, sizeof(VAR_3));

 return;
}
