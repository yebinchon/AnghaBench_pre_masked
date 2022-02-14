
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct node_baton_t {TYPE_2__* rb; int node_pool; int tcl; int has_text; int * props; scalar_t__ has_props; int headers; scalar_t__ writing_begun; scalar_t__ do_skip; } ;
typedef int apr_size_t ;
struct TYPE_4__ {TYPE_1__* pb; } ;
struct TYPE_3__ {int out_stream; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2)
{
  struct node_baton_t *VAR_3 = VAR_2;
  apr_size_t VAR_4 = 2;


  if (VAR_3->do_skip)
    return VAR_0;


  if (! VAR_3->writing_begun)
    {
      VAR_3->writing_begun = VAR_1;
      if (VAR_3->has_props)
        {
          FUNC_3(VAR_3->props, "PROPS-END\n");
        }
      FUNC_0(FUNC_1(VAR_3->rb->pb->out_stream,
                                          VAR_3->headers,
                                          VAR_3->has_props ? VAR_3->props : ((void*)0),
                                          VAR_3->has_text,
                                          VAR_3->tcl,
                                          VAR_1 ,
                                          VAR_3->node_pool));
    }


  FUNC_0(FUNC_2(VAR_3->rb->pb->out_stream, "\n\n", &VAR_4));

  return VAR_0;
}
