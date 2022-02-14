
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int sem; } ;
typedef TYPE_1__ ocs_sem_t ;
typedef int int32_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct timeval*) ;

__attribute__((used)) static inline int
FUNC_4(ocs_sem_t *VAR_0, int VAR_1)
{
 int32_t VAR_2 = 0;

 if (VAR_1 == 0) {
  VAR_2 = FUNC_1(&VAR_0->sem);
  if (VAR_2 == 0) {
   VAR_2 = -1;
  }
 } else if (VAR_1 > 0) {
  struct timeval VAR_3;
  uint32_t VAR_4;

  VAR_3.tv_sec = VAR_1 / 1000000;
  VAR_3.tv_usec = VAR_1 % 1000000;
  VAR_4 = FUNC_3(&VAR_3);
  if (VAR_4 == 0) {
   VAR_4 ++;
  }
  VAR_2 = FUNC_0(&VAR_0->sem, VAR_4);
  if (VAR_2 != 0) {
   VAR_2 = -1;
  }
 } else {
  FUNC_2(&VAR_0->sem);
 }
 if (VAR_2)
  VAR_2 = -1;

 return VAR_2;
}
