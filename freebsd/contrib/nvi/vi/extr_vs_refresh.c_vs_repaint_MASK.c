
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e_flno; scalar_t__ e_tlno; } ;
typedef int SMAP ;
typedef int SCR ;
typedef TYPE_1__ EVENT ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int *) ;

int
FUNC_2(
 SCR *VAR_1,
 EVENT *VAR_2)
{
 SMAP *VAR_3;

 for (; VAR_2->e_flno <= VAR_2->e_tlno; ++VAR_2->e_flno) {
  VAR_3 = VAR_0 + VAR_2->e_flno - 1;
  FUNC_0(VAR_3);
  if (FUNC_1(VAR_1, VAR_3, ((void*)0), ((void*)0)))
   return (1);
 }
 return (0);
}
