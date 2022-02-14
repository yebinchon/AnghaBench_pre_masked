
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {int a_count; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct posix_acl*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 int VAR_1 ;
 int FUNC_4 (struct posix_acl*) ;
 int FUNC_5 (int ) ;
 struct posix_acl* FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int) ;

int FUNC_9(struct inode *VAR_2)
{
 struct posix_acl *VAR_3;
 int VAR_4 = 0;

 if (FUNC_1(VAR_2))
  return 0;

 VAR_3 = FUNC_6(VAR_2, VAR_0);

 if (VAR_3 && !FUNC_0(VAR_3)) {
  int VAR_5 = FUNC_5(VAR_3->a_count);





  VAR_4 = FUNC_7(VAR_2);
  VAR_4 += FUNC_2(VAR_2->i_sb);

  FUNC_3(VAR_2)->i_flags |= VAR_1;


  VAR_4 += FUNC_8(VAR_2, VAR_5) * 4;
  FUNC_4(VAR_3);
 }

 return VAR_4;
}
