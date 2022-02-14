
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; struct rfcomm_dev* driver_data; } ;
struct rfcomm_dlc {scalar_t__ state; } ;
struct rfcomm_dev {int err; struct rfcomm_dlc* dlc; int tty_dev; int wait; int channel; int dst; int src; int flags; struct tty_struct* tty; int opened; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,int *) ;
 struct rfcomm_dev* FUNC_8 (int) ;
 int FUNC_9 (struct rfcomm_dlc*) ;
 int FUNC_10 (struct rfcomm_dlc*,int *,int *,int ) ;
 int FUNC_11 (struct rfcomm_dlc*) ;
 int FUNC_12 (struct rfcomm_dlc*) ;
 int FUNC_13 (struct rfcomm_dev*) ;
 int FUNC_14 (struct rfcomm_dev*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_19(struct tty_struct *VAR_10, struct file *VAR_11)
{
 FUNC_1(VAR_9, VAR_8);
 struct rfcomm_dev *VAR_12;
 struct rfcomm_dlc *VAR_13;
 int VAR_14, VAR_15;

 VAR_15 = VAR_10->index;

 FUNC_0("tty %p id %d", VAR_10, VAR_15);





 VAR_12 = FUNC_8(VAR_15);
 if (!VAR_12)
  return -VAR_4;

 FUNC_0("dev %p dst %s channel %d opened %d", VAR_12, FUNC_5(&VAR_12->dst),
    VAR_12->channel, FUNC_4(&VAR_12->opened));

 if (FUNC_3(&VAR_12->opened) > 1)
  return 0;

 VAR_13 = VAR_12->dlc;



 FUNC_9(VAR_13);
 VAR_10->driver_data = VAR_12;
 VAR_12->tty = VAR_10;
 FUNC_11(VAR_13);
 FUNC_16(VAR_5, &VAR_12->flags);

 VAR_14 = FUNC_10(VAR_13, &VAR_12->src, &VAR_12->dst, VAR_12->channel);
 if (VAR_14 < 0)
  return VAR_14;


 FUNC_2(&VAR_12->wait, &VAR_9);
 while (1) {
  FUNC_17(VAR_6);

  if (VAR_13->state == VAR_0) {
   VAR_14 = -VAR_12->err;
   break;
  }

  if (VAR_13->state == VAR_1)
   break;

  if (FUNC_18(VAR_8)) {
   VAR_14 = -VAR_3;
   break;
  }

  FUNC_15();
 }
 FUNC_17(VAR_7);
 FUNC_7(&VAR_12->wait, &VAR_9);

 if (VAR_14 == 0)
  FUNC_6(VAR_12->tty_dev, FUNC_13(VAR_12),
       VAR_2);

 FUNC_14(VAR_12);

 FUNC_12(VAR_12->dlc);

 return VAR_14;
}
