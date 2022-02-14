
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ req_status; int req_result; int req_wait_q; int name; } ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_2, int VAR_3)
{
 FUNC_0("%s err 0x%2.2x", VAR_2->name, VAR_3);

 if (VAR_2->req_status == VAR_1) {
  VAR_2->req_result = VAR_3;
  VAR_2->req_status = VAR_0;
  FUNC_1(&VAR_2->req_wait_q);
 }
}
