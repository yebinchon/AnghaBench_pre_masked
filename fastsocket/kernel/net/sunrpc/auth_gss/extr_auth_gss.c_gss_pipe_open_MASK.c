
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 FUNC_2(&VAR_3);
 if (VAR_2 < 0) {

  VAR_2 = VAR_7;
  FUNC_1(&VAR_4);
  FUNC_4(&VAR_5);
 } else if (VAR_2 != VAR_7) {

  VAR_8 = -VAR_0;
  goto out;
 }
 FUNC_0(&VAR_1);
out:
 FUNC_3(&VAR_3);
 return VAR_8;

}
