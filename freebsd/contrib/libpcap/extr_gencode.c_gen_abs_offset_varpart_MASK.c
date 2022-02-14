
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int k; } ;
struct slist {TYPE_1__ s; } ;
typedef int compiler_state_t ;
struct TYPE_5__ {int reg; scalar_t__ is_variable; } ;
typedef TYPE_2__ bpf_abs_offset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct slist* FUNC_1 (int *,int) ;

__attribute__((used)) static struct slist *
FUNC_2(compiler_state_t *VAR_2, bpf_abs_offset *VAR_3)
{
 struct slist *VAR_4;

 if (VAR_3->is_variable) {
  if (VAR_3->reg == -1) {





   VAR_3->reg = FUNC_0(VAR_2);
  }





  VAR_4 = FUNC_1(VAR_2, VAR_0|VAR_1);
  VAR_4->s.k = VAR_3->reg;
  return VAR_4;
 } else {




  return ((void*)0);
 }
}
