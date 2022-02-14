
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; int i_data; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 () ;

void FUNC_9(struct inode *VAR_0)
{
 FUNC_4(&VAR_0->i_data, 0);

 if (FUNC_2(VAR_0))
  goto no_delete;

 VAR_0->i_size = 0;
 FUNC_6(VAR_0);
 FUNC_3();

 FUNC_7(VAR_0, FUNC_0(VAR_0));
 FUNC_5(VAR_0);

 FUNC_8();
 return;

no_delete:
 FUNC_1(VAR_0);
}
