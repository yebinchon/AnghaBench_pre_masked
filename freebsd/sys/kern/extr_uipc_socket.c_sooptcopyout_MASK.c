
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {size_t sopt_valsize; int * sopt_val; int * sopt_td; } ;


 int FUNC_0 (void const*,int *,size_t) ;
 int FUNC_1 (void const*,int *,size_t) ;
 size_t FUNC_2 (size_t,size_t) ;

int
FUNC_3(struct sockopt *VAR_0, const void *VAR_1, size_t VAR_2)
{
 int VAR_3;
 size_t VAR_4;

 VAR_3 = 0;
 VAR_4 = FUNC_2(VAR_2, VAR_0->sopt_valsize);
 VAR_0->sopt_valsize = VAR_4;
 if (VAR_0->sopt_val != ((void*)0)) {
  if (VAR_0->sopt_td != ((void*)0))
   VAR_3 = FUNC_1(VAR_1, VAR_0->sopt_val, VAR_4);
  else
   FUNC_0(VAR_1, VAR_0->sopt_val, VAR_4);
 }
 return (VAR_3);
}
