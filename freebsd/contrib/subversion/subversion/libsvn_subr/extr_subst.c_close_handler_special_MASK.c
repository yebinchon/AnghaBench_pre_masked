
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct special_stream_baton {int pool; int path; TYPE_1__* write_content; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1)
{
  struct special_stream_baton *VAR_2 = VAR_1;

  if (VAR_2->write_content->len)
    {


      svn_stream_t *VAR_3 = FUNC_2(VAR_2->write_content,
                                                       VAR_2->pool);
      FUNC_0(FUNC_1(VAR_3, VAR_2->path, VAR_2->pool));
    }

  return VAR_0;
}
