
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pernet_operations {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,struct pernet_operations*) ;

int FUNC_6(int *VAR_5, struct pernet_operations *VAR_6)
{
 int VAR_7;

 FUNC_3(&VAR_4);
again:
 VAR_7 = FUNC_0(&VAR_3, 1, VAR_5);
 if (VAR_7 < 0) {
  if (VAR_7 == -VAR_0) {
   FUNC_1(&VAR_3, VAR_1);
   goto again;
  }
  goto out;
 }
 VAR_7 = FUNC_5(VAR_2, VAR_6);
 if (VAR_7 < 0)
  FUNC_2(&VAR_3, *VAR_5);
out:
 FUNC_4(&VAR_4);
 return VAR_7;
}
