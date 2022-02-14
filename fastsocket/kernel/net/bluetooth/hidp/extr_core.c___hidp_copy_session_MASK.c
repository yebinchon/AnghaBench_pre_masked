
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hidp_session {TYPE_3__* hid; TYPE_2__* input; int state; int flags; int bdaddr; } ;
struct hidp_conninfo {int vendor; int product; int version; int name; int state; int flags; int bdaddr; } ;
struct TYPE_6__ {int vendor; int product; int version; char* name; } ;
struct TYPE_4__ {int vendor; int product; int version; } ;
struct TYPE_5__ {char* name; TYPE_1__ id; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct hidp_session *VAR_0, struct hidp_conninfo *VAR_1)
{
 FUNC_0(&VAR_1->bdaddr, &VAR_0->bdaddr);

 VAR_1->flags = VAR_0->flags;
 VAR_1->state = VAR_0->state;

 VAR_1->vendor = 0x0000;
 VAR_1->product = 0x0000;
 VAR_1->version = 0x0000;
 FUNC_1(VAR_1->name, 0, 128);

 if (VAR_0->input) {
  VAR_1->vendor = VAR_0->input->id.vendor;
  VAR_1->product = VAR_0->input->id.product;
  VAR_1->version = VAR_0->input->id.version;
  if (VAR_0->input->name)
   FUNC_2(VAR_1->name, VAR_0->input->name, 128);
  else
   FUNC_2(VAR_1->name, "HID Boot Device", 128);
 }

 if (VAR_0->hid) {
  VAR_1->vendor = VAR_0->hid->vendor;
  VAR_1->product = VAR_0->hid->product;
  VAR_1->version = VAR_0->hid->version;
  FUNC_2(VAR_1->name, VAR_0->hid->name, 128);
 }
}
