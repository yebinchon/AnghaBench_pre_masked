
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (struct inode*,int *,int ) ;
 int FUNC_5 (struct inode*,int ) ;

int FUNC_6(struct inode *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_1();

 VAR_4 = FUNC_4(VAR_2, ((void*)0), 0);
 if (VAR_4) {
  if (VAR_4 != -VAR_0)
   FUNC_2(VAR_4);
  goto out;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1);

 FUNC_5(VAR_2, 0);
out:
 FUNC_3(VAR_4);
 return VAR_4;
}
