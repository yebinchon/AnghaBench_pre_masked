
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct device {int dummy; } ;
struct hci_conn {struct device dev; } ;
struct bnep_session {TYPE_1__* sock; } ;
typedef int bdaddr_t ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_3__ {int sk; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 struct hci_conn* FUNC_1 (struct hci_dev*,int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 struct hci_dev* FUNC_3 (int *,int *) ;

__attribute__((used)) static struct device *FUNC_4(struct bnep_session *VAR_1)
{
 bdaddr_t *VAR_2 = &FUNC_0(VAR_1->sock->sk)->src;
 bdaddr_t *VAR_3 = &FUNC_0(VAR_1->sock->sk)->dst;
 struct hci_dev *VAR_4;
 struct hci_conn *VAR_5;

 VAR_4 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_3);

 FUNC_2(VAR_4);

 return VAR_5 ? &VAR_5->dev : ((void*)0);
}
