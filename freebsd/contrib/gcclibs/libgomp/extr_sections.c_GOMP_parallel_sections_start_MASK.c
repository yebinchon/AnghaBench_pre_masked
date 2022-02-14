
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gomp_work_share {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct gomp_work_share* FUNC_0 (int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct gomp_work_share*,unsigned int) ;
 int FUNC_3 (void (*) (void*),void*,unsigned int,struct gomp_work_share*) ;

void
FUNC_4 (void (*VAR_1) (void *), void *VAR_2,
         unsigned VAR_3, unsigned VAR_4)
{
  struct gomp_work_share *VAR_5;

  VAR_3 = FUNC_1 (VAR_3);
  if (VAR_0 && VAR_3 > VAR_4)
    VAR_3 = VAR_4;

  VAR_5 = FUNC_0 (0, VAR_3);
  FUNC_2 (VAR_5, VAR_4);
  FUNC_3 (VAR_1, VAR_2, VAR_3, VAR_5);
}
