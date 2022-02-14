
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_page_pool {int dummy; } ;
struct TYPE_2__ {struct ttm_page_pool* pools; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_0 (unsigned int*,int) ;
 int FUNC_1 (struct ttm_page_pool*,unsigned int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void *VAR_2)
{
 static unsigned int VAR_3 = 0;
 unsigned VAR_4;
 unsigned VAR_5 = FUNC_0(&VAR_3, 1);
 struct ttm_page_pool *VAR_6;
 int VAR_7 = 100;

 VAR_5 = VAR_5 % VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  unsigned VAR_8 = VAR_7;
  if (VAR_7 == 0)
   break;
  VAR_6 = &VAR_1->pools[(VAR_4 + VAR_5)%VAR_0];
  VAR_7 = FUNC_1(VAR_6, VAR_8);
 }

 return FUNC_2();
}
