
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct sgsave {int dummy; } ;
struct sglist {scalar_t__ sg_maxseg; } ;
struct TYPE_2__ {int p_vmspace; } ;


 int VAR_0 ;
 int FUNC_0 (struct sglist*,struct sgsave) ;
 int FUNC_1 (struct sglist*,struct sgsave) ;
 int FUNC_2 (struct sglist*,void*,size_t,int ,int *) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct sglist *VAR_1, void *VAR_2, size_t VAR_3, struct thread *VAR_4)
{
 struct sgsave VAR_5;
 int VAR_6;

 if (VAR_1->sg_maxseg == 0)
  return (VAR_0);
 FUNC_1(VAR_1, VAR_5);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3,
     FUNC_3(VAR_4->td_proc->p_vmspace), ((void*)0));
 if (VAR_6)
  FUNC_0(VAR_1, VAR_5);
 return (VAR_6);
}
