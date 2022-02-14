
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct user_struct {unsigned long locked_shm; } ;
struct TYPE_6__ {TYPE_1__* signal; } ;
struct TYPE_5__ {unsigned long rlim_cur; } ;
struct TYPE_4__ {TYPE_2__* rlim; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (struct user_struct*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(size_t VAR_7, struct user_struct *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_10 = (VAR_7 + VAR_2 - 1) >> VAR_1;
 VAR_9 = VAR_5->signal->rlim[VAR_3].rlim_cur;
 if (VAR_9 == VAR_4)
  VAR_11 = 1;
 VAR_9 >>= VAR_1;
 FUNC_2(&VAR_6);
 if (!VAR_11 &&
     VAR_10 + VAR_8->locked_shm > VAR_9 && !FUNC_0(VAR_0))
  goto out;
 FUNC_1(VAR_8);
 VAR_8->locked_shm += VAR_10;
 VAR_11 = 1;
out:
 FUNC_3(&VAR_6);
 return VAR_11;
}
