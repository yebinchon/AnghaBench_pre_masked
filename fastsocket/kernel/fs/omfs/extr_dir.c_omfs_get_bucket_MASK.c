
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; int i_sb; int i_ino; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int,int) ;
 struct buffer_head* FUNC_3 (int ,int) ;

__attribute__((used)) static struct buffer_head *FUNC_4(struct inode *VAR_1,
  const char *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5 = (VAR_1->i_size - VAR_0)/8;
 int VAR_6 = FUNC_1(FUNC_0(VAR_1->i_sb), VAR_1->i_ino);
 int VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_5);

 *VAR_4 = VAR_0 + VAR_7 * 8;
 return FUNC_3(VAR_1->i_sb, VAR_6);
}
