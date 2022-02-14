
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hidp_session {TYPE_2__* conn; TYPE_1__* ctrl_sock; } ;
struct hci_dev {int dummy; } ;
struct device {int dummy; } ;
typedef int bdaddr_t ;
struct TYPE_6__ {int dst; int src; } ;
struct TYPE_5__ {struct device dev; } ;
struct TYPE_4__ {int sk; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct hci_dev*,int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 struct hci_dev* FUNC_3 (int *,int *) ;

__attribute__((used)) static struct device *FUNC_4(struct hidp_session *VAR_1)
{
 bdaddr_t *VAR_2 = &FUNC_0(VAR_1->ctrl_sock->sk)->src;
 bdaddr_t *VAR_3 = &FUNC_0(VAR_1->ctrl_sock->sk)->dst;
 struct device *VAR_4 = ((void*)0);
 struct hci_dev *VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_5)
  return ((void*)0);

 VAR_1->conn = FUNC_1(VAR_5, VAR_0, VAR_3);
 if (VAR_1->conn)
  VAR_4 = &VAR_1->conn->dev;

 FUNC_2(VAR_5);

 return VAR_4;
}
