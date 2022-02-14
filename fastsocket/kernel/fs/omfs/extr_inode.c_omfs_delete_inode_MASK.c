
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; scalar_t__ i_size; int i_mode; int i_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0)
{
 FUNC_4(&VAR_0->i_data, 0);

 if (FUNC_0(VAR_0->i_mode)) {
  VAR_0->i_size = 0;
  FUNC_3(VAR_0);
 }

 FUNC_2(VAR_0->i_sb, VAR_0->i_ino, 2);
 FUNC_1(VAR_0);
}
