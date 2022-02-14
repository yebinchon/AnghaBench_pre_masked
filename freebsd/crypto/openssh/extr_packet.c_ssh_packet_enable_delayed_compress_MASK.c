
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshcomp {int enabled; scalar_t__ type; } ;
struct ssh {struct session_state* state; } ;
struct session_state {int after_authentication; TYPE_1__** newkeys; } ;
struct TYPE_2__ {struct sshcomp comp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ssh*) ;
 int FUNC_1 (struct ssh*) ;
 int FUNC_2 (struct ssh*,int) ;

__attribute__((used)) static int
FUNC_3(struct ssh *VAR_3)
{
 struct session_state *VAR_4 = VAR_3->state;
 struct sshcomp *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;





 VAR_4->after_authentication = 1;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {

  if (VAR_4->newkeys[VAR_7] == ((void*)0))
   continue;
  VAR_5 = &VAR_4->newkeys[VAR_7]->comp;
  if (VAR_5 && !VAR_5->enabled && VAR_5->type == VAR_0) {
   if ((VAR_6 = FUNC_0(VAR_3)) != 0)
    return VAR_6;
   if (VAR_7 == VAR_2) {
    if ((VAR_6 = FUNC_2(VAR_3, 6)) != 0)
     return VAR_6;
   } else {
    if ((VAR_6 = FUNC_1(VAR_3)) != 0)
     return VAR_6;
   }
   VAR_5->enabled = 1;
  }
 }
 return 0;
}
