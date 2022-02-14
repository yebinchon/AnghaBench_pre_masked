
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int i_sb; } ;
struct extent_position {int offset; int bh; struct kernel_lb_addr block; } ;
struct allocExtDesc {int dummy; } ;
typedef int int8_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int *,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,struct kernel_lb_addr*,int ) ;
 int FUNC_4 (int ,int) ;

int8_t FUNC_5(struct inode *VAR_1, struct extent_position *VAR_2,
       struct kernel_lb_addr *VAR_3, uint32_t *VAR_4, int VAR_5)
{
 int8_t VAR_6;

 while ((VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5)) ==
        (VAR_0 >> 30)) {
  int VAR_7;
  VAR_2->block = *VAR_3;
  VAR_2->offset = sizeof(struct allocExtDesc);
  FUNC_0(VAR_2->bh);
  VAR_7 = FUNC_3(VAR_1->i_sb, &VAR_2->block, 0);
  VAR_2->bh = FUNC_4(VAR_1->i_sb, VAR_7);
  if (!VAR_2->bh) {
   FUNC_2("reading block %d failed!\n", VAR_7);
   return -1;
  }
 }

 return VAR_6;
}
