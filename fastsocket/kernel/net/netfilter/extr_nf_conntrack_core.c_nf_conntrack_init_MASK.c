
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net*,int *) ;
 int * VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct net*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct net *VAR_6)
{
 int VAR_7;

 if (FUNC_0(VAR_6, &VAR_1)) {
  VAR_7 = FUNC_2();
  if (VAR_7 < 0)
   goto out_init_net;
 }
 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7 < 0)
  goto out_net;

 if (FUNC_0(VAR_6, &VAR_1)) {

  FUNC_4(VAR_2, VAR_3);
  FUNC_4(VAR_4, VAR_0);


  FUNC_4(VAR_5, ((void*)0));
 }
 return 0;

out_net:
 if (FUNC_0(VAR_6, &VAR_1))
  FUNC_1();
out_init_net:
 return VAR_7;
}
