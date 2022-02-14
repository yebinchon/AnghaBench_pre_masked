
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_10__ {TYPE_4__* node; } ;
typedef TYPE_3__ sorted_pattern_t ;
struct TYPE_8__ {scalar_t__ len; int data; } ;
struct TYPE_11__ {TYPE_1__ segment; } ;
typedef TYPE_4__ node_t ;
typedef int lookup_state_t ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(lookup_state_t *VAR_0,
                      const sorted_pattern_t *VAR_1,
                      const svn_stringbuf_t *VAR_2)
{
  node_t *VAR_3 = VAR_1->node;
  if ( VAR_3->segment.len <= VAR_2->len
      && !FUNC_1(VAR_3->segment.data, VAR_2->data, VAR_3->segment.len))
    FUNC_0(VAR_0, VAR_3);
}
