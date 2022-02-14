
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot_data {scalar_t__ mode; scalar_t__ frozen; int swap; } ;
struct inode {int dummy; } ;
struct file {struct snapshot_data* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_5, struct file *VAR_6)
{
 struct snapshot_data *VAR_7;

 FUNC_3(&VAR_3);

 FUNC_7();
 FUNC_2();
 VAR_7 = VAR_6->private_data;
 FUNC_1(VAR_7->swap);
 if (VAR_7->frozen) {
  FUNC_6();
  FUNC_8();
 }
 FUNC_5(VAR_7->mode == VAR_0 ?
   VAR_1 : VAR_2);
 FUNC_0(&VAR_4);

 FUNC_4(&VAR_3);

 return 0;
}
