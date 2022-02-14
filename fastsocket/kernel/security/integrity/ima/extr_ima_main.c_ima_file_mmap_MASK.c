
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
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int ,int ,int ) ;

int FUNC_1(struct file *VAR_4, unsigned long VAR_5)
{
 int VAR_6;

 if (!VAR_3 || !VAR_4)
  return 0;
 if (VAR_5 & VAR_2)
  VAR_6 = FUNC_0(VAR_4, VAR_4->f_dentry->d_name.name,
      VAR_1, VAR_0);
 return 0;
}
