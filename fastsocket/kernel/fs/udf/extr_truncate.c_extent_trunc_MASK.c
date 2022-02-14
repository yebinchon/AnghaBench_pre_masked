
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct kernel_lb_addr {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct extent_position {int dummy; } ;
typedef int int8_t ;
struct TYPE_2__ {int s_blocksize; int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_1__*,struct inode*,struct kernel_lb_addr*,int,int) ;
 int FUNC_2 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_3, struct extent_position *VAR_4,
    struct kernel_lb_addr *VAR_5, int8_t VAR_6, uint32_t VAR_7,
    uint32_t VAR_8)
{
 struct kernel_lb_addr VAR_9 = {};
 int VAR_10 = (VAR_7 + VAR_3->i_sb->s_blocksize - 1) >>
  VAR_3->i_sb->s_blocksize_bits;
 int VAR_11 = (VAR_8 + VAR_3->i_sb->s_blocksize - 1) >>
  VAR_3->i_sb->s_blocksize_bits;

 if (VAR_8) {
  if (VAR_6 == (VAR_0 >> 30)) {
   FUNC_1(VAR_3->i_sb, VAR_3, VAR_5, 0,
     VAR_10);
   VAR_6 = (VAR_1 >> 30);
  } else
   VAR_9 = *VAR_5;
  VAR_8 = (VAR_6 << 30) | VAR_8;
 }

 if (VAR_7 != VAR_8) {
  FUNC_2(VAR_3, VAR_4, &VAR_9, VAR_8, 0);
  if (VAR_10 - VAR_11 > 0) {
   if (VAR_6 == (VAR_2 >> 30))
    FUNC_0(VAR_3);

   if (VAR_6 != (VAR_1 >> 30))
    FUNC_1(VAR_3->i_sb, VAR_3, VAR_5,
      VAR_11,
      VAR_10 - VAR_11);
  }
 }
}
