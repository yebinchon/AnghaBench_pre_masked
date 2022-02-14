
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigev_node {int (* sn_dispatch ) (struct sigev_node*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct sigev_node*) ;
 int FUNC_2 (struct sigev_node*) ;
 int VAR_0 ;

__attribute__((used)) static void *
FUNC_3(void *VAR_1)
{
 struct sigev_node *VAR_2 = VAR_1;

 FUNC_1(VAR_0, VAR_2);
 VAR_2->sn_dispatch(VAR_2);
 FUNC_0(1);

 return (0);
}
