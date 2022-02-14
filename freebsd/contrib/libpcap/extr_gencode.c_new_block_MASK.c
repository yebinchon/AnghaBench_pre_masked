
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct block {struct block* head; TYPE_1__ s; } ;
typedef int compiler_state_t ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static inline struct block *
FUNC_1(compiler_state_t *VAR_0, int VAR_1)
{
 struct block *VAR_2;

 VAR_2 = (struct block *)FUNC_0(VAR_0, sizeof(*VAR_2));
 VAR_2->s.code = VAR_1;
 VAR_2->head = VAR_2;

 return VAR_2;
}
