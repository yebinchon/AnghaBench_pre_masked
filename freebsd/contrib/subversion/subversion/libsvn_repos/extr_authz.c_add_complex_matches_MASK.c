
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_10__ {int data; } ;
struct TYPE_12__ {TYPE_1__ segment; } ;
typedef TYPE_3__ node_t ;
typedef int lookup_state_t ;
struct TYPE_13__ {int nelts; } ;
typedef TYPE_4__ apr_array_header_t ;
struct TYPE_14__ {TYPE_3__* node; } ;


 TYPE_8__ FUNC_0 (TYPE_4__*,int,int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(lookup_state_t *VAR_1,
                    const svn_stringbuf_t *VAR_2,
                    apr_array_header_t *VAR_3)
{
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3->nelts; ++VAR_4)
    {
      node_t *VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_0).node;
      if (0 == FUNC_2(VAR_5->segment.data, VAR_2->data, 0))
        FUNC_1(VAR_1, VAR_5);
    }
}
