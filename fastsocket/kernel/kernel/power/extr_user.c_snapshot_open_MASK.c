
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot_handle {int dummy; } ;
struct snapshot_data {int swap; int mode; scalar_t__ platform_support; scalar_t__ ready; scalar_t__ frozen; int handle; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct snapshot_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct file*) ;
 int VAR_11 ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 struct snapshot_data VAR_13 ;
 int FUNC_8 (scalar_t__,int ,int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_15, struct file *VAR_16)
{
 struct snapshot_data *VAR_17;
 int VAR_18;

 FUNC_4(&VAR_11);

 if (!FUNC_0(&VAR_12, -1, 0)) {
  VAR_18 = -VAR_0;
  goto Unlock;
 }

 if ((VAR_16->f_flags & VAR_3) == VAR_5) {
  FUNC_1(&VAR_12);
  VAR_18 = -VAR_2;
  goto Unlock;
 }
 if(FUNC_2()) {
  FUNC_1(&VAR_12);
  VAR_18 = -VAR_1;
  goto Unlock;
 }
 FUNC_6(VAR_15, VAR_16);
 VAR_17 = &VAR_13;
 VAR_16->private_data = VAR_17;
 FUNC_3(&VAR_17->handle, 0, sizeof(struct snapshot_handle));
 if ((VAR_16->f_flags & VAR_3) == VAR_4) {

  VAR_17->swap = VAR_14 ?
   FUNC_8(VAR_14, 0, ((void*)0)) : -1;
  VAR_17->mode = VAR_4;
  VAR_18 = FUNC_7(VAR_7);
  if (VAR_18)
   FUNC_7(VAR_8);
 } else {




  FUNC_9();

  VAR_17->swap = -1;
  VAR_17->mode = VAR_6;
  VAR_18 = FUNC_7(VAR_10);
  if (VAR_18)
   FUNC_7(VAR_9);
 }
 if (VAR_18)
  FUNC_1(&VAR_12);
 VAR_17->frozen = 0;
 VAR_17->ready = 0;
 VAR_17->platform_support = 0;

 Unlock:
 FUNC_5(&VAR_11);

 return VAR_18;
}
