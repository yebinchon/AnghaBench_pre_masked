
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
typedef int rman_res_t ;


 int FUNC_0 (struct resource_list*,int,int,int ,int ,int ) ;
 int * FUNC_1 (struct resource_list*,int,int) ;

int
FUNC_2(struct resource_list *VAR_0, int VAR_1, rman_res_t VAR_2,
    rman_res_t VAR_3, rman_res_t VAR_4)
{
 int VAR_5;

 VAR_5 = 0;
 while (FUNC_1(VAR_0, VAR_1, VAR_5) != ((void*)0))
  VAR_5++;
 FUNC_0(VAR_0, VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);
 return (VAR_5);
}
