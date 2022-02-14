
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int ssp_mode; } ;
struct inquiry_entry {TYPE_1__ data; } ;
struct hci_ev_remote_ext_features {int page; int* features; int status; int handle; } ;
struct hci_dev {scalar_t__ ssp_mode; int name; } ;
struct hci_cp_auth_requested {int handle; } ;
struct hci_conn {int ssp_mode; scalar_t__ state; scalar_t__ sec_level; scalar_t__ out; int dst; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_conn*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 struct inquiry_entry* FUNC_6 (struct hci_dev*,int *) ;
 int FUNC_7 (struct hci_conn*,int ) ;
 int FUNC_8 (struct hci_dev*,int ,int,struct hci_cp_auth_requested*) ;

__attribute__((used)) static inline void FUNC_9(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct hci_ev_remote_ext_features *VAR_6 = (void *) VAR_5->data;
 struct hci_conn *VAR_7;

 FUNC_0("%s", VAR_4->name);

 FUNC_4(VAR_4);

 VAR_7 = FUNC_2(VAR_4, FUNC_1(VAR_6->handle));
 if (VAR_7) {
  if (!VAR_6->status && VAR_6->page == 0x01) {
   struct inquiry_entry *VAR_8;

   if ((VAR_8 = FUNC_6(VAR_4, &VAR_7->dst)))
    VAR_8->data.ssp_mode = (VAR_6->features[0] & 0x01);

   VAR_7->ssp_mode = (VAR_6->features[0] & 0x01);
  }

  if (VAR_7->state == VAR_0) {
   if (!VAR_6->status && VAR_4->ssp_mode > 0 &&
     VAR_7->ssp_mode > 0 && VAR_7->out &&
     VAR_7->sec_level != VAR_2) {
    struct hci_cp_auth_requested VAR_9;
    VAR_9.handle = VAR_6->handle;
    FUNC_8(VAR_4, VAR_3,
       sizeof(VAR_9), &VAR_9);
   } else {
    VAR_7->state = VAR_1;
    FUNC_7(VAR_7, VAR_6->status);
    FUNC_3(VAR_7);
   }
  }
 }

 FUNC_5(VAR_4);
}
