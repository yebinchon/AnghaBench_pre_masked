
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc {int p_comm; TYPE_2__* p_stats; } ;
struct TYPE_6__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_5__ {TYPE_1__ p_start; } ;


 int FUNC_0 (struct proc*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc* VAR_3 ;
 TYPE_3__ VAR_4 ;
 struct proc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

void
FUNC_4(void)
{
 struct proc *VAR_5;

 if (VAR_3 != ((void*)0)) {
  VAR_5 = FUNC_2(VAR_2);

  if (VAR_5 == VAR_3 &&
      VAR_5->p_stats->p_start.tv_sec ==
      VAR_4.tv_sec &&
      VAR_5->p_stats->p_start.tv_usec ==
      VAR_4.tv_usec &&
      FUNC_3(VAR_5->p_comm, VAR_1) == 0)
   FUNC_1(VAR_5, VAR_0);
  else
   VAR_3 = ((void*)0);

  if (VAR_5 != ((void*)0))
   FUNC_0(VAR_5);
 }
}
