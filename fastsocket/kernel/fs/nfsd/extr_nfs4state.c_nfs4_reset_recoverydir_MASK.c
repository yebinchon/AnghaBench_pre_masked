
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_2__* dentry; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,struct path*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct path*) ;

int
FUNC_4(char *VAR_2)
{
 int VAR_3;
 struct path VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;
 VAR_3 = -VAR_0;
 if (FUNC_0(VAR_4.dentry->d_inode->i_mode)) {
  FUNC_2(VAR_2);
  VAR_3 = 0;
 }
 FUNC_3(&VAR_4);
 return VAR_3;
}
