
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int dummy; } ;
struct hast_resource {scalar_t__ hr_role; int hr_ctrl; scalar_t__ hr_metaflush; int hr_exec; scalar_t__ hr_timeout; scalar_t__ hr_compression; scalar_t__ hr_checksum; scalar_t__ hr_replication; int hr_sourceaddr; int hr_remoteaddr; } ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct nv**) ;
 int FUNC_2 (struct hast_resource const*,int ,struct nv*,int *,int ) ;
 int FUNC_3 (struct nv*,int ,char*) ;
 int FUNC_4 (struct nv*,int ,char*) ;
 int FUNC_5 (struct nv*,int ,char*) ;
 struct nv* FUNC_6 () ;
 scalar_t__ FUNC_7 (struct nv*) ;
 int FUNC_8 (struct nv*) ;
 int FUNC_9 (struct nv*,char*) ;
 int FUNC_10 (int ,int ,int,char*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(const struct hast_resource *VAR_3)
{
 struct nv *VAR_4, *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3->hr_role == VAR_1);

 VAR_5 = FUNC_6();
 FUNC_5(VAR_5, VAR_0, "cmd");
 FUNC_4(VAR_5, VAR_3->hr_remoteaddr, "remoteaddr");
 FUNC_4(VAR_5, VAR_3->hr_sourceaddr, "sourceaddr");
 FUNC_3(VAR_5, (int32_t)VAR_3->hr_replication, "replication");
 FUNC_3(VAR_5, (int32_t)VAR_3->hr_checksum, "checksum");
 FUNC_3(VAR_5, (int32_t)VAR_3->hr_compression, "compression");
 FUNC_3(VAR_5, (int32_t)VAR_3->hr_timeout, "timeout");
 FUNC_4(VAR_5, VAR_3->hr_exec, "exec");
 FUNC_3(VAR_5, (int32_t)VAR_3->hr_metaflush, "metaflush");
 if (FUNC_7(VAR_5) != 0) {
  FUNC_8(VAR_5);
  FUNC_12("Unable to allocate header for reload message.");
  return;
 }
 if (FUNC_2(VAR_3, VAR_3->hr_ctrl, VAR_5, ((void*)0), 0) == -1) {
  FUNC_11(VAR_2, "Unable to send reload message");
  FUNC_8(VAR_5);
  return;
 }
 FUNC_8(VAR_5);


 if (FUNC_1(VAR_3->hr_ctrl, &VAR_4) == -1) {
  FUNC_11(VAR_2, "Unable to receive reload reply");
  return;
 }
 VAR_6 = FUNC_9(VAR_4, "error");
 FUNC_8(VAR_4);
 if (VAR_6 != 0) {
  FUNC_10(VAR_2, 0, VAR_6, "Reload failed");
  return;
 }
}
