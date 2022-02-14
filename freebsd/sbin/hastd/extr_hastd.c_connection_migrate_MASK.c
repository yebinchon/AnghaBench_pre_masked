
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct proto_conn {int dummy; } ;
struct hast_resource {scalar_t__ hr_role; char* hr_sourceaddr; int hr_conn; int hr_remoteaddr; int hr_name; } ;
typedef scalar_t__ int16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,int ,struct proto_conn**) ;
 int FUNC_4 (struct proto_conn*) ;
 int FUNC_5 (struct proto_conn*,int) ;
 int FUNC_6 (int ,struct proto_conn*) ;
 int FUNC_7 (int ,scalar_t__*,int) ;
 int FUNC_8 (int ,scalar_t__*,int) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void
FUNC_10(struct hast_resource *VAR_3)
{
 struct proto_conn *VAR_4;
 int16_t VAR_5 = 0;

 FUNC_2("[%s] (%s) ", VAR_3->hr_name, FUNC_9(VAR_3->hr_role));

 FUNC_0(VAR_3->hr_role == VAR_0);

 if (FUNC_7(VAR_3->hr_conn, &VAR_5, sizeof(VAR_5)) == -1) {
  FUNC_1(VAR_1,
      "Unable to receive connection command");
  return;
 }
 if (FUNC_3(VAR_3->hr_sourceaddr[0] != '\0' ? VAR_3->hr_sourceaddr : ((void*)0),
     VAR_3->hr_remoteaddr, &VAR_4) == -1) {
  VAR_5 = VAR_2;
  FUNC_1(VAR_1,
      "Unable to create outgoing connection to %s",
      VAR_3->hr_remoteaddr);
  goto out;
 }
 if (FUNC_5(VAR_4, -1) == -1) {
  VAR_5 = VAR_2;
  FUNC_1(VAR_1, "Unable to connect to %s",
      VAR_3->hr_remoteaddr);
  FUNC_4(VAR_4);
  goto out;
 }
 VAR_5 = 0;
out:
 if (FUNC_8(VAR_3->hr_conn, &VAR_5, sizeof(VAR_5)) == -1) {
  FUNC_1(VAR_1,
      "Unable to send reply to connection request");
 }
 if (VAR_5 == 0 && FUNC_6(VAR_3->hr_conn, VAR_4) == -1)
  FUNC_1(VAR_1, "Unable to send connection");

 FUNC_2("%s", "");
}
