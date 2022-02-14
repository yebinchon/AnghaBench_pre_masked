
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timevar_time_def {scalar_t__ ggc_mem; scalar_t__ wall; scalar_t__ sys; scalar_t__ user; } ;



__attribute__((used)) static void
FUNC_0 (struct timevar_time_def *VAR_0,
      struct timevar_time_def *VAR_1,
      struct timevar_time_def *VAR_2)
{
  VAR_0->user += VAR_2->user - VAR_1->user;
  VAR_0->sys += VAR_2->sys - VAR_1->sys;
  VAR_0->wall += VAR_2->wall - VAR_1->wall;
  VAR_0->ggc_mem += VAR_2->ggc_mem - VAR_1->ggc_mem;
}
