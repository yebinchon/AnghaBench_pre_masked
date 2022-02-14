
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gomp_work_share {int dummy; } ;
typedef enum gomp_schedule_type { ____Placeholder_gomp_schedule_type } gomp_schedule_type ;


 int FUNC_0 (struct gomp_work_share*,long,long,long,int,long) ;
 struct gomp_work_share* FUNC_1 (int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (void (*) (void*),void*,unsigned int,struct gomp_work_share*) ;

__attribute__((used)) static void
FUNC_4 (void (*VAR_0) (void *), void *VAR_1,
     unsigned VAR_2, long VAR_3, long VAR_4,
     long VAR_5, enum gomp_schedule_type VAR_6,
     long VAR_7)
{
  struct gomp_work_share *VAR_8;

  VAR_2 = FUNC_2 (VAR_2);
  VAR_8 = FUNC_1 (0, VAR_2);
  FUNC_0 (VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_3 (VAR_0, VAR_1, VAR_2, VAR_8);
}
