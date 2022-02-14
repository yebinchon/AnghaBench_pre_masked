
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_mode_change {scalar_t__ mode; int interval; int handle; int status; } ;
struct hci_dev {int name; } ;
struct hci_conn {scalar_t__ mode; int power_save; int pend; int interval; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static inline void FUNC_6(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_ev_mode_change *VAR_4 = (void *) VAR_3->data;
 struct hci_conn *VAR_5;

 FUNC_0("%s status %d", VAR_2->name, VAR_4->status);

 FUNC_3(VAR_2);

 VAR_5 = FUNC_2(VAR_2, FUNC_1(VAR_4->handle));
 if (VAR_5) {
  VAR_5->mode = VAR_4->mode;
  VAR_5->interval = FUNC_1(VAR_4->interval);

  if (!FUNC_5(VAR_1, &VAR_5->pend)) {
   if (VAR_5->mode == VAR_0)
    VAR_5->power_save = 1;
   else
    VAR_5->power_save = 0;
  }
 }

 FUNC_4(VAR_2);
}
