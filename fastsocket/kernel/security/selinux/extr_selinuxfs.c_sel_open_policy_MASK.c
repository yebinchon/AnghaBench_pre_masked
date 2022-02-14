
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_load_memory {int data; int len; } ;
struct inode {int i_mutex; } ;
struct file {struct policy_load_memory* private_data; } ;


 int FUNC_0 (struct policy_load_memory*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (struct policy_load_memory*) ;
 struct policy_load_memory* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *,int *) ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_7, struct file *VAR_8)
{
 struct policy_load_memory *VAR_9 = ((void*)0);
 int VAR_10;

 FUNC_0(VAR_8->private_data);

 FUNC_5(&VAR_6);

 VAR_10 = FUNC_9(VAR_4, VAR_3);
 if (VAR_10)
  goto err;

 VAR_10 = -VAR_0;
 if (VAR_5)
  goto err;

 VAR_10 = -VAR_1;
 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  goto err;

 if (FUNC_1(VAR_7) != FUNC_7()) {
  FUNC_5(&VAR_7->i_mutex);
  FUNC_2(VAR_7, FUNC_7());
  FUNC_6(&VAR_7->i_mutex);
 }

 VAR_10 = FUNC_8(&VAR_9->data, &VAR_9->len);
 if (VAR_10)
  goto err;

 VAR_5 = 1;

 VAR_8->private_data = VAR_9;

 FUNC_6(&VAR_6);

 return 0;
err:
 FUNC_6(&VAR_6);

 if (VAR_9)
  FUNC_10(VAR_9->data);
 FUNC_3(VAR_9);
 return VAR_10;
}
