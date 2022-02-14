
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {TYPE_2__* f_dentry; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*,int ,int,int ) ;

int FUNC_1(struct file *VAR_5, int VAR_6)
{
 int VAR_7;

 if (!VAR_4)
  return 0;

 VAR_7 = FUNC_0(VAR_5, VAR_5->f_dentry->d_name.name,
     VAR_6 & (VAR_2 | VAR_3 | VAR_1),
     VAR_0);
 return 0;
}
