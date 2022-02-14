
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct eh_region* prev_try; } ;
struct TYPE_4__ {TYPE_1__ cleanup; } ;
struct eh_region {TYPE_2__ u; } ;


 int VAR_0 ;
 struct eh_region* FUNC_0 (int ,struct eh_region*) ;

struct eh_region *
FUNC_1 (struct eh_region *VAR_1, struct eh_region *VAR_2)
{
  struct eh_region *VAR_3 = FUNC_0 (VAR_0, VAR_1);
  VAR_3->u.cleanup.prev_try = VAR_2;
  return VAR_3;
}
