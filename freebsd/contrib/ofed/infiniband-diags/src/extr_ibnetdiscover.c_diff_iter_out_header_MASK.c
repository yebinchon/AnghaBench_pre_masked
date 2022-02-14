
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_diff_data {int (* out_header ) (int *,int ,int *,int *,int *) ;} ;
typedef int ibnd_node_t ;


 int FUNC_0 (int *,int ,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(ibnd_node_t * VAR_0,
     struct iter_diff_data *VAR_1,
     int *VAR_2)
{
 if (!(*VAR_2)) {
  (*VAR_1->out_header) (VAR_0, 0, ((void*)0), ((void*)0), ((void*)0));
  (*VAR_2)++;
 }
}
