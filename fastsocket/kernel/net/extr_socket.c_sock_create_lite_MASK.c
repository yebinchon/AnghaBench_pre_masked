
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int type; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (struct socket*,int,int,int,int) ;
 struct socket* FUNC_2 () ;
 int FUNC_3 (struct socket*) ;

int FUNC_4(int VAR_1, int VAR_2, int VAR_3, struct socket **VAR_4)
{
 int VAR_5;
 struct socket *VAR_6 = ((void*)0);

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, 1);
 if (VAR_5)
  goto out;

 VAR_6 = FUNC_2();
 if (!VAR_6) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_6->type = VAR_2;
 VAR_5 = FUNC_1(VAR_6, VAR_1, VAR_2, VAR_3, 1);
 if (VAR_5)
  goto out_release;

out:
 *VAR_4 = VAR_6;
 return VAR_5;
out_release:
 FUNC_3(VAR_6);
 VAR_6 = ((void*)0);
 goto out;
}
