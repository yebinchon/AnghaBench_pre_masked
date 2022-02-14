
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct iter_hints_stub {TYPE_1__* dp; scalar_t__ noprime; } ;
struct iter_hints {int tree; } ;
struct delegpt {int namelabs; int name; } ;
struct TYPE_2__ {int namelabs; int name; } ;


 int FUNC_0 (int *,size_t*) ;
 scalar_t__ FUNC_1 (int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,size_t,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

struct iter_hints_stub*
FUNC_4(struct iter_hints* VAR_0, uint8_t* VAR_1,
 uint16_t VAR_2, struct delegpt* VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 struct iter_hints_stub *VAR_6;


 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 VAR_6 = (struct iter_hints_stub*)FUNC_2(&VAR_0->tree, VAR_1,
  VAR_4, VAR_5, VAR_2);
 if(!VAR_6) return ((void*)0);


 if(VAR_3 == ((void*)0)) {
  if(VAR_6->dp->namelabs != 1)
   return VAR_6;
  return ((void*)0);
 }





 if(VAR_6->noprime && FUNC_3(VAR_3->name, VAR_6->dp->name)==0)
  return VAR_6;




 if(FUNC_1(VAR_6->dp->name, VAR_6->dp->namelabs,
  VAR_3->name, VAR_3->namelabs))
  return VAR_6;
 return ((void*)0);
}
