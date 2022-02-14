
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sftp_conn {scalar_t__ version; int msg_id; } ;
typedef int Attrib ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (struct sftp_conn*,char const*,int) ;
 int * FUNC_2 (struct sftp_conn*,scalar_t__,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sftp_conn*,scalar_t__,int ,char const*,int ) ;
 int FUNC_5 (char const*) ;

Attrib *
FUNC_6(struct sftp_conn *VAR_1, const char *VAR_2, int VAR_3)
{
 u_int VAR_4;

 if (VAR_1->version == 0) {
  if (VAR_3)
   FUNC_0("Server version does not support lstat operation");
  else
   FUNC_3("Server version does not support lstat operation");
  return(FUNC_1(VAR_1, VAR_2, VAR_3));
 }

 VAR_4 = VAR_1->msg_id++;
 FUNC_4(VAR_1, VAR_4, VAR_0, VAR_2,
     FUNC_5(VAR_2));

 return(FUNC_2(VAR_1, VAR_4, VAR_3));
}
