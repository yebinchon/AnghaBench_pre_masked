
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct hci_conn {scalar_t__ state; int handle; struct hci_conn* link; void* auth_type; void* sec_level; } ;
typedef int bdaddr_t ;
typedef void* __u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*,int ) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,int,int *) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int,int *) ;
 int FUNC_6 (struct hci_conn*) ;
 int FUNC_7 (struct hci_conn*) ;
 int FUNC_8 (struct hci_conn*,int ) ;
 scalar_t__ FUNC_9 (struct hci_dev*) ;

struct hci_conn *FUNC_10(struct hci_dev *VAR_4, int VAR_5, bdaddr_t *VAR_6, __u8 VAR_7, __u8 VAR_8)
{
 struct hci_conn *VAR_9;
 struct hci_conn *VAR_10;

 FUNC_0("%s dst %s", VAR_4->name, FUNC_1(VAR_6));

 if (!(VAR_9 = FUNC_5(VAR_4, VAR_0, VAR_6))) {
  if (!(VAR_9 = FUNC_4(VAR_4, VAR_0, VAR_6)))
   return ((void*)0);
 }

 FUNC_6(VAR_9);

 if (VAR_9->state == VAR_3 || VAR_9->state == VAR_1) {
  VAR_9->sec_level = VAR_7;
  VAR_9->auth_type = VAR_8;
  FUNC_2(VAR_9);
 }

 if (VAR_5 == VAR_0)
  return VAR_9;

 if (!(VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_6))) {
  if (!(VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_6))) {
   FUNC_7(VAR_9);
   return ((void*)0);
  }
 }

 VAR_9->link = VAR_10;
 VAR_10->link = VAR_9;

 FUNC_6(VAR_10);

 if (VAR_9->state == VAR_2 &&
   (VAR_10->state == VAR_3 || VAR_10->state == VAR_1)) {
  if (FUNC_9(VAR_4))
   FUNC_8(VAR_10, VAR_9->handle);
  else
   FUNC_3(VAR_10, VAR_9->handle);
 }

 return VAR_10;
}
