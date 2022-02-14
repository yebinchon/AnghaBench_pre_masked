
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rndtest_state {int rs_discard; } ;
struct TYPE_4__ {int rst_tests; } ;
struct TYPE_3__ {int (* test ) (struct rndtest_state*) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct rndtest_state*) ;

__attribute__((used)) static void
FUNC_1(struct rndtest_state *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 VAR_1.rst_tests++;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_5 |= (*VAR_2[VAR_4].test)(VAR_3);
 VAR_3->rs_discard = (VAR_5 != 0);
}
