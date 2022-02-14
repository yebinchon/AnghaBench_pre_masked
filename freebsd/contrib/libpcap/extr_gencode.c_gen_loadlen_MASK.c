
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slist {TYPE_2__* next; } ;
struct arth {int regno; struct slist* s; } ;
typedef int compiler_state_t ;
struct TYPE_3__ {int k; } ;
struct TYPE_4__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;

struct arth *
FUNC_3(compiler_state_t *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);
 struct arth *VAR_5 = (struct arth *)FUNC_2(VAR_3, sizeof(*VAR_5));
 struct slist *VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_0|VAR_1);
 VAR_6->next = FUNC_1(VAR_3, VAR_2);
 VAR_6->next->s.k = VAR_4;
 VAR_5->s = VAR_6;
 VAR_5->regno = VAR_4;

 return VAR_5;
}
