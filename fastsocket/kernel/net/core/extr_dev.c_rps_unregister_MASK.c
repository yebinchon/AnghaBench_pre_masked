
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif_rps_entry {int (* rps_uninit ) () ;int list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

int FUNC_4(struct netif_rps_entry *VAR_1)
{
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_0);

 if (VAR_1->rps_uninit)
  VAR_1->rps_uninit();

 return 0;
}
