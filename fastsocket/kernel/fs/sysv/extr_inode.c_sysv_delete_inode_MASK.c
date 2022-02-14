
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; int i_data; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0)
{
 FUNC_2(&VAR_0->i_data, 0);
 VAR_0->i_size = 0;
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}
