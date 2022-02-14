
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct dir_baton {int deleted_entries; TYPE_1__* eb; int repos_relpath; int headers; scalar_t__ dump_props; } ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
struct TYPE_3__ {int stream; struct dir_baton* pending_db; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,int ,struct dir_baton*,int *,int ,int ,int *,int ,int *) ;
 int FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int VAR_3 ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_4,
                apr_pool_t *VAR_5)
{
  struct dir_baton *VAR_6 = VAR_4;
  apr_hash_index_t *VAR_7;
  svn_boolean_t VAR_8;


  VAR_8 = (VAR_6->eb->pending_db == VAR_6);

  FUNC_0(FUNC_7(VAR_6->eb, VAR_5));
  if ((! VAR_8) && (VAR_6->dump_props))
    {
      FUNC_0(FUNC_5(&VAR_6->headers,
                        VAR_6->eb, VAR_6->repos_relpath, VAR_6, ((void*)0),
                        VAR_3, VAR_0,
                        ((void*)0), VAR_1, VAR_5));
      VAR_6->eb->pending_db = VAR_6;
      FUNC_0(FUNC_7(VAR_6->eb, VAR_5));
    }


  for (VAR_7 = FUNC_2(VAR_5, VAR_6->deleted_entries); VAR_7;
       VAR_7 = FUNC_3(VAR_7))
    {
      const char *VAR_9 = FUNC_4(VAR_7);

      FUNC_0(FUNC_6(VAR_6->eb->stream, VAR_9, VAR_5));

      FUNC_0(FUNC_8(VAR_6->eb->stream, "\n"));
    }


  FUNC_1(VAR_6->deleted_entries);

  return VAR_2;
}
