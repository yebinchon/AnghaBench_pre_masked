
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int req_status; int req_result; int name; int req_wait_q; } ;
typedef int __u32 ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_6, void (*VAR_7)(struct hci_dev *VAR_8, unsigned long VAR_9),
    unsigned long VAR_10, __u32 VAR_11)
{
 FUNC_1(VAR_5, VAR_4);
 int VAR_12 = 0;

 FUNC_0("%s start", VAR_6->name);

 VAR_6->req_status = VAR_2;

 FUNC_2(&VAR_6->req_wait_q, &VAR_5);
 FUNC_6(VAR_3);

 VAR_7(VAR_6, VAR_10);
 FUNC_5(VAR_11);

 FUNC_4(&VAR_6->req_wait_q, &VAR_5);

 if (FUNC_7(VAR_4))
  return -VAR_0;

 switch (VAR_6->req_status) {
 case 128:
  VAR_12 = -FUNC_3(VAR_6->req_result);
  break;

 case 129:
  VAR_12 = -VAR_6->req_result;
  break;

 default:
  VAR_12 = -VAR_1;
  break;
 }

 VAR_6->req_status = VAR_6->req_result = 0;

 FUNC_0("%s end: err %d", VAR_6->name, VAR_12);

 return VAR_12;
}
