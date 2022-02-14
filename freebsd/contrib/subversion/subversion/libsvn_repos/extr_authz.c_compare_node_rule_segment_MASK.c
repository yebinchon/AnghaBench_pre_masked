
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* node; } ;
typedef TYPE_4__ sorted_pattern_t ;
struct TYPE_8__ {int data; } ;
struct TYPE_10__ {TYPE_3__ pattern; } ;
typedef TYPE_5__ authz_rule_segment_t ;
struct TYPE_6__ {int data; } ;
struct TYPE_7__ {TYPE_1__ segment; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0,
                          const void *VAR_1)
{
  const sorted_pattern_t *VAR_2 = VAR_0;
  const authz_rule_segment_t *VAR_3 = VAR_1;

  return FUNC_0(VAR_2->node->segment.data, VAR_3->pattern.data);
}
