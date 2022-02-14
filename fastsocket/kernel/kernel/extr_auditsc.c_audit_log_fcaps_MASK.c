
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fE; int inheritable; int permitted; } ;
struct audit_names {int fcap_ver; TYPE_1__ fcap; } ;
struct audit_buffer {int dummy; } ;
typedef int kernel_cap_t ;


 int FUNC_0 (struct audit_buffer*,char*,int *) ;
 int FUNC_1 (struct audit_buffer*,char*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct audit_buffer *VAR_0, struct audit_names *VAR_1)
{
 kernel_cap_t *VAR_2 = &VAR_1->fcap.permitted;
 kernel_cap_t *VAR_3 = &VAR_1->fcap.inheritable;
 int VAR_4 = 0;

 if (!FUNC_2(*VAR_2)) {
  FUNC_0(VAR_0, "cap_fp", VAR_2);
  VAR_4 = 1;
 }
 if (!FUNC_2(*VAR_3)) {
  FUNC_0(VAR_0, "cap_fi", VAR_3);
  VAR_4 = 1;
 }

 if (VAR_4)
  FUNC_1(VAR_0, " cap_fe=%d cap_fver=%x", VAR_1->fcap.fE, VAR_1->fcap_ver);
}
