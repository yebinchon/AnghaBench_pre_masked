
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int k; } ;
struct slist {TYPE_1__ s; } ;
struct arth {int regno; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct slist* FUNC_0 (int *,int) ;

__attribute__((used)) static struct slist *
FUNC_1(compiler_state_t *VAR_2, struct arth *VAR_3)
{
 struct slist *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0|VAR_1);
 VAR_4->s.k = VAR_3->regno;
 return VAR_4;
}
