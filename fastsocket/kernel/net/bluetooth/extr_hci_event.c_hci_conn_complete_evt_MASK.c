
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_conn_complete {scalar_t__ link_type; scalar_t__ status; int handle; int bdaddr; } ;
struct hci_dev {int hci_ver; int flags; int name; } ;
struct hci_cp_read_remote_features {int pkt_type; int handle; } ;
struct hci_cp_change_conn_ptype {int pkt_type; int handle; } ;
struct hci_conn {scalar_t__ type; int handle; struct hci_conn* link; int state; int pkt_type; int out; int link_mode; int disc_timeout; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hci_conn*,int ) ;
 int FUNC_4 (struct hci_conn*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_conn*) ;
 struct hci_conn* FUNC_7 (struct hci_dev*,scalar_t__,int *) ;
 int FUNC_8 (struct hci_conn*) ;
 int FUNC_9 (struct hci_conn*) ;
 int FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (struct hci_conn*,scalar_t__) ;
 int FUNC_13 (struct hci_dev*,int ,int,struct hci_cp_read_remote_features*) ;
 int FUNC_14 (struct hci_conn*,int ) ;
 scalar_t__ FUNC_15 (struct hci_dev*) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static inline void FUNC_17(struct hci_dev *VAR_13, struct sk_buff *VAR_14)
{
 struct hci_ev_conn_complete *VAR_15 = (void *) VAR_14->data;
 struct hci_conn *VAR_16;

 FUNC_0("%s", VAR_13->name);

 FUNC_10(VAR_13);

 VAR_16 = FUNC_7(VAR_13, VAR_15->link_type, &VAR_15->bdaddr);
 if (!VAR_16) {
  if (VAR_15->link_type != VAR_12)
   goto unlock;

  VAR_16 = FUNC_7(VAR_13, VAR_4, &VAR_15->bdaddr);
  if (!VAR_16)
   goto unlock;

  VAR_16->type = VAR_12;
 }

 if (!VAR_15->status) {
  VAR_16->handle = FUNC_1(VAR_15->handle);

  if (VAR_16->type == VAR_0) {
   VAR_16->state = VAR_2;
   FUNC_8(VAR_16);
   VAR_16->disc_timeout = VAR_6;
  } else
   VAR_16->state = VAR_3;

  FUNC_9(VAR_16);
  FUNC_4(VAR_16);

  if (FUNC_16(VAR_5, &VAR_13->flags))
   VAR_16->link_mode |= VAR_8;

  if (FUNC_16(VAR_7, &VAR_13->flags))
   VAR_16->link_mode |= VAR_9;


  if (VAR_16->type == VAR_0) {
   struct hci_cp_read_remote_features VAR_17;
   VAR_17.handle = VAR_15->handle;
   FUNC_13(VAR_13, VAR_11,
       sizeof(VAR_17), &VAR_17);
  }


  if (!VAR_16->out && VAR_13->hci_ver < 3) {
   struct hci_cp_change_conn_ptype VAR_18;
   VAR_18.handle = VAR_15->handle;
   VAR_18.pkt_type = FUNC_2(VAR_16->pkt_type);
   FUNC_13(VAR_13, VAR_10,
       sizeof(VAR_18), &VAR_18);
  }
 } else
  VAR_16->state = VAR_1;

 if (VAR_16->type == VAR_0) {
  struct hci_conn *VAR_19 = VAR_16->link;
  if (VAR_19) {
   if (!VAR_15->status) {
    if (FUNC_15(VAR_13))
     FUNC_14(VAR_19, VAR_16->handle);
    else
     FUNC_3(VAR_19, VAR_16->handle);
   } else {
    FUNC_12(VAR_19, VAR_15->status);
    FUNC_6(VAR_19);
   }
  }
 }

 if (VAR_15->status) {
  FUNC_12(VAR_16, VAR_15->status);
  FUNC_6(VAR_16);
 } else if (VAR_15->link_type != VAR_0)
  FUNC_12(VAR_16, VAR_15->status);

unlock:
 FUNC_11(VAR_13);

 FUNC_5(VAR_13);
}
