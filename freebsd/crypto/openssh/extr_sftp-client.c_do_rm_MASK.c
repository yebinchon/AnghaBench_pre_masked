
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sftp_conn {int msg_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct sftp_conn*,scalar_t__) ;
 int FUNC_4 (struct sftp_conn*,scalar_t__,int ,char const*,int ) ;
 int FUNC_5 (char const*) ;

int
FUNC_6(struct sftp_conn *VAR_2, const char *VAR_3)
{
 u_int VAR_4, VAR_5;

 FUNC_0("Sending SSH2_FXP_REMOVE \"%s\"", VAR_3);

 VAR_5 = VAR_2->msg_id++;
 FUNC_4(VAR_2, VAR_5, VAR_0, VAR_3, FUNC_5(VAR_3));
 VAR_4 = FUNC_3(VAR_2, VAR_5);
 if (VAR_4 != VAR_1)
  FUNC_1("Couldn't delete file: %s", FUNC_2(VAR_4));
 return VAR_4 == VAR_1 ? 0 : -1;
}
