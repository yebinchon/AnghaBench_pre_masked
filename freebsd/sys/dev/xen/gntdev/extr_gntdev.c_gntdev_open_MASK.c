
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct per_user_data {int user_data_lock; int file_offset; int gmap_tree; int gref_tree; } ;
struct file_offset_struct {int count; scalar_t__ file_offset; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,struct file_offset_struct*) ;
 int FUNC_2 (struct per_user_data*,int (*) (struct per_user_data*)) ;
 int VAR_5 ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (struct per_user_data*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_6, int VAR_7, int VAR_8, struct thread *VAR_9)
{
 int VAR_10;
 struct per_user_data *VAR_11;
 struct file_offset_struct *VAR_12;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2, VAR_3 | VAR_4);
 FUNC_0(&VAR_11->gref_tree);
 FUNC_0(&VAR_11->gmap_tree);
 FUNC_0(&VAR_11->file_offset);
 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_2, VAR_3 | VAR_4);
 VAR_12->file_offset = 0;
 VAR_12->count = VAR_0;
 FUNC_1(VAR_5, &VAR_11->file_offset, VAR_12);
 FUNC_4(&VAR_11->user_data_lock,
     "per user data mutex", ((void*)0), VAR_1);

 VAR_10 = FUNC_2(VAR_11, FUNC_5);
 if (VAR_10 != 0)
  FUNC_5(VAR_11);

 return (VAR_10);
}
