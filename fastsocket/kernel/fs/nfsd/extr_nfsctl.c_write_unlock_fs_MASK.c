
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {TYPE_1__* mnt; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int mnt_sb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct path*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct path*) ;
 scalar_t__ FUNC_3 (char**,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct path VAR_4;
 char *VAR_5;
 int VAR_6;


 if (VAR_3 == 0)
  return -VAR_0;

 if (VAR_2[VAR_3-1] != '\n')
  return -VAR_0;

 VAR_5 = VAR_2;
 if (FUNC_3(&VAR_2, VAR_5, VAR_3) < 0)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5, 0, &VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_1(VAR_4.mnt->mnt_sb);

 FUNC_2(&VAR_4);
 return VAR_6;
}
