
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_auth_complete {int status; int handle; } ;
struct hci_dev {scalar_t__ ssp_mode; int name; } ;
struct hci_cp_set_conn_encrypt {int encrypt; int handle; } ;
struct hci_conn {scalar_t__ state; scalar_t__ ssp_mode; int pend; int disc_timeout; int link_mode; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct hci_conn*,int ) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_conn*) ;
 int FUNC_6 (struct hci_conn*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_conn*,int ,int) ;
 int FUNC_10 (struct hci_conn*,int ) ;
 int FUNC_11 (struct hci_dev*,int ,int,struct hci_cp_set_conn_encrypt*) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static inline void FUNC_13(struct hci_dev *VAR_7, struct sk_buff *VAR_8)
{
 struct hci_ev_auth_complete *VAR_9 = (void *) VAR_8->data;
 struct hci_conn *VAR_10;

 FUNC_0("%s status %d", VAR_7->name, VAR_9->status);

 FUNC_7(VAR_7);

 VAR_10 = FUNC_4(VAR_7, FUNC_1(VAR_9->handle));
 if (VAR_10) {
  if (!VAR_9->status)
   VAR_10->link_mode |= VAR_5;

  FUNC_2(VAR_2, &VAR_10->pend);

  if (VAR_10->state == VAR_0) {
   if (!VAR_9->status && VAR_7->ssp_mode > 0 &&
       VAR_10->ssp_mode > 0) {
    struct hci_cp_set_conn_encrypt VAR_11;
    VAR_11.handle = VAR_9->handle;
    VAR_11.encrypt = 0x01;
    FUNC_11(VAR_7, VAR_6,
       sizeof(VAR_11), &VAR_11);
   } else {
    VAR_10->state = VAR_1;
    FUNC_10(VAR_10, VAR_9->status);
    FUNC_6(VAR_10);
   }
  } else {
   FUNC_3(VAR_10, VAR_9->status);

   FUNC_5(VAR_10);
   VAR_10->disc_timeout = VAR_4;
   FUNC_6(VAR_10);
  }

  if (FUNC_12(VAR_3, &VAR_10->pend)) {
   if (!VAR_9->status) {
    struct hci_cp_set_conn_encrypt VAR_12;
    VAR_12.handle = VAR_9->handle;
    VAR_12.encrypt = 0x01;
    FUNC_11(VAR_7, VAR_6,
       sizeof(VAR_12), &VAR_12);
   } else {
    FUNC_2(VAR_3, &VAR_10->pend);
    FUNC_9(VAR_10, VAR_9->status, 0x00);
   }
  }
 }

 FUNC_8(VAR_7);
}
