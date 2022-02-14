
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,char const*,char*,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_2, const char *VAR_3,
       struct inode *VAR_4, struct super_block *VAR_5)
{
 if (VAR_2 == -VAR_0) {
  FUNC_0(VAR_5, VAR_3, "broken bmap (inode=%lu)\n",
       VAR_4->i_ino);
  VAR_2 = -VAR_1;
 }
 return VAR_2;
}
