
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ idle_timeout; int flags; } ;
struct hci_cp_exit_sniff_mode {int handle; } ;
struct hci_conn {scalar_t__ mode; int idle_timer; int handle; int pend; int power_save; struct hci_dev* hdev; } ;
typedef int cp ;


 int FUNC_0 (char*,struct hci_conn*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,int ,int,struct hci_cp_exit_sniff_mode*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct hci_conn *VAR_5)
{
 struct hci_dev *VAR_6 = VAR_5->hdev;

 FUNC_0("conn %p mode %d", VAR_5, VAR_5->mode);

 if (FUNC_6(VAR_3, &VAR_6->flags))
  return;

 if (VAR_5->mode != VAR_0 || !VAR_5->power_save)
  goto timer;

 if (!FUNC_5(VAR_1, &VAR_5->pend)) {
  struct hci_cp_exit_sniff_mode VAR_7;
  VAR_7.handle = FUNC_1(VAR_5->handle);
  FUNC_2(VAR_6, VAR_2, sizeof(VAR_7), &VAR_7);
 }

timer:
 if (VAR_6->idle_timeout > 0)
  FUNC_3(&VAR_5->idle_timer,
   VAR_4 + FUNC_4(VAR_6->idle_timeout));
}
