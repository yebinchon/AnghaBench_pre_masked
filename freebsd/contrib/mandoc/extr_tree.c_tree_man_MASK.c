
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_meta {scalar_t__ hasbody; TYPE_1__* first; } ;
struct TYPE_2__ {int child; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct roff_meta const*) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*) ;

void
FUNC_4(void *VAR_0, const struct roff_meta *VAR_1)
{
 FUNC_1(VAR_1);
 if (VAR_1->hasbody == 0)
  FUNC_3("body  = empty");
 FUNC_2('\n');
 FUNC_0(VAR_1->first->child, 0);
}
