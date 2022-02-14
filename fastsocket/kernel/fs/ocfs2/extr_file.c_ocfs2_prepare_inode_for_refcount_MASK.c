
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef size_t loff_t ;
struct TYPE_2__ {size_t s_clustersize_bits; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int ,size_t) ;
 int FUNC_4 (struct inode*,struct buffer_head**,int) ;
 int FUNC_5 (struct inode*,struct buffer_head*,size_t,size_t,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1,
         loff_t VAR_2, size_t VAR_3,
         int *VAR_4)
{
 int VAR_5;
 struct buffer_head *VAR_6 = ((void*)0);
 u32 VAR_7 = VAR_2 >> FUNC_0(VAR_1->i_sb)->s_clustersize_bits;
 u32 VAR_8 =
  FUNC_3(VAR_1->i_sb, VAR_2 + VAR_3) - VAR_7;

 VAR_5 = FUNC_4(VAR_1, &VAR_6, 1);
 if (VAR_5) {
  FUNC_2(VAR_5);
  goto out;
 }

 *VAR_4 = 1;

 VAR_5 = FUNC_5(VAR_1, VAR_6, VAR_7, VAR_8, VAR_0);
 if (VAR_5)
  FUNC_2(VAR_5);
out:
 FUNC_1(VAR_6);
 return VAR_5;
}
