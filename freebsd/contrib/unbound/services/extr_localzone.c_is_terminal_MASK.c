
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_data {int namelabs; int name; int node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct local_data* VAR_1)
{



 struct local_data* VAR_2 = (struct local_data*)FUNC_1(&VAR_1->node);
 if(VAR_2 == (struct local_data*)VAR_0)
  return 1;
 if(FUNC_0(VAR_2->name, VAR_2->namelabs, VAR_1->name, VAR_1->namelabs))
  return 0;
 return 1;
}
