
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int sequence_number; } ;
struct TYPE_11__ {TYPE_2__ access; } ;
struct TYPE_9__ {char* data; scalar_t__ len; } ;
struct TYPE_12__ {TYPE_3__ rights; TYPE_1__ segment; } ;
typedef TYPE_4__ node_t ;
struct TYPE_13__ {TYPE_1__ pattern; } ;
typedef TYPE_5__ authz_rule_segment_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,int) ;

__attribute__((used)) static node_t *
FUNC_1(authz_rule_segment_t *VAR_1,
            apr_pool_t *VAR_2)
{
  node_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));
  if (VAR_1)
    VAR_3->segment = VAR_1->pattern;
  else
    {
      VAR_3->segment.data = "";
      VAR_3->segment.len = 0;
    }
  VAR_3->rights.access.sequence_number = VAR_0;
  return VAR_3;
}
