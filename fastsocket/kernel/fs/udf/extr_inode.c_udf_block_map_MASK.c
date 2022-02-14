
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int i_sb; } ;
struct extent_position {int bh; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ,struct extent_position*,struct kernel_lb_addr*,int *,int *) ;
 int FUNC_3 () ;
 long FUNC_4 (int) ;
 int FUNC_5 (int ,struct kernel_lb_addr*,int ) ;
 int FUNC_6 () ;

long FUNC_7(struct inode *VAR_2, sector_t VAR_3)
{
 struct kernel_lb_addr VAR_4;
 uint32_t VAR_5;
 sector_t VAR_6;
 struct extent_position VAR_7 = {};
 int VAR_8;

 FUNC_3();

 if (FUNC_2(VAR_2, VAR_3, &VAR_7, &VAR_4, &VAR_5, &VAR_6) ==
      (VAR_0 >> 30))
  VAR_8 = FUNC_5(VAR_2->i_sb, &VAR_4, VAR_6);
 else
  VAR_8 = 0;

 FUNC_6();
 FUNC_1(VAR_7.bh);

 if (FUNC_0(VAR_2->i_sb, VAR_1))
  return FUNC_4(VAR_8);
 else
  return VAR_8;
}
