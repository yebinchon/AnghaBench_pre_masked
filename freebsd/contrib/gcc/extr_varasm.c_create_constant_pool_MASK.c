
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_constant_pool {scalar_t__ offset; int * last; int * first; int const_rtx_htab; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtx_constant_pool* FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ,int *) ;

__attribute__((used)) static struct rtx_constant_pool *
FUNC_2 (void)
{
  struct rtx_constant_pool *VAR_2;

  VAR_2 = FUNC_0 (sizeof (struct rtx_constant_pool));
  VAR_2->const_rtx_htab = FUNC_1 (31, VAR_1,
       VAR_0, ((void*)0));
  VAR_2->first = ((void*)0);
  VAR_2->last = ((void*)0);
  VAR_2->offset = 0;
  return VAR_2;
}
