
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_size; int i_ino; int i_sb; } ;
struct buffer_head {int * b_data; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int ) ;
 struct buffer_head* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1)
{
 int VAR_2 = (VAR_1->i_size - VAR_0) / 8;
 struct buffer_head *VAR_3;
 u64 *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_1->i_sb, FUNC_2(FUNC_0(VAR_1->i_sb),
   VAR_1->i_ino));

 if (!VAR_3)
  return 0;

 VAR_4 = (u64 *) &VAR_3->b_data[VAR_0];

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_4++)
  if (*VAR_4 != ~0)
   break;

 FUNC_1(VAR_3);
 return *VAR_4 != ~0;
}
