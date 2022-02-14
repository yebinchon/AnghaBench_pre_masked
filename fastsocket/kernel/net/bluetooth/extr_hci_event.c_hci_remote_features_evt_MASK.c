
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_remote_features {int status; int handle; int features; } ;
struct hci_dev {scalar_t__ state; int features; int name; } ;
struct hci_cp_read_remote_ext_features {int page; int handle; } ;
struct hci_conn {scalar_t__ state; int features; int name; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct hci_dev* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*,int ,int,struct hci_cp_read_remote_ext_features*) ;
 scalar_t__ FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_10(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct hci_ev_remote_features *VAR_5 = (void *) VAR_4->data;
 struct hci_conn *VAR_6;

 FUNC_0("%s status %d", VAR_3->name, VAR_5->status);

 FUNC_4(VAR_3);

 VAR_6 = FUNC_2(VAR_3, FUNC_1(VAR_5->handle));
 if (VAR_6) {
  if (!VAR_5->status)
   FUNC_9(VAR_6->features, VAR_5->features, 8);

  if (VAR_6->state == VAR_0) {
   if (!VAR_5->status && FUNC_8(VAR_3) &&
      FUNC_8(VAR_6)) {
    struct hci_cp_read_remote_ext_features VAR_7;
    VAR_7.handle = VAR_5->handle;
    VAR_7.page = 0x01;
    FUNC_7(VAR_3,
     VAR_2,
       sizeof(VAR_7), &VAR_7);
   } else {
    VAR_6->state = VAR_1;
    FUNC_6(VAR_6, VAR_5->status);
    FUNC_3(VAR_6);
   }
  }
 }

 FUNC_5(VAR_3);
}
