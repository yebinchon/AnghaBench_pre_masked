
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {scalar_t__ type; TYPE_1__* ps; } ;
typedef enum termfont { ____Placeholder_termfont } termfont ;
struct TYPE_2__ {int lastf; int flags; int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct termp*,char*,int,...) ;

__attribute__((used)) static void
FUNC_2(struct termp *VAR_3, enum termfont VAR_4)
{

 FUNC_0(VAR_4 < VAR_1);
 VAR_3->ps->lastf = VAR_4;






 if (VAR_0 & VAR_3->ps->flags)
  return;

 if (VAR_2 == VAR_3->type)
  FUNC_1(VAR_3, "f%d\n", (int)VAR_4);
 else
  FUNC_1(VAR_3, "/F%d %zu Tf\n",
      (int)VAR_4, VAR_3->ps->scale);
}
