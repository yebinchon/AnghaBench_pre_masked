
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_dest {int d_list; int port; int addr; int af; } ;


 unsigned int FUNC_0 (int ,int *,int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ip_vs_dest *VAR_1)
{
 unsigned VAR_2;

 if (!FUNC_2(&VAR_1->d_list)) {
  return 0;
 }





 VAR_2 = FUNC_0(VAR_1->af, &VAR_1->addr, VAR_1->port);

 FUNC_1(&VAR_1->d_list, &VAR_0[VAR_2]);

 return 1;
}
