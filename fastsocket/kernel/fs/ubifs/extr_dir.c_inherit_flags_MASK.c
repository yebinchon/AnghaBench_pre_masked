
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {int flags; } ;
struct inode {int i_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ubifs_inode* FUNC_1 (struct inode const*) ;

__attribute__((used)) static int FUNC_2(const struct inode *VAR_3, int VAR_4)
{
 int VAR_5;
 const struct ubifs_inode *VAR_6 = FUNC_1(VAR_3);

 if (!FUNC_0(VAR_3->i_mode))




  return 0;

 VAR_5 = VAR_6->flags & (VAR_0 | VAR_2 | VAR_1);
 if (!FUNC_0(VAR_4))

  VAR_5 &= ~VAR_1;
 return VAR_5;
}
