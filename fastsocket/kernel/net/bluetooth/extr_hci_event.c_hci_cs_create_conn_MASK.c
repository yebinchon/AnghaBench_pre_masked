
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct hci_cp_create_conn {int bdaddr; } ;
struct hci_conn {scalar_t__ state; int attempt; int out; int link_mode; } ;
typedef int __u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,int,...) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int *) ;
 int FUNC_4 (struct hci_conn*) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int ,int *) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_conn*,int) ;
 struct hci_cp_create_conn* FUNC_9 (struct hci_dev*,int ) ;

__attribute__((used)) static inline void FUNC_10(struct hci_dev *VAR_6, __u8 VAR_7)
{
 struct hci_cp_create_conn *VAR_8;
 struct hci_conn *VAR_9;

 FUNC_0("%s status 0x%x", VAR_6->name, VAR_7);

 VAR_8 = FUNC_9(VAR_6, VAR_5);
 if (!VAR_8)
  return;

 FUNC_6(VAR_6);

 VAR_9 = FUNC_5(VAR_6, VAR_0, &VAR_8->bdaddr);

 FUNC_0("%s bdaddr %s conn %p", VAR_6->name, FUNC_2(&VAR_8->bdaddr), VAR_9);

 if (VAR_7) {
  if (VAR_9 && VAR_9->state == VAR_2) {
   if (VAR_7 != 0x0c || VAR_9->attempt > 2) {
    VAR_9->state = VAR_1;
    FUNC_8(VAR_9, VAR_7);
    FUNC_4(VAR_9);
   } else
    VAR_9->state = VAR_3;
  }
 } else {
  if (!VAR_9) {
   VAR_9 = FUNC_3(VAR_6, VAR_0, &VAR_8->bdaddr);
   if (VAR_9) {
    VAR_9->out = 1;
    VAR_9->link_mode |= VAR_4;
   } else
    FUNC_1("No memmory for new connection");
  }
 }

 FUNC_7(VAR_6);
}
