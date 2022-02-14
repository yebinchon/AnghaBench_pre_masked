
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sadb_msg {scalar_t__ sadb_msg_type; int sadb_msg_satype; int sadb_msg_len; int sadb_msg_pid; scalar_t__ sadb_msg_seq; scalar_t__ sadb_msg_reserved; scalar_t__ sadb_msg_errno; int sadb_msg_version; } ;
typedef int ssize_t ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sadb_msg*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int*,int,int ) ;
 int FUNC_9 (int ,struct sadb_msg*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_10()
{
 struct sadb_msg VAR_6;
 u_char VAR_7[1024 * 32];
 ssize_t VAR_8;

 VAR_6.sadb_msg_version = VAR_1;
 VAR_6.sadb_msg_type = VAR_2;
 VAR_6.sadb_msg_errno = 0;
 VAR_6.sadb_msg_satype = 1;
 VAR_6.sadb_msg_len = FUNC_0(sizeof(VAR_6));
 VAR_6.sadb_msg_reserved = 0;
 VAR_6.sadb_msg_seq = 0;
 VAR_6.sadb_msg_pid = FUNC_4();

 if ((VAR_8 = FUNC_9(VAR_4, &VAR_6, sizeof(VAR_6), 0)) < 0) {
  FUNC_2(1, "send");

 }

 while (1) {
  struct sadb_msg *VAR_9;

  if ((VAR_8 = FUNC_8(VAR_4, VAR_7, sizeof(*VAR_9), VAR_0)) < 0) {
   FUNC_2(1, "recv");

  }

  if (VAR_8 != sizeof(*VAR_9))
   continue;

  VAR_9 = (struct sadb_msg *)VAR_7;
  if ((VAR_8 = FUNC_8(VAR_4, VAR_7, FUNC_1(VAR_9->sadb_msg_len),
    0)) < 0) {
   FUNC_2(1, "recv");

  }
  FUNC_6();
  if (VAR_3) {
   int VAR_10;
   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
    if (VAR_10 % 16 == 0)
     FUNC_7("%08x: ", VAR_10);
    FUNC_7("%02x ", VAR_7[VAR_10] & 0xff);
    if (VAR_10 % 16 == 15)
     FUNC_7("\n");
   }
   if (VAR_8 % 16)
    FUNC_7("\n");
  }

  if (VAR_9->sadb_msg_type == VAR_2) {
   if ((ssize_t)sizeof(*VAR_9) < VAR_8)
    VAR_9++;
   else
    VAR_9 = ((void*)0);
  }
  if (VAR_9) {
   FUNC_5(VAR_9);
   FUNC_7("\n");
   FUNC_3(VAR_5);
  }
 }
}
