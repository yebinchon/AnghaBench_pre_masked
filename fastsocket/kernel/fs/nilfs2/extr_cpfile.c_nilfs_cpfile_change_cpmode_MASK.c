
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int dummy; } ;
struct inode {int dummy; } ;
typedef int __u64 ;
struct TYPE_2__ {struct the_nilfs* mi_nilfs; } ;


 int VAR_0 ;
 int VAR_1 ;

 TYPE_1__* FUNC_0 (struct inode*) ;

 int FUNC_1 (struct the_nilfs*,int ,int) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,int ) ;

int FUNC_4(struct inode *VAR_2, __u64 VAR_3, int VAR_4)
{
 struct the_nilfs *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2)->mi_nilfs;

 switch (VAR_4) {
 case 129:






  if (FUNC_1(VAR_5, VAR_3, 1)) {




   VAR_6 = -VAR_0;
  } else
   VAR_6 = FUNC_2(VAR_2, VAR_3);
  return VAR_6;
 case 128:
  return FUNC_3(VAR_2, VAR_3);
 default:
  return -VAR_1;
 }
}
