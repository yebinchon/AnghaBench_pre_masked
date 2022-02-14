
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_alloc {int dummy; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct socket_alloc*) ;
 int FUNC_5 (struct inode*) ;

void FUNC_6(struct inode *VAR_1)
{
 FUNC_0(VAR_0, "Free inode 0x%p\n", VAR_1);

 if (FUNC_2(VAR_1->i_mode)) {
  FUNC_5(VAR_1);
 }
 FUNC_3(FUNC_1(VAR_1));
 FUNC_4((struct socket_alloc*)(FUNC_1(VAR_1)));
}
