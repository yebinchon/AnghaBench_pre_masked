
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef scalar_t__ u32 ;
struct audit_context {int dummy; } ;
struct audit_buffer {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audit_buffer*) ;
 int FUNC_1 (struct audit_buffer*,char*,...) ;
 struct audit_buffer* FUNC_2 (struct audit_context*,int ,int ) ;
 int FUNC_3 (struct audit_buffer*,char*) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,char**,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct audit_context *VAR_2, pid_t VAR_3,
     uid_t VAR_4, uid_t VAR_5, unsigned int VAR_6,
     u32 VAR_7, char *VAR_8)
{
 struct audit_buffer *VAR_9;
 char *VAR_10 = ((void*)0);
 u32 VAR_11;
 int VAR_12 = 0;

 VAR_9 = FUNC_2(VAR_2, VAR_1, VAR_0);
 if (!VAR_9)
  return VAR_12;

 FUNC_1(VAR_9, "opid=%d oauid=%d ouid=%d oses=%d", VAR_3, VAR_4,
    VAR_5, VAR_6);
 if (VAR_7) {
  if (FUNC_5(VAR_7, &VAR_10, &VAR_11)) {
   FUNC_1(VAR_9, " obj=(none)");
   VAR_12 = 1;
  } else {
   FUNC_1(VAR_9, " obj=%s", VAR_10);
   FUNC_4(VAR_10, VAR_11);
  }
 }
 FUNC_1(VAR_9, " ocomm=");
 FUNC_3(VAR_9, VAR_8);
 FUNC_0(VAR_9);

 return VAR_12;
}
