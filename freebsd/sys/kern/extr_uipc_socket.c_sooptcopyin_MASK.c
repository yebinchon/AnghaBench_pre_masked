
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {size_t sopt_valsize; int sopt_val; int * sopt_td; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (int ,void*,size_t) ;

int
FUNC_2(struct sockopt *VAR_1, void *VAR_2, size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5;







 if ((VAR_5 = VAR_1->sopt_valsize) < VAR_4)
  return VAR_0;
 if (VAR_5 > VAR_3)
  VAR_1->sopt_valsize = VAR_5 = VAR_3;

 if (VAR_1->sopt_td != ((void*)0))
  return (FUNC_1(VAR_1->sopt_val, VAR_2, VAR_5));

 FUNC_0(VAR_1->sopt_val, VAR_2, VAR_5);
 return (0);
}
