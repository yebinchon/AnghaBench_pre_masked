
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ u_char ;
struct sshbuf {int dummy; } ;
typedef int buf ;


 int FUNC_0 (int ,int,scalar_t__*,int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (struct sshbuf*) ;
 scalar_t__* FUNC_5 (struct sshbuf*) ;
 int VAR_0 ;

int
FUNC_6(int VAR_1, u_char VAR_2, struct sshbuf *VAR_3)
{
 u_char VAR_4[5];
 u_int VAR_5 = FUNC_4(VAR_3);

 FUNC_1("ssh_msg_send: type %u", (unsigned int)VAR_2 & 0xff);

 FUNC_3(VAR_4, VAR_5 + 1);
 VAR_4[4] = VAR_2;
 if (FUNC_0(VAR_0, VAR_1, VAR_4, sizeof(VAR_4)) != sizeof(VAR_4)) {
  FUNC_2("ssh_msg_send: write");
  return (-1);
 }
 if (FUNC_0(VAR_0, VAR_1, FUNC_5(VAR_3), VAR_5) != VAR_5) {
  FUNC_2("ssh_msg_send: write");
  return (-1);
 }
 return (0);
}
