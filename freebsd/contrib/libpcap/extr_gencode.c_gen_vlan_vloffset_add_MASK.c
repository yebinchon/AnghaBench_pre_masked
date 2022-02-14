
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int k; } ;
struct slist {TYPE_1__ s; } ;
typedef int compiler_state_t ;
struct TYPE_5__ {int is_variable; int reg; } ;
typedef TYPE_2__ bpf_abs_offset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct slist* FUNC_1 (int *,int) ;
 int FUNC_2 (struct slist*,struct slist*) ;

__attribute__((used)) static void
FUNC_3(compiler_state_t *VAR_6, bpf_abs_offset *VAR_7, int VAR_8, struct slist *VAR_9)
{
 struct slist *VAR_10;

 if (!VAR_7->is_variable)
  VAR_7->is_variable = 1;
 if (VAR_7->reg == -1)
  VAR_7->reg = FUNC_0(VAR_6);

 VAR_10 = FUNC_1(VAR_6, VAR_3|VAR_4);
 VAR_10->s.k = VAR_7->reg;
 FUNC_2(VAR_9, VAR_10);
 VAR_10 = FUNC_1(VAR_6, VAR_1|VAR_0|VAR_2);
 VAR_10->s.k = VAR_8;
 FUNC_2(VAR_9, VAR_10);
 VAR_10 = FUNC_1(VAR_6, VAR_5);
 VAR_10->s.k = VAR_7->reg;
 FUNC_2(VAR_9, VAR_10);
}
