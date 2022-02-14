
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct timespec {int dummy; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {TYPE_1__* delays; } ;
struct TYPE_3__ {int lock; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct timespec FUNC_3 (struct timespec,struct timespec) ;
 scalar_t__ FUNC_4 (struct timespec*) ;

__attribute__((used)) static void FUNC_5(struct timespec *VAR_1, struct timespec *VAR_2,
    u64 *VAR_3, u32 *VAR_4)
{
 struct timespec VAR_5;
 s64 VAR_6;
 unsigned long VAR_7;

 FUNC_0(VAR_2);
 VAR_5 = FUNC_3(*VAR_2, *VAR_1);
 VAR_6 = FUNC_4(&VAR_5);
 if (VAR_6 < 0)
  return;

 FUNC_1(&VAR_0->delays->lock, VAR_7);
 *VAR_3 += VAR_6;
 (*VAR_4)++;
 FUNC_2(&VAR_0->delays->lock, VAR_7);
}
