
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sign; int canonical; int cl; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_1 (REAL_VALUE_TYPE *VAR_1, int VAR_2)
{
  FUNC_0 (VAR_1, 0, sizeof (*VAR_1));
  VAR_1->cl = VAR_0;
  VAR_1->sign = VAR_2;
  VAR_1->canonical = 1;
}
