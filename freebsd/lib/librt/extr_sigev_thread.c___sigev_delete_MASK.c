
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigev_node {int dummy; } ;
typedef int sigev_id_t ;


 int FUNC_0 (struct sigev_node*) ;
 struct sigev_node* FUNC_1 (int,int ) ;

int
FUNC_2(int VAR_0, sigev_id_t VAR_1)
{
 struct sigev_node *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 != ((void*)0))
  return (FUNC_0(VAR_2));
 return (0);
}
