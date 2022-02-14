
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int k; } ;
struct slist {TYPE_2__* next; TYPE_3__ s; } ;
struct arth {int regno; struct slist* s; } ;
typedef int compiler_state_t ;
struct TYPE_4__ {int k; } ;
struct TYPE_5__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;

struct arth *
FUNC_3(compiler_state_t *VAR_3, int VAR_4)
{
 struct arth *VAR_5;
 struct slist *VAR_6;
 int VAR_7;

 VAR_5 = (struct arth *)FUNC_2(VAR_3, sizeof(*VAR_5));

 VAR_7 = FUNC_0(VAR_3);

 VAR_6 = FUNC_1(VAR_3, VAR_1|VAR_0);
 VAR_6->s.k = VAR_4;
 VAR_6->next = FUNC_1(VAR_3, VAR_2);
 VAR_6->next->s.k = VAR_7;
 VAR_5->s = VAR_6;
 VAR_5->regno = VAR_7;

 return VAR_5;
}
