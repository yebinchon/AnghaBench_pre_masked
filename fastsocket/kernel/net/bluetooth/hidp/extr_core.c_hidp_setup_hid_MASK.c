
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hidp_session {int * rd_data; struct hid_device* hid; TYPE_1__* ctrl_sock; int rd_size; } ;
struct hidp_connadd_req {int name; int country; int version; int product; int vendor; int rd_size; int rd_data; } ;
struct TYPE_5__ {int parent; } ;
struct hid_device {int hid_output_raw_report; int * ll_driver; TYPE_2__ dev; int uniq; int phys; int name; int country; int version; int product; int vendor; int bus; struct hidp_session* driver_data; } ;
typedef int bdaddr_t ;
struct TYPE_6__ {int dst; int src; } ;
struct TYPE_4__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct hid_device*) ;
 struct hid_device* FUNC_7 () ;
 int FUNC_8 (struct hid_device*) ;
 int FUNC_9 (struct hidp_session*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static int FUNC_13(struct hidp_session *VAR_6,
    struct hidp_connadd_req *VAR_7)
{
 struct hid_device *VAR_8;
 bdaddr_t VAR_9, VAR_10;
 int VAR_11;

 VAR_6->rd_data = FUNC_11(VAR_7->rd_size, VAR_3);
 if (!VAR_6->rd_data)
  return -VAR_2;

 if (FUNC_5(VAR_6->rd_data, VAR_7->rd_data, VAR_7->rd_size)) {
  VAR_11 = -VAR_1;
  goto fault;
 }
 VAR_6->rd_size = VAR_7->rd_size;

 VAR_8 = FUNC_7();
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto fault;
 }

 VAR_6->hid = VAR_8;

 VAR_8->driver_data = VAR_6;

 FUNC_2(&VAR_9, &FUNC_4(VAR_6->ctrl_sock->sk)->src);
 FUNC_2(&VAR_10, &FUNC_4(VAR_6->ctrl_sock->sk)->dst);

 VAR_8->bus = VAR_0;
 VAR_8->vendor = VAR_7->vendor;
 VAR_8->product = VAR_7->product;
 VAR_8->version = VAR_7->version;
 VAR_8->country = VAR_7->country;

 FUNC_12(VAR_8->name, VAR_7->name, sizeof(VAR_7->name) - 1);
 FUNC_12(VAR_8->phys, FUNC_3(&VAR_9), 64);
 FUNC_12(VAR_8->uniq, FUNC_3(&VAR_10), 64);

 VAR_8->dev.parent = FUNC_9(VAR_6);
 VAR_8->ll_driver = &VAR_4;

 VAR_8->hid_output_raw_report = VAR_5;

 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11 < 0)
  goto failed;

 return 0;

failed:
 FUNC_8(VAR_8);
 VAR_6->hid = ((void*)0);

fault:
 FUNC_10(VAR_6->rd_data);
 VAR_6->rd_data = ((void*)0);

 return VAR_11;
}
