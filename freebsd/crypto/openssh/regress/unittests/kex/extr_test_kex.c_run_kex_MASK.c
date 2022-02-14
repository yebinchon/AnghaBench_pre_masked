
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* kex; } ;
struct TYPE_2__ {int done; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ssh*,struct ssh*) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct ssh *VAR_1, struct ssh *VAR_2)
{
 int VAR_3 = 0;

 while (!VAR_2->kex->done || !VAR_1->kex->done) {
  if (VAR_0)
   FUNC_2(" S:");
  if ((VAR_3 = FUNC_1(VAR_2, VAR_1)))
   break;
  if (VAR_0)
   FUNC_2(" C:");
  if ((VAR_3 = FUNC_1(VAR_1, VAR_2)))
   break;
 }
 if (VAR_0)
  FUNC_2("done: %s\n", FUNC_3(VAR_3));
 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_2->kex->done, 1);
 FUNC_0(VAR_1->kex->done, 1);
}
