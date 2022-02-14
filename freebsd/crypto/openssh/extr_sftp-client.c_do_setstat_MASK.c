
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sftp_conn {int msg_id; } ;
typedef int Attrib ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*,char*) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct sftp_conn*,scalar_t__) ;
 int FUNC_3 (struct sftp_conn*,scalar_t__,int ,char const*,int ,int *) ;
 int FUNC_4 (char const*) ;

int
FUNC_5(struct sftp_conn *VAR_2, const char *VAR_3, Attrib *VAR_4)
{
 u_int VAR_5, VAR_6;

 VAR_6 = VAR_2->msg_id++;
 FUNC_3(VAR_2, VAR_6, VAR_0, VAR_3,
     FUNC_4(VAR_3), VAR_4);

 VAR_5 = FUNC_2(VAR_2, VAR_6);
 if (VAR_5 != VAR_1)
  FUNC_0("Couldn't setstat on \"%s\": %s", VAR_3,
      FUNC_1(VAR_5));

 return VAR_5 == VAR_1 ? 0 : -1;
}
