
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; struct cache_reader* private_data; } ;
struct TYPE_2__ {int reader; int list; } ;
struct cache_reader {TYPE_1__ q; scalar_t__ offset; } ;
struct cache_detail {int queue; int readers; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct cache_reader* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_5, struct file *VAR_6,
        struct cache_detail *VAR_7)
{
 struct cache_reader *VAR_8 = ((void*)0);

 if (!VAR_7 || !FUNC_6(VAR_7->owner))
  return -VAR_0;
 FUNC_3(VAR_5, VAR_6);
 if (VAR_6->f_mode & VAR_2) {
  VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
  if (!VAR_8)
   return -VAR_1;
  VAR_8->offset = 0;
  VAR_8->q.reader = 1;
  FUNC_0(&VAR_7->readers);
  FUNC_4(&VAR_4);
  FUNC_2(&VAR_8->q.list, &VAR_7->queue);
  FUNC_5(&VAR_4);
 }
 VAR_6->private_data = VAR_8;
 return 0;
}
