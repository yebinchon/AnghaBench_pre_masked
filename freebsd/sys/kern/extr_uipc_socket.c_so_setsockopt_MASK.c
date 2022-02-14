
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {int sopt_level; int sopt_name; size_t sopt_valsize; int * sopt_td; void* sopt_val; int sopt_dir; } ;
struct socket {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,struct sockopt*) ;

int
FUNC_1(struct socket *VAR_1, int VAR_2, int VAR_3, void *VAR_4,
    size_t VAR_5)
{
 struct sockopt VAR_6;

 VAR_6.sopt_level = VAR_2;
 VAR_6.sopt_name = VAR_3;
 VAR_6.sopt_dir = VAR_0;
 VAR_6.sopt_val = VAR_4;
 VAR_6.sopt_valsize = VAR_5;
 VAR_6.sopt_td = ((void*)0);
 return (FUNC_0(VAR_1, &VAR_6));
}
