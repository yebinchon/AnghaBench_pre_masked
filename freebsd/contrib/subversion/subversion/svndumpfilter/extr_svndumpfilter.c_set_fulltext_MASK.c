
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct node_baton_t {TYPE_2__* rb; int node_pool; int tcl; void* has_text; int * props; scalar_t__ has_props; int headers; void* writing_begun; int do_skip; } ;
struct TYPE_4__ {TYPE_1__* pb; } ;
struct TYPE_3__ {int * out_stream; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int *,int ,int *,void*,int ,void*,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_stream_t **VAR_2, void *VAR_3)
{
  struct node_baton_t *VAR_4 = VAR_3;

  if (!VAR_4->do_skip)
    {
      VAR_4->has_text = VAR_1;
      if (! VAR_4->writing_begun)
        {
          VAR_4->writing_begun = VAR_1;
          if (VAR_4->has_props)
            {
              FUNC_2(VAR_4->props, "PROPS-END\n");
            }
          FUNC_0(FUNC_1(VAR_4->rb->pb->out_stream,
                                              VAR_4->headers,
                                              VAR_4->has_props ? VAR_4->props : ((void*)0),
                                              VAR_4->has_text,
                                              VAR_4->tcl,
                                              VAR_1 ,
                                              VAR_4->node_pool));
        }
      *VAR_2 = VAR_4->rb->pb->out_stream;
    }

  return VAR_0;
}
