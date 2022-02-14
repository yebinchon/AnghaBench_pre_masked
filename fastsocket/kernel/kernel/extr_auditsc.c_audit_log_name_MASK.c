
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct audit_names {int name_len; unsigned long ino; int type; int osid; int rdev; int gid; int uid; int mode; int dev; TYPE_1__* name; } ;
struct audit_context {int pwd; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_2__ {int name; } ;



 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct audit_buffer*,char*,int *) ;
 int FUNC_3 (struct audit_buffer*) ;
 int FUNC_4 (struct audit_buffer*,struct audit_names*) ;
 int FUNC_5 (struct audit_buffer*,char*,...) ;
 int FUNC_6 (struct audit_buffer*,int ,int) ;
 struct audit_buffer* FUNC_7 (struct audit_context*,int ,int ) ;
 int FUNC_8 (struct audit_buffer*,int ) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (int ,char**,int *) ;

__attribute__((used)) static void FUNC_11(struct audit_context *VAR_2, struct audit_names *VAR_3,
      int VAR_4, int *VAR_5)
{
 struct audit_buffer *VAR_6;
 VAR_6 = FUNC_7(VAR_2, VAR_1, VAR_0);
 if (!VAR_6)
  return;

 FUNC_5(VAR_6, "item=%d", VAR_4);

 if (VAR_3->name) {
  switch (VAR_3->name_len) {
  case 132:

   FUNC_5(VAR_6, " name=");
   FUNC_8(VAR_6, VAR_3->name->name);
   break;
  case 0:


   FUNC_2(VAR_6, "name=", &VAR_2->pwd);
   break;
  default:

   FUNC_5(VAR_6, " name=");
   FUNC_6(VAR_6, VAR_3->name->name,
          VAR_3->name_len);
  }
 } else
  FUNC_5(VAR_6, " name=(null)");

 if (VAR_3->ino != (unsigned long)-1) {
  FUNC_5(VAR_6, " inode=%lu"
     " dev=%02x:%02x mode=%#o"
     " ouid=%u ogid=%u rdev=%02x:%02x",
     VAR_3->ino,
     FUNC_0(VAR_3->dev),
     FUNC_1(VAR_3->dev),
     VAR_3->mode,
     VAR_3->uid,
     VAR_3->gid,
     FUNC_0(VAR_3->rdev),
     FUNC_1(VAR_3->rdev));
 }
 if (VAR_3->osid != 0) {
  char *VAR_7 = ((void*)0);
  u32 VAR_8;
  if (FUNC_10(
   VAR_3->osid, &VAR_7, &VAR_8)) {
   FUNC_5(VAR_6, " osid=%u", VAR_3->osid);
   *VAR_5 = 2;
  } else {
   FUNC_5(VAR_6, " obj=%s", VAR_7);
   FUNC_9(VAR_7, VAR_8);
  }
 }


 FUNC_5(VAR_6, " nametype=");
 switch(VAR_3->type) {
 case 129:
  FUNC_5(VAR_6, "NORMAL");
  break;
 case 128:
  FUNC_5(VAR_6, "PARENT");
  break;
 case 130:
  FUNC_5(VAR_6, "DELETE");
  break;
 case 131:
  FUNC_5(VAR_6, "CREATE");
  break;
 default:
  FUNC_5(VAR_6, "UNKNOWN");
  break;
 }

 FUNC_4(VAR_6, VAR_3);

 FUNC_3(VAR_6);
}
