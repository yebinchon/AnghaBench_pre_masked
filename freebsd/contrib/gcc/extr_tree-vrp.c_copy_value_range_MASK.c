
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int equiv; int max; int min; int type; } ;
typedef TYPE_1__ value_range_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1 (value_range_t *VAR_0, value_range_t *VAR_1)
{
  FUNC_0 (VAR_0, VAR_1->type, VAR_1->min, VAR_1->max, VAR_1->equiv);
}
