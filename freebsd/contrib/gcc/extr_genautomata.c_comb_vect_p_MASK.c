
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* state_ainsn_table_t ;
struct TYPE_3__ {int comb_vect; int full_vect; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1 (state_ainsn_table_t VAR_1)
{
  return (2 * FUNC_0 (VAR_0, VAR_1->full_vect)
           > 5 * FUNC_0 (VAR_0, VAR_1->comb_vect));
}
