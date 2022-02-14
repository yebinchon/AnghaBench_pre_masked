
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_4->i_mode;
 int VAR_7 = 0;

 FUNC_0("mode=%x, mask=%x\n", VAR_6, VAR_5);


 VAR_6 >>= 6;
 if (VAR_5 & ~VAR_6 & (VAR_2 | VAR_3 | VAR_1))
  VAR_7 = -VAR_0;
 return VAR_7;
}
