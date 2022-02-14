
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_error_t ;
struct dump_edit_baton {struct dir_baton* pending_db; int stream; } ;
struct dir_baton {scalar_t__ dump_props; int deleted_props; int props; int headers; } ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int **,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int ,int *,scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(struct dump_edit_baton *VAR_2,
                 apr_pool_t *VAR_3)
{
  struct dir_baton *VAR_4 = VAR_2->pending_db;
  svn_stringbuf_t *VAR_5 = ((void*)0);

  if (! VAR_4)
    return VAR_1;


  if (VAR_4->dump_props)
    {
      FUNC_0(FUNC_2(VAR_4->headers, &VAR_5,
                                VAR_4->props, VAR_4->deleted_props,
                                VAR_3, VAR_3));
    }
  FUNC_0(FUNC_3(VAR_2->stream, VAR_4->headers, VAR_5,
                                      VAR_0, 0, VAR_0 ,
                                      VAR_3));



  FUNC_0(FUNC_4(VAR_2->stream, "\n\n"));

  if (VAR_4->dump_props)
    {

      FUNC_1(VAR_4->props);
      FUNC_1(VAR_4->deleted_props);
      VAR_4->dump_props = VAR_0;
    }


  VAR_2->pending_db = ((void*)0);

  return VAR_1;
}
