
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; } ;
struct sppp {int* state; TYPE_1__ lcp; int * ch; } ;
struct cp {size_t protoidx; int TO; } ;
 int FUNC_0 (int *,int ,int ,void*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(const struct cp *VAR_0, struct sppp *VAR_1, int VAR_2)
{
 VAR_1->state[VAR_0->protoidx] = VAR_2;

 FUNC_1 (&VAR_1->ch[VAR_0->protoidx]);

 switch (VAR_2) {
 case 133:
 case 130:
 case 135:
 case 129:
 case 132:
  break;
 case 134:
 case 128:
 case 131:
 case 137:
 case 136:
  FUNC_0(&VAR_1->ch[VAR_0->protoidx], VAR_1->lcp.timeout,
         VAR_0->TO, (void *)VAR_1);
  break;
 }
}
