
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int k; } ;
struct block {TYPE_1__ s; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct block* FUNC_0 (int *,int) ;

__attribute__((used)) static struct block *
FUNC_1(compiler_state_t *VAR_2, int VAR_3)
{
 struct block *VAR_4 = FUNC_0(VAR_2, VAR_1|VAR_0);

 VAR_4->s.k = VAR_3;
 return VAR_4;
}
