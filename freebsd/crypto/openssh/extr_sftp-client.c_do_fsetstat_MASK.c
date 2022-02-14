
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct sftp_conn {int msg_id; } ;
typedef int Attrib ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct sftp_conn*,scalar_t__) ;
 int FUNC_3 (struct sftp_conn*,scalar_t__,int ,int const*,scalar_t__,int *) ;

int
FUNC_4(struct sftp_conn *VAR_2, const u_char *VAR_3, u_int VAR_4,
    Attrib *VAR_5)
{
 u_int VAR_6, VAR_7;

 VAR_7 = VAR_2->msg_id++;
 FUNC_3(VAR_2, VAR_7, VAR_0, VAR_3,
     VAR_4, VAR_5);

 VAR_6 = FUNC_2(VAR_2, VAR_7);
 if (VAR_6 != VAR_1)
  FUNC_0("Couldn't fsetstat: %s", FUNC_1(VAR_6));

 return VAR_6 == VAR_1 ? 0 : -1;
}
