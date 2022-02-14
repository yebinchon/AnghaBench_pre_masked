
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ mode; int link_policy; int handle; int sniff_max_interval; int sniff_min_interval; int pend; int flags; struct hci_dev* hdev; } ;
struct hci_cp_sniff_subrate {void* timeout; void* attempt; void* min_interval; void* max_interval; void* handle; void* min_local_timeout; void* min_remote_timeout; void* max_latency; } ;
struct hci_cp_sniff_mode {void* timeout; void* attempt; void* min_interval; void* max_interval; void* handle; void* min_local_timeout; void* min_remote_timeout; void* max_latency; } ;
struct hci_conn {scalar_t__ mode; int link_policy; int handle; int sniff_max_interval; int sniff_min_interval; int pend; int flags; struct hci_conn* hdev; } ;
typedef int cp ;


 int FUNC_0 (char*,struct hci_dev*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct hci_dev*,int ,int,struct hci_cp_sniff_subrate*) ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct hci_conn *VAR_6)
{
 struct hci_dev *VAR_7 = VAR_6->hdev;

 FUNC_0("conn %p mode %d", VAR_6, VAR_6->mode);

 if (FUNC_6(VAR_5, &VAR_7->flags))
  return;

 if (!FUNC_3(VAR_7) || !FUNC_3(VAR_6))
  return;

 if (VAR_6->mode != VAR_0 || !(VAR_6->link_policy & VAR_2))
  return;

 if (FUNC_4(VAR_7) && FUNC_4(VAR_6)) {
  struct hci_cp_sniff_subrate VAR_8;
  VAR_8.handle = FUNC_1(VAR_6->handle);
  VAR_8.max_latency = FUNC_1(0);
  VAR_8.min_remote_timeout = FUNC_1(0);
  VAR_8.min_local_timeout = FUNC_1(0);
  FUNC_2(VAR_7, VAR_4, sizeof(VAR_8), &VAR_8);
 }

 if (!FUNC_5(VAR_1, &VAR_6->pend)) {
  struct hci_cp_sniff_mode VAR_9;
  VAR_9.handle = FUNC_1(VAR_6->handle);
  VAR_9.max_interval = FUNC_1(VAR_7->sniff_max_interval);
  VAR_9.min_interval = FUNC_1(VAR_7->sniff_min_interval);
  VAR_9.attempt = FUNC_1(4);
  VAR_9.timeout = FUNC_1(1);
  FUNC_2(VAR_7, VAR_3, sizeof(VAR_9), &VAR_9);
 }
}
