
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_6__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct special_stream_baton {int write_content; int write_stream; int * read_stream; int path; int * pool; } ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 struct special_stream_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (struct special_stream_baton*,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int **,char const*,int *,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_11(svn_stream_t **VAR_4,
                                  const char *VAR_5,
                                  apr_pool_t *VAR_6)
{
  struct special_stream_baton *VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7));
  svn_error_t *VAR_8;

  VAR_7->pool = VAR_6;
  VAR_7->path = FUNC_2(VAR_6, VAR_5);

  VAR_8 = FUNC_10(&VAR_7->read_stream, VAR_5, VAR_6, VAR_6);


  if (VAR_8 && FUNC_0(VAR_8->apr_err))
    {
      FUNC_3(VAR_8);




      VAR_7->read_stream = ((void*)0);
    }

  VAR_7->write_content = FUNC_9(VAR_6);
  VAR_7->write_stream = FUNC_5(VAR_7->write_content, VAR_6);

  *VAR_4 = FUNC_4(VAR_7, VAR_6);
  FUNC_7(*VAR_4, ((void*)0) ,
                       VAR_2);
  FUNC_8(*VAR_4, VAR_3);
  FUNC_6(*VAR_4, VAR_1);

  return VAR_0;
}
